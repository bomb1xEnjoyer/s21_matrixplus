#include "test.h"

/************************** CALC_COMPLEMENTS TESTS *************************/

TEST(TestCalcComplements, TestCalcComplementsException1) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplementsException2) {
  S21Matrix test_matrix(3, 2);

  EXPECT_EQ(test_matrix.GetRows(), 3);
  EXPECT_EQ(test_matrix.GetCols(), 2);

  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplementsException3) {
  S21Matrix test_matrix(1, 5);

  EXPECT_EQ(test_matrix.GetRows(), 1);
  EXPECT_EQ(test_matrix.GetCols(), 5);

  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplementsException4) {
  S21Matrix test_matrix(5, 1);

  EXPECT_EQ(test_matrix.GetRows(), 5);
  EXPECT_EQ(test_matrix.GetCols(), 1);

  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplementsException5) {
  S21Matrix test_matrix(29, 30);

  EXPECT_EQ(test_matrix.GetRows(), 29);
  EXPECT_EQ(test_matrix.GetCols(), 30);

  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.CalcComplements());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplements1) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix result_check{2, 2};
  EXPECT_EQ(result_check.GetCols(), 2);
  EXPECT_EQ(result_check.GetRows(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  result_check(0, 0) = 4;
  result_check(0, 1) = -3;
  result_check(1, 0) = -2;
  result_check(1, 1) = 1;

  S21Matrix matrix_before = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == result_check);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplements2) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix result_check{2, 2};
  EXPECT_EQ(result_check.GetCols(), 2);
  EXPECT_EQ(result_check.GetRows(), 2);

  matrix1(0, 0) = 12.452;
  matrix1(0, 1) = 3.34245;
  matrix1(1, 0) = 3.356;
  matrix1(1, 1) = 3.543;

  result_check(0, 0) = 3.543;
  result_check(0, 1) = -3.356;
  result_check(1, 0) = -3.34245;
  result_check(1, 1) = 12.452;

  S21Matrix matrix_before = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_TRUE(result == result_check);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestCalcComplements, TestCalcComplements3) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  S21Matrix result_check{3, 3};
  EXPECT_EQ(result_check.GetCols(), 3);
  EXPECT_EQ(result_check.GetRows(), 3);

  matrix1(0, 0) = -3;
  matrix1(1, 0) = -8;
  matrix1(2, 0) = -8;

  matrix1(0, 1) = 7;
  matrix1(1, 1) = 7;
  matrix1(2, 1) = -4;

  matrix1(0, 2) = 4;
  matrix1(1, 2) = 7;
  matrix1(2, 2) = 3;

  S21Matrix matrix_before = matrix1;
  S21Matrix result = matrix1.CalcComplements();

  EXPECT_NEAR(result(0, 0), 49, EPS_TEST);
  EXPECT_NEAR(result(0, 1), -32, EPS_TEST);
  EXPECT_NEAR(result(0, 2), 88, EPS_TEST);

  EXPECT_NEAR(result(1, 0), -37, EPS_TEST);
  EXPECT_NEAR(result(1, 1), 23, EPS_TEST);
  EXPECT_NEAR(result(1, 2), -68, EPS_TEST);

  EXPECT_NEAR(result(2, 0), 21, EPS_TEST);
  EXPECT_NEAR(result(2, 1), -11, EPS_TEST);
  EXPECT_NEAR(result(2, 2), 35, EPS_TEST);

  EXPECT_TRUE(matrix1 == matrix_before);
}