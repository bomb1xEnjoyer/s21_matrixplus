#include "test.h"

void CheckMatrix(S21Matrix matrix, double value) {
  for (int i = 0; i < matrix.GetRows(); ++i) {
    for (int j = 0; j < matrix.GetCols(); ++j) {
      ASSERT_NEAR(matrix(i, j), value, EPS_TEST);
    }
  }
}

void FillMatrix(S21Matrix& matrix, double value) {
  for (int i = 0; i < matrix.GetRows(); ++i) {
    for (int j = 0; j < matrix.GetCols(); ++j) {
      matrix(i, j) = value;
    }
  }
}