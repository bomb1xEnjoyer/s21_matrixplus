#include "test.h"

/**************************** Mul_Matrix TESTS *************************/

TEST(TestMulMatrix, TestMulMatrixFunctionException1) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException2) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException3) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException4) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException5) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException6) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException7) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixFunctionException8) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_ANY_THROW(matrix2.MulMatrix(matrix1));
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException1) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException2) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException3) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException4) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException5) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException6) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException7) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException8) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 * matrix2);
  EXPECT_ANY_THROW(matrix2 * matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException9) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException10) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException11) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException12) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException13) {
  S21Matrix matrix1{3, 2};
  S21Matrix matrix2{3, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException14) {
  S21Matrix matrix1{2, 3};
  S21Matrix matrix2{2, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException15) {
  S21Matrix matrix1{3, 3};
  S21Matrix matrix2{2, 2};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperatorException16) {
  S21Matrix matrix1{2, 2};
  S21Matrix matrix2{3, 3};

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 2.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  EXPECT_ANY_THROW(matrix1 *= matrix2);
  EXPECT_ANY_THROW(matrix2 *= matrix1);
  EXPECT_TRUE(matrix1 == matrix1_before);
  EXPECT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix1) {
  S21Matrix matrix1{95, 98};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 98);

  S21Matrix matrix2{98, 99};
  EXPECT_EQ(matrix2.GetRows(), 98);
  EXPECT_EQ(matrix2.GetCols(), 99);

  S21Matrix check_matrix{95, 99};
  EXPECT_EQ(check_matrix.GetRows(), 95);
  EXPECT_EQ(check_matrix.GetCols(), 99);

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 1.0);
  FillMatrix(check_matrix, 98.0);

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 99);
}

TEST(TestMulMatrix, TestMulMatrix2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.GetRows(), 99);
  EXPECT_EQ(matrix2.GetCols(), 99);

  S21Matrix check_matrix{99, 99};
  EXPECT_EQ(check_matrix.GetRows(), 99);
  EXPECT_EQ(check_matrix.GetCols(), 99);

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 0.0);
  FillMatrix(check_matrix, 0.0);

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 2;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 4;
  matrix2(1, 1) = 5;

  check_matrix(0, 0) = 10;
  check_matrix(0, 1) = 13;
  check_matrix(1, 0) = 22;
  check_matrix(1, 1) = 29;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix4) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{3, 3};
  EXPECT_EQ(matrix2.GetRows(), 3);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(check_matrix.GetRows(), 4);
  EXPECT_EQ(check_matrix.GetCols(), 3);

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

  check_matrix(0, 0) = 4.0;
  check_matrix(0, 1) = -5.5;
  check_matrix(0, 2) = 13.0;
  check_matrix(1, 0) = -4.0;
  check_matrix(1, 1) = 5.5;
  check_matrix(1, 2) = -13.0;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 2.0;
  check_matrix(3, 1) = -1.0;
  check_matrix(3, 2) = 6.0;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix5) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 2;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 4;
  matrix2(1, 1) = 5;

  check_matrix(0, 0) = 10;
  check_matrix(0, 1) = 13;
  check_matrix(1, 0) = 22;
  check_matrix(1, 1) = 29;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix6) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  S21Matrix matrix2{1, 1};
  EXPECT_EQ(matrix2.GetRows(), 1);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{1, 1};
  EXPECT_EQ(check_matrix.GetRows(), 1);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 1.456;

  matrix2(0, 0) = 12.987;

  check_matrix(0, 0) = 18.909072;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix7) {
  S21Matrix matrix1{2, 3};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{3, 1};
  EXPECT_EQ(matrix2.GetRows(), 3);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{2, 1};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 3;
  matrix1(0, 1) = 4;
  matrix1(0, 2) = 5;
  matrix1(1, 0) = 9;
  matrix1(1, 1) = 8;
  matrix1(1, 2) = 7;

  matrix2(0, 0) = 10;
  matrix2(1, 0) = 20;
  matrix2(2, 0) = 30;

  check_matrix(0, 0) = 260;
  check_matrix(1, 0) = 460;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 1);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix8) {
  S21Matrix matrix1{3, 2};
  EXPECT_EQ(matrix1.GetRows(), 3);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 1};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{3, 1};
  EXPECT_EQ(check_matrix.GetRows(), 3);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = -2.0;
  matrix1(1, 1) = 673.545453;
  matrix1(2, 0) = 14567.588;
  matrix1(2, 1) = 3.0;

  matrix2(0, 0) = 14567.777;
  matrix2(1, 0) = -4542;

  check_matrix(0, 0) = 232847137.411876;
  check_matrix(1, 0) = -3088379.001526;
  check_matrix(2, 0) = 212203747.411876;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 3);
  EXPECT_EQ(matrix1.GetCols(), 1);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrix9) {
  S21Matrix matrix1{1, 2};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 3};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{1, 3};
  EXPECT_EQ(check_matrix.GetRows(), 1);
  EXPECT_EQ(check_matrix.GetCols(), 3);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;

  matrix2(0, 0) = 14567.777;
  matrix2(0, 1) = -4542;
  matrix2(0, 2) = -2.0;
  matrix2(1, 0) = 673.545453;
  matrix2(1, 1) = 14567.588;
  matrix2(1, 2) = 3.0;

  check_matrix(0, 0) = 209158129.96435;
  check_matrix(0, 1) = -132331969.392;
  check_matrix(0, 2) = -42761.176;

  S21Matrix matrix2_before = matrix2;
  matrix1.MulMatrix(matrix2);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 3);

  ASSERT_TRUE(matrix1 == check_matrix);
  ASSERT_TRUE(matrix2 == matrix2_before);
}

