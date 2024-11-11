#pragma once

#include <cmath>
#include <iostream>

class S21Matrix {
private:
  int rows_, cols_;
  double **matrix_;

  void DeleteMatrix();
  double **CreateMatrix();

public:
  S21Matrix();
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix &other);
  S21Matrix(S21Matrix &&other);
  ~S21Matrix();

  int GetRows();
  void SetRows(int rows);
  int GetCols();
  void SetCols(int cols);

  bool EqMatrix(const S21Matrix &other);
  void SumMatrix(const S21Matrix &other);
  void SubMatrix(const S21Matrix &other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix &other);
  S21Matrix Transpose();
  S21Matrix CalcComplements();
  double Determinant();
  S21Matrix InverseMatrix();

  S21Matrix operator+(const S21Matrix &other);
  S21Matrix operator-(const S21Matrix &other);
  S21Matrix operator*(const S21Matrix &other);
  S21Matrix operator*(double number);
  bool operator==(const S21Matrix &other);
  S21Matrix &operator=(const S21Matrix &other);
  S21Matrix &operator+=(const S21Matrix &other);
  S21Matrix &operator-=(const S21Matrix &other);
  S21Matrix &operator*=(const S21Matrix &other);
  S21Matrix &operator*=(double number);
  double &operator()(int i, int j);

  void TransformationToTriangleMatrix(S21Matrix *copy);
  double GetMinor(int row, int column);
};