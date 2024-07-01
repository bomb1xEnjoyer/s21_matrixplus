#include "test.h"

/**************************** SUM_MATRIX TESTS *************************/

TEST(TestSum, TestSumFunctionException1) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException2) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException3) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException4) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException5) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException6) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException7) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumFunctionException8) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.SumMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException1) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException2) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException3) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException4) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException5) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException6) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException7) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException8) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 + matrix2);
  EXPECT_ANY_THROW(matrix2 + matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException9) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException10) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException11) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException12) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException13) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException14) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException15) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSumOperatorException16) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 += matrix2);
  EXPECT_ANY_THROW(matrix2 += matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestSum, TestSum1) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{95, 99};
  EXPECT_EQ(matrix2.GetRows(), 95);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, 3.5);

  matrix1.SumMatrix(matrix2);

  CheckMatrix(matrix1, 2.5 + 3.5);

  matrix2.SumMatrix(matrix1);

  CheckMatrix(matrix2, 3.5 + 2.5 + 3.5);
}

TEST(TestSum, TestSum2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.GetRows(), 99);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, -2.5);

  matrix1.SumMatrix(matrix2);

  CheckMatrix(matrix1, 0.0);

  matrix2.SumMatrix(matrix1);

  CheckMatrix(matrix2, -2.5);
}

TEST(TestSum, TestSum3) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

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

  matrix2(0, 0) = 0.0;
  matrix2(0, 1) = 1.0;
  matrix2(0, 2) = 2.0;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(1, 2) = 4.0;
  matrix2(2, 0) = -1.0;
  matrix2(2, 1) = -2.0;
  matrix2(2, 2) = 0.0;
  matrix2(3, 0) = -3.0;
  matrix2(3, 1) = 0.0;
  matrix2(3, 2) = 4.0;

  check_matrix(0, 0) = 1.5;
  check_matrix(0, 1) = 3.5;
  check_matrix(0, 2) = 5.5;
  check_matrix(1, 0) = 1.5;
  check_matrix(1, 1) = -2.5;
  check_matrix(1, 2) = 0.5;
  check_matrix(2, 0) = -1.0;
  check_matrix(2, 1) = -2.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = -2.0;
  check_matrix(3, 1) = 1.0;
  check_matrix(3, 2) = 5.0;

  matrix1.SumMatrix(matrix2);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestSum, TestSum4) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  matrix1(0, 0) = 145678000.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = 673552.54545324;
  matrix1(1, 1) = 145678000.588;

  matrix2(0, 0) = 14567800.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;

  check_matrix(0, 0) = 160245801.365;
  check_matrix(0, 1) = -9084;
  check_matrix(1, 0) = 673555.54545324;
  check_matrix(1, 1) = 145678000.588;

  matrix1.SumMatrix(matrix2);

  EXPECT_TRUE(matrix1 == check_matrix);
}

