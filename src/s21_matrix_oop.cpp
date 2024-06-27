#include "s21_matrix_oop.h"

double** S21Matrix::CreateMatrix() {
  matrix_ = new double*[rows_];
  for (int i = 0; i < rows_; ++i) matrix_[i] = new double[cols_]{0.0};
  return matrix_;
}

void S21Matrix::DeleteMatrix() {
  if (matrix_ != nullptr) {
    for (int i = 0; i < rows_; ++i) delete[] matrix_[i];
    delete[] matrix_;
    matrix_ = nullptr;
  }
}

int S21Matrix::GetRows() { return rows_; }

int S21Matrix::GetCols() { return cols_; }

void S21Matrix::SetRows(int rows) {
  if (rows > 0) {
    int min_rows = rows < rows_ ? rows : rows_;
    S21Matrix temp(rows, cols_);

    for (int i = 0; i < min_rows; ++i)
      for (int j = 0; j < cols_; ++j) temp.matrix_[i][j] = matrix_[i][j];

    DeleteMatrix();
    *this = temp;
  } else
    throw MyCustomException(
        "Exception. SetRows(int rows) - rows value must be > 0.");
}

void S21Matrix::SetCols(int cols) {
  if (cols > 0) {
    int min_cols = cols < cols_ ? cols : cols_;
    S21Matrix temp(rows_, cols);

    for (int i = 0; i < rows_; ++i)
      for (int j = 0; j < min_cols; ++j) temp.matrix_[i][j] = matrix_[i][j];

    DeleteMatrix();
    *this = temp;
  } else
    throw MyCustomException(
        "Exception. SetCols(int cols) - cols value must be > 0.");
}

S21Matrix::S21Matrix() : rows_(3), cols_(3) { CreateMatrix(); }

S21Matrix::S21Matrix(int rows, int cols) {
  if (rows > 0 && cols > 0) {
    rows_ = rows;
    cols_ = cols;
    CreateMatrix();
  } else
    throw MyCustomException(
        "Exception. S21Matrix(int rows, int cols) - rows and cols values must "
        "be > 0.");
}

S21Matrix::S21Matrix(const S21Matrix& other)
    : rows_(other.rows_), cols_(other.cols_) {
  CreateMatrix();
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j) matrix_[i][j] = other.matrix_[i][j];
}

S21Matrix::S21Matrix(S21Matrix&& other)
    : rows_(other.rows_), cols_(other.cols_) {
  this->matrix_ = other.matrix_;
  other.rows_ = 0;
  other.cols_ = 0;
  other.matrix_ = nullptr;
}

S21Matrix::~S21Matrix() {
  DeleteMatrix();
  rows_ = 0;
  cols_ = 0;
}

S21Matrix S21Matrix::operator+(const S21Matrix& other) {
  if (rows_ != other.rows_ || cols_ != other.cols_)
    throw MyCustomException(
        "Exception. operator+(const S21Matrix& other) - sizes must be equal.");
  S21Matrix answer(rows_, cols_);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      answer.matrix_[i][j] = matrix_[i][j] + other.matrix_[i][j];
  return answer;
}

S21Matrix S21Matrix::operator-(const S21Matrix& other) {
  if (rows_ != other.rows_ || cols_ != other.cols_)
    throw MyCustomException(
        "Exception. operator-(const S21Matrix& other) - sizes must be equal.");
  S21Matrix answer(rows_, cols_);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      answer.matrix_[i][j] = matrix_[i][j] - other.matrix_[i][j];
  return answer;
}

S21Matrix S21Matrix::operator*(const S21Matrix& other) {
  if (cols_ != other.rows_)
    throw MyCustomException(
        "Exception. operator*(const S21Matrix& other) - sizes are not valid "
        "for multiplication.");
  S21Matrix answer(rows_, other.cols_);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < other.cols_; ++j)
      for (int k = 0; k < cols_; ++k)
        answer.matrix_[i][j] += matrix_[i][k] * other.matrix_[k][j];
  return answer;
}

S21Matrix S21Matrix::operator*(double number) {
  S21Matrix answer(*this);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      answer.matrix_[i][j] = matrix_[i][j] * number;
  return answer;
}

bool S21Matrix::operator==(const S21Matrix& other) {
  if (rows_ != other.rows_ || cols_ != other.cols_) return false;
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      if (fabs(matrix_[i][j] != other.matrix_[i][j]) >= 1e-7) return false;
  return true;
}

S21Matrix& S21Matrix::operator=(const S21Matrix& other) {
  DeleteMatrix();
  rows_ = other.rows_;
  cols_ = other.cols_;
  CreateMatrix();
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j) matrix_[i][j] = other.matrix_[i][j];
  return *this;
}

S21Matrix& S21Matrix::operator+=(const S21Matrix& other) {
  *this = *this + other;
  return *this;
}

S21Matrix& S21Matrix::operator-=(const S21Matrix& other) {
  *this = *this - other;
  return *this;
}

S21Matrix& S21Matrix::operator*=(const S21Matrix& other) {
  *this = *this * other;
  return *this;
}

S21Matrix& S21Matrix::operator*=(double number) {
  *this = *this * number;
  return *this;
}

bool S21Matrix::EqMatrix(const S21Matrix& other) { return (*this) == other; }

void S21Matrix::SumMatrix(const S21Matrix& other) { (*this) += other; }

void S21Matrix::SubMatrix(const S21Matrix& other) { (*this) -= other; }

void S21Matrix::MulNumber(const double num) { (*this) *= num; }

void S21Matrix::MulMatrix(const S21Matrix& other) { (*this) *= other; }

S21Matrix S21Matrix::Transpose() {
  S21Matrix temp(cols_, rows_);

  for (int i = 0; i < cols_; ++i)
    for (int j = 0; j < rows_; ++j) temp.matrix_[i][j] = matrix_[i][j];

  return temp;
}

S21Matrix S21Matrix::CalcComplements() {}

double S21Matrix::Determinant() {
  double det = 0;

  if (rows_ != cols_)
    throw MyCustomException(
        "Exception. Determinant() - columns must be equal to rows.");

  S21Matrix copy(*this);

  for (int i = 0; i < rows_; ++i) det *= copy.matrix_[i][i];

  return det;
}

void S21Matrix::TransformationToTriangleMatrix(S21Matrix& copy) {
  for (int i = 0; i < copy.rows_; ++i)
    for (int k = i + 1; k < copy.rows_; ++k) {
      double coefficient = copy.matrix_[k][i] / copy.matrix_[i][i];
      for (int j = 0; j < copy.rows_; ++j)
        copy.matrix_[k][j] -= coefficient * copy.matrix_[i][j];
    }
}

S21Matrix S21Matrix::InverseMatrix() {}
