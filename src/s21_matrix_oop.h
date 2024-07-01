#ifndef S21_MATRIX_OOP_H
#define S21_MATRIX_OOP_H

#include <cmath>
#include <iostream>
#include <string>

class MyCustomException : public std::exception {
 private:
  std::string message_;

 public:
  MyCustomException(const std::string& message) : message_(message) {}
  const char* what() const noexcept override { return message_.c_str(); }
};

class S21Matrix {
 private:
  int rows_, cols_;
  double** matrix_;

  void DeleteMatrix();
  double** CreateMatrix();

 public:
  S21Matrix();
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix& other);  // copy constructor
  S21Matrix(S21Matrix&& other);       // move constructor
  ~S21Matrix();

  int GetRows();
  void SetRows(int rows);
  int GetCols();
  void SetCols(int cols);

  bool EqMatrix(const S21Matrix& other);
  void SumMatrix(const S21Matrix& other);
  void SubMatrix(const S21Matrix& other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix& other);
  S21Matrix Transpose();
  S21Matrix CalcComplements();
  double Determinant();
  S21Matrix InverseMatrix();

  S21Matrix operator+(const S21Matrix& other);
  S21Matrix operator-(const S21Matrix& other);
  S21Matrix operator*(const S21Matrix& other);
  S21Matrix operator*(double number);
  bool operator==(const S21Matrix& other);
  S21Matrix& operator=(const S21Matrix& other);
  S21Matrix& operator+=(const S21Matrix& other);
  S21Matrix& operator-=(const S21Matrix& other);
  S21Matrix& operator*=(const S21Matrix& other);
  S21Matrix& operator*=(double number);
  double& operator()(int i, int j);

  void TransformationToTriangleMatrix(S21Matrix* copy);
  double GetMinor(int row, int column);
};

#endif