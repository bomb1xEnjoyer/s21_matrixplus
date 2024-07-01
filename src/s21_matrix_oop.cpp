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

double& S21Matrix::operator()(int i, int j) {
  if (i < 0 || j < 0 || i >= rows_ || j >= cols_)
    throw MyCustomException(
        "Exception. operator()(int i, int j) - Index out of range.");
  return matrix_[i][j];
}

S21Matrix S21Matrix::Transpose() {
  S21Matrix temp(cols_, rows_);

  for (int i = 0; i < cols_; ++i)
    for (int j = 0; j < rows_; ++j) temp.matrix_[i][j] = matrix_[j][i];

  return temp;
}

S21Matrix S21Matrix::CalcComplements() {
  if (rows_ != cols_)
    throw MyCustomException(
        "Exception. Determinant() - columns must be equal to rows.");
  S21Matrix result(*this);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j) {
      if ((i + j) % 2 == 1)
        result.matrix_[i][j] = this->GetMinor(i, j) * -1;
      else
        result.matrix_[i][j] = this->GetMinor(i, j);
    }
  return result;
}

double S21Matrix::GetMinor(int row, int column) {
  S21Matrix small(rows_ - 1, cols_ - 1);
  int small_i = 0, small_j = 0;
  for (int i = 0; i < rows_; ++i) {
    for (int j = 0; j < cols_; ++j)
      if (i != row && j != column) {
        small.matrix_[small_i][small_j] = matrix_[i][j];
        small_j++;
        if (small_j == rows_ - 1) {
          small_j = 0;
          small_i++;
        }
      }
  }
  return small.Determinant();
}

double S21Matrix::Determinant() {
  double det = 1;

  if (rows_ != cols_)
    throw MyCustomException(
        "Exception. Determinant() - columns must be equal to rows.");

  S21Matrix* copy = new S21Matrix(*this);
  TransformationToTriangleMatrix(copy);
  for (int i = 0; i < rows_; ++i) det *= copy->matrix_[i][i];
  delete copy;

  return det;
}

void S21Matrix::TransformationToTriangleMatrix(S21Matrix* copy) {
  for (int i = 0; i < copy->rows_ - 1; ++i)
    for (int k = i + 1; k < copy->rows_; ++k) {
      double coefficient = copy->matrix_[k][i] / copy->matrix_[i][i];
      for (int j = 0; j < copy->rows_; ++j) {
        copy->matrix_[k][j] -= coefficient * copy->matrix_[i][j];
        if (std::isnan(copy->matrix_[k][j])) copy->matrix_[k][j] = 0;
      }
    }
}

S21Matrix S21Matrix::InverseMatrix() {
  double det = this->Determinant();
  if (fabs(det) < 1e-7)
    throw MyCustomException(
        "Exception. InverseMatrix() - determinant = 0 => inverse matrix "
        "doesn't exist.");

  S21Matrix complements_matrix = this->CalcComplements();
  S21Matrix transposed_complements_matrix = complements_matrix.Transpose();
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      transposed_complements_matrix.matrix_[i][j] /= det;

  return transposed_complements_matrix;
}
