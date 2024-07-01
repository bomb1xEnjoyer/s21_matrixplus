#include "test.h"

/**************************** Mul_Number_Matrix TESTS *************************/

TEST(TestMulNumber, TestMulNumber1) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);

  double number = 2.0;

  FillMatrix(matrix1, 2.5);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 2.5 * number);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 2.5 * number * number);
}

TEST(TestMulNumber, TestMulNumber2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  double number = -2.5;

  FillMatrix(matrix1, 2.5);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 2.5 * number);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 2.5 * number * number);
}

TEST(TestMulNumber, TestMulNumber3) {
  S21Matrix matrix1{199, 1};
  EXPECT_EQ(matrix1.GetRows(), 199);
  EXPECT_EQ(matrix1.GetCols(), 1);

  double number = -2.999;

  FillMatrix(matrix1, -1.999);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, -1.999 * number);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, -1.999 * number * number);
}

TEST(TestMulNumber, TestMulNumber4) {
  S21Matrix matrix1{1, 199};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 199);

  double number = 2.5999;

  FillMatrix(matrix1, 1.5999);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 1.5999 * number);

  matrix1.MulNumber(number);

  CheckMatrix(matrix1, 1.5999 * number * number);
}

TEST(TestMulNumber, TestMulNumber5) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix check_matrix = matrix1;
  EXPECT_EQ(check_matrix.GetRows(), 4);
  EXPECT_EQ(check_matrix.GetCols(), 3);

  double number = 1.99;

  matrix1(0, 0) = 1.5;
  matrix1(0, 1) = 2.5;
  matrix1(0, 2) = 3.5;
  matrix1(1, 0) = -1.5;
  matrix1(1, 1) = -2.5;
  matrix1(1, 2) = -3.5;
  matrix1(2, 0) = 0.0;
  matrix1(2, 1) = 0.0;
  matrix1(2, 2) = 0.0;
  matrix1(3, 0) = 1.0;
  matrix1(3, 1) = 1.0;
  matrix1(3, 2) = 1.0;

  check_matrix(0, 0) = 2.985;
  check_matrix(0, 1) = 4.975;
  check_matrix(0, 2) = 6.965;
  check_matrix(1, 0) = -2.985;
  check_matrix(1, 1) = -4.975;
  check_matrix(1, 2) = -6.965;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 1.99;
  check_matrix(3, 1) = 1.99;
  check_matrix(3, 2) = 1.99;

  matrix1.MulNumber(number);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestMulNumber, TestMulNumber6) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  double number = 10;

  matrix1(0, 0) = 10;
  matrix1(0, 1) = 20;
  matrix1(1, 0) = 30;
  matrix1(1, 1) = 40.5;

  check_matrix(0, 0) = 100;
  check_matrix(0, 1) = 200;
  check_matrix(1, 0) = 300;
  check_matrix(1, 1) = 405;

  matrix1.MulNumber(number);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestMulNumber, TestMulNumberOperator1) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);

  double number = 2.0;

  FillMatrix(matrix1, 2.5);
  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1 * -number;
  S21Matrix result3 = matrix1;
  result3 *= number;

  CheckMatrix(result1, 2.5 * number);
  CheckMatrix(result2, 2.5 * -number);
  CheckMatrix(result3, 2.5 * number);
  EXPECT_TRUE(matrix1_before == matrix1);
}

TEST(TestMulNumber, TestMulNumberOperator2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  double number = -2.5;

  FillMatrix(matrix1, 2.5);
  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1 * -number;
  S21Matrix result3 = matrix1;
  result3 *= number;

  CheckMatrix(result1, 2.5 * number);
  CheckMatrix(result2, 2.5 * -number);
  CheckMatrix(result3, 2.5 * number);
  EXPECT_TRUE(matrix1_before == matrix1);
}

TEST(TestMulNumber, TestMulNumberOperator3) {
  S21Matrix matrix1{199, 1};
  EXPECT_EQ(matrix1.GetRows(), 199);
  EXPECT_EQ(matrix1.GetCols(), 1);

  double number = -2.999;

  FillMatrix(matrix1, -1.999);
  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1 * -number;
  S21Matrix result3 = matrix1;
  result3 *= number;

  CheckMatrix(result1, -1.999 * number);
  CheckMatrix(result2, -1.999 * -number);
  CheckMatrix(result3, -1.999 * number);
  EXPECT_TRUE(matrix1_before == matrix1);
}

TEST(TestMulNumber, TestMulNumberOperator4) {
  S21Matrix matrix1{1, 199};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 199);

  double number = 2.5999;

  FillMatrix(matrix1, 1.5999);
  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1 * -number;
  S21Matrix result3 = matrix1;
  result3 *= number;

  CheckMatrix(result1, 1.5999 * number);
  CheckMatrix(result2, 1.5999 * -number);
  CheckMatrix(result3, 1.5999 * number);
  EXPECT_TRUE(matrix1_before == matrix1);
}

TEST(TestMulNumber, TestMulNumberOperator5) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix check_matrix = matrix1;
  EXPECT_EQ(check_matrix.GetRows(), 4);
  EXPECT_EQ(check_matrix.GetCols(), 3);

  double number = 1.99;

  matrix1(0, 0) = 1.5;
  matrix1(0, 1) = 2.5;
  matrix1(0, 2) = 3.5;
  matrix1(1, 0) = -1.5;
  matrix1(1, 1) = -2.5;
  matrix1(1, 2) = -3.5;
  matrix1(2, 0) = 0.0;
  matrix1(2, 1) = 0.0;
  matrix1(2, 2) = 0.0;
  matrix1(3, 0) = 1.0;
  matrix1(3, 1) = 1.0;
  matrix1(3, 2) = 1.0;

  check_matrix(0, 0) = 2.985;
  check_matrix(0, 1) = 4.975;
  check_matrix(0, 2) = 6.965;
  check_matrix(1, 0) = -2.985;
  check_matrix(1, 1) = -4.975;
  check_matrix(1, 2) = -6.965;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 1.99;
  check_matrix(3, 1) = 1.99;
  check_matrix(3, 2) = 1.99;

  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1;
  result2 *= number;

  EXPECT_TRUE(result1 == check_matrix);
  EXPECT_TRUE(result2 == check_matrix);
  EXPECT_TRUE(matrix1 == matrix1_before);
}

TEST(TestMulNumber, TestMulNumberOperator6) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix check_matrix = matrix1;
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  double number = 10;

  matrix1(0, 0) = 10;
  matrix1(0, 1) = 20;
  matrix1(1, 0) = 30;
  matrix1(1, 1) = 40.5;

  check_matrix(0, 0) = 100;
  check_matrix(0, 1) = 200;
  check_matrix(1, 0) = 300;
  check_matrix(1, 1) = 405;

  S21Matrix matrix1_before = matrix1;
  S21Matrix result1 = matrix1 * number;
  S21Matrix result2 = matrix1;
  result2 *= number;

  EXPECT_TRUE(result1 == check_matrix);
  EXPECT_TRUE(result2 == check_matrix);
  EXPECT_TRUE(matrix1 == matrix1_before);
}