TEST(TestSum, TestSumOperation1) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{95, 99};
  EXPECT_EQ(matrix2.GetRows(), 95);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, 3.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 + matrix2;

  EXPECT_EQ(result.GetRows(), 95);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 2.5 + 3.5);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.GetRows(), 99);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, -2.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 + matrix2;

  EXPECT_EQ(result.GetRows(), 99);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 0.0);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation3) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

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

  matrix2(0, 0) = 0.0;
  matrix2(0, 1) = 1.0;
  matrix2(0, 2) = 2.0;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(1, 2) = 4.0;
  matrix2(2, 0) = -1.0;
  matrix2(2, 1) = -2.0;
  matrix2(2, 2) = 0.0;
  matrix2(3, 0) = -3.0;
  matrix2(3, 1) = 0.0;
  matrix2(3, 2) = 4.0;

  check_matrix(0, 0) = 1.5;
  check_matrix(0, 1) = 3.5;
  check_matrix(0, 2) = 5.5;
  check_matrix(1, 0) = 1.5;
  check_matrix(1, 1) = -2.5;
  check_matrix(1, 2) = 0.5;
  check_matrix(2, 0) = -1.0;
  check_matrix(2, 1) = -2.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = -2.0;
  check_matrix(3, 1) = 1.0;
  check_matrix(3, 2) = 5.0;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 + matrix2;

  EXPECT_EQ(result.GetRows(), 4);
  EXPECT_EQ(result.GetCols(), 3);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation4) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  matrix1(0, 0) = 145678000.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = 673552.54545324;
  matrix1(1, 1) = 145678000.588;

  matrix2(0, 0) = 14567800.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;

  check_matrix(0, 0) = 160245801.365;
  check_matrix(0, 1) = -9084;
  check_matrix(1, 0) = 673555.54545324;
  check_matrix(1, 1) = 145678000.588;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1 + matrix2;

  EXPECT_EQ(result.GetRows(), 2);
  EXPECT_EQ(result.GetCols(), 2);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation5) {
  S21Matrix matrix1{95, 99};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{95, 99};
  EXPECT_EQ(matrix2.GetRows(), 95);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, 3.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result{95, 99};

  result += matrix1;

  EXPECT_EQ(result.GetRows(), 95);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 2.5);

  result += matrix2;

  EXPECT_EQ(result.GetRows(), 95);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 2.5 + 3.5);

  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation6) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.GetRows(), 99);
  EXPECT_EQ(matrix2.GetCols(), 99);

  FillMatrix(matrix1, 2.5);
  FillMatrix(matrix2, -2.5);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result{99, 99};

  result += matrix1;

  EXPECT_EQ(result.GetRows(), 99);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 2.5);

  result += matrix2;

  EXPECT_EQ(result.GetRows(), 99);
  EXPECT_EQ(result.GetCols(), 99);
  CheckMatrix(result, 0.0);

  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation7) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(matrix2.GetRows(), 4);
  EXPECT_EQ(matrix2.GetCols(), 3);

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

  matrix2(0, 0) = 0.0;
  matrix2(0, 1) = 1.0;
  matrix2(0, 2) = 2.0;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(1, 2) = 4.0;
  matrix2(2, 0) = -1.0;
  matrix2(2, 1) = -2.0;
  matrix2(2, 2) = 0.0;
  matrix2(3, 0) = -3.0;
  matrix2(3, 1) = 0.0;
  matrix2(3, 2) = 4.0;

  check_matrix(0, 0) = 1.5;
  check_matrix(0, 1) = 3.5;
  check_matrix(0, 2) = 5.5;
  check_matrix(1, 0) = 1.5;
  check_matrix(1, 1) = -2.5;
  check_matrix(1, 2) = 0.5;
  check_matrix(2, 0) = -1.0;
  check_matrix(2, 1) = -2.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = -2.0;
  check_matrix(3, 1) = 1.0;
  check_matrix(3, 2) = 5.0;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1;
  result += matrix2;

  EXPECT_EQ(result.GetRows(), 4);
  EXPECT_EQ(result.GetCols(), 3);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation8) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  matrix1(0, 0) = 145678000.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = 673552.54545324;
  matrix1(1, 1) = 145678000.588;

  matrix2(0, 0) = 14567800.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;

  check_matrix(0, 0) = 160245801.365;
  check_matrix(0, 1) = -9084;
  check_matrix(1, 0) = 673555.54545324;
  check_matrix(1, 1) = 145678000.588;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result = matrix1;
  result += matrix2;

  EXPECT_EQ(result.GetRows(), 2);
  EXPECT_EQ(result.GetCols(), 2);

  EXPECT_TRUE(result == check_matrix);
  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}

TEST(TestSum, TestSumOperation9) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  S21Matrix matrix2{1, 1};
  EXPECT_EQ(matrix2.GetRows(), 1);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{1, 1};
  EXPECT_EQ(matrix2.GetRows(), 1);
  EXPECT_EQ(matrix2.GetCols(), 1);

  matrix1(0, 0) = 1.0;
  matrix2(0, 0) = 0.5;
  check_matrix(0, 0) = 1.5;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;
  S21Matrix result1 = matrix1;
  S21Matrix result2 = matrix1 + matrix2;
  result1 += matrix2;

  EXPECT_EQ(result1.GetRows(), 1);
  EXPECT_EQ(result1.GetCols(), 1);
  EXPECT_TRUE(result1 == check_matrix);

  EXPECT_EQ(result2.GetRows(), 1);
  EXPECT_EQ(result2.GetCols(), 1);
  EXPECT_TRUE(result2 == check_matrix);

  EXPECT_TRUE(matrix1_before == matrix1);
  EXPECT_TRUE(matrix2_before == matrix2);
}