TEST(TestMulMatrix, TestMulMatrixOperator1) {
  S21Matrix matrix1{95, 98};
  EXPECT_EQ(matrix1.GetRows(), 95);
  EXPECT_EQ(matrix1.GetCols(), 98);

  S21Matrix matrix2{98, 99};
  EXPECT_EQ(matrix2.GetRows(), 98);
  EXPECT_EQ(matrix2.GetCols(), 99);

  S21Matrix check_matrix{95, 99};
  EXPECT_EQ(check_matrix.GetRows(), 95);
  EXPECT_EQ(check_matrix.GetCols(), 99);

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 1.0);
  FillMatrix(check_matrix, 98.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator2) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  S21Matrix matrix2{99, 99};
  EXPECT_EQ(matrix2.GetRows(), 99);
  EXPECT_EQ(matrix2.GetCols(), 99);

  S21Matrix check_matrix{99, 99};
  EXPECT_EQ(check_matrix.GetRows(), 99);
  EXPECT_EQ(check_matrix.GetCols(), 99);

  FillMatrix(matrix1, 1.0);
  FillMatrix(matrix2, 0.0);
  FillMatrix(check_matrix, 0.0);

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 2;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 4;
  matrix2(1, 1) = 5;

  check_matrix(0, 0) = 10;
  check_matrix(0, 1) = 13;
  check_matrix(1, 0) = 22;
  check_matrix(1, 1) = 29;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator4) {
  S21Matrix matrix1{4, 3};
  EXPECT_EQ(matrix1.GetRows(), 4);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{3, 3};
  EXPECT_EQ(matrix2.GetRows(), 3);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{4, 3};
  EXPECT_EQ(check_matrix.GetRows(), 4);
  EXPECT_EQ(check_matrix.GetCols(), 3);

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

  check_matrix(0, 0) = 4.0;
  check_matrix(0, 1) = -5.5;
  check_matrix(0, 2) = 13.0;
  check_matrix(1, 0) = -4.0;
  check_matrix(1, 1) = 5.5;
  check_matrix(1, 2) = -13.0;
  check_matrix(2, 0) = 0.0;
  check_matrix(2, 1) = 0.0;
  check_matrix(2, 2) = 0.0;
  check_matrix(3, 0) = 2.0;
  check_matrix(3, 1) = -1.0;
  check_matrix(3, 2) = 6.0;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator5) {
  S21Matrix matrix1{2, 3};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{3, 2};
  EXPECT_EQ(matrix2.GetRows(), 3);
  EXPECT_EQ(matrix2.GetCols(), 2);

  S21Matrix check_matrix{2, 2};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 2);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;
  matrix1(0, 2) = -2.0;
  matrix1(1, 0) = 673.545453;
  matrix1(1, 1) = 14567.588;
  matrix1(1, 2) = 3.0;

  matrix2(0, 0) = 14567.777;
  matrix2(0, 1) = -4542;
  matrix2(1, 0) = 3.0;
  matrix2(1, 1) = 0.0;
  matrix2(2, 0) = 2.0;
  matrix2(2, 1) = -3.0;

  check_matrix(0, 0) = 212203743.411876;
  check_matrix(0, 1) = -66165978.696;
  check_matrix(1, 0) = 9855768.722667981;
  check_matrix(1, 1) = -3059252.447526;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator6) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  S21Matrix matrix2{1, 1};
  EXPECT_EQ(matrix2.GetRows(), 1);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{1, 1};
  EXPECT_EQ(check_matrix.GetRows(), 1);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 1.456;

  matrix2(0, 0) = 12.987;

  check_matrix(0, 0) = 18.909072;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator7) {
  S21Matrix matrix1{2, 3};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 3);

  S21Matrix matrix2{3, 1};
  EXPECT_EQ(matrix2.GetRows(), 3);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{2, 1};
  EXPECT_EQ(check_matrix.GetRows(), 2);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 3;
  matrix1(0, 1) = 4;
  matrix1(0, 2) = 5;
  matrix1(1, 0) = 9;
  matrix1(1, 1) = 8;
  matrix1(1, 2) = 7;

  matrix2(0, 0) = 10;
  matrix2(1, 0) = 20;
  matrix2(2, 0) = 30;

  check_matrix(0, 0) = 260;
  check_matrix(1, 0) = 460;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator8) {
  S21Matrix matrix1{3, 2};
  EXPECT_EQ(matrix1.GetRows(), 3);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 1};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 1);

  S21Matrix check_matrix{3, 1};
  EXPECT_EQ(check_matrix.GetRows(), 3);
  EXPECT_EQ(check_matrix.GetCols(), 1);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;
  matrix1(1, 0) = -2.0;
  matrix1(1, 1) = 673.545453;
  matrix1(2, 0) = 14567.588;
  matrix1(2, 1) = 3.0;

  matrix2(0, 0) = 14567.777;
  matrix2(1, 0) = -4542;

  check_matrix(0, 0) = 232847137.411876;
  check_matrix(1, 0) = -3088379.001526;
  check_matrix(2, 0) = 212203747.411876;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}

TEST(TestMulMatrix, TestMulMatrixOperator9) {
  S21Matrix matrix1{1, 2};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 2);

  S21Matrix matrix2{2, 3};
  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 3);

  S21Matrix check_matrix{1, 3};
  EXPECT_EQ(check_matrix.GetRows(), 1);
  EXPECT_EQ(check_matrix.GetCols(), 3);

  matrix1(0, 0) = 14567.588;
  matrix1(0, 1) = -4542;

  matrix2(0, 0) = 14567.777;
  matrix2(0, 1) = -4542;
  matrix2(0, 2) = -2.0;
  matrix2(1, 0) = 673.545453;
  matrix2(1, 1) = 14567.588;
  matrix2(1, 2) = 3.0;

  check_matrix(0, 0) = 209158129.96435;
  check_matrix(0, 1) = -132331969.392;
  check_matrix(0, 2) = -42761.176;

  S21Matrix matrix1_before = matrix1;
  S21Matrix matrix2_before = matrix2;

  S21Matrix result1 = matrix1 * matrix2;
  S21Matrix result2 = matrix1;
  result2 *= matrix2;

  ASSERT_TRUE(result1 == check_matrix);
  ASSERT_TRUE(result2 == check_matrix);
  ASSERT_TRUE(matrix1_before == matrix1);
  ASSERT_TRUE(matrix2_before == matrix2);
}