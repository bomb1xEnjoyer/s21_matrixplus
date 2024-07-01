#include "test.h"

/**************************** EQ_MATRIX TESTS *************************/

TEST(TestEqMatrix, TestEqMatrix0) {
  S21Matrix matrix1{1, 1};
  S21Matrix matrix2{1, 1};

  matrix1(0, 0) = -1;
  matrix2(0, 0) = 2;
  EXPECT_FALSE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix1) {
  S21Matrix matrix1{1, 1};
  S21Matrix matrix2{1, 1};

  matrix1(0, 0) = 1;
  matrix2(0, 0) = -2;
  EXPECT_FALSE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix2) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetCols(), 2);
  EXPECT_EQ(matrix2.GetRows(), 2);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result1);
  EXPECT_TRUE(matrix1 == matrix2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 4;
  matrix2(0, 1) = 3;
  matrix2(1, 0) = 2;
  matrix2(1, 1) = 1;

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_FALSE(result2);
  EXPECT_FALSE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetCols(), 2);
  EXPECT_EQ(matrix2.GetRows(), 2);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result1);
  EXPECT_TRUE(matrix1 == matrix2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix2(0, 0) = 1;
  matrix2(0, 1) = 2;
  matrix2(1, 0) = 3;
  matrix2(1, 1) = 4;

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result2);
  EXPECT_TRUE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix4) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetCols(), 2);
  EXPECT_EQ(matrix2.GetRows(), 2);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result1);
  EXPECT_TRUE(matrix1 == matrix2);

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result2);
  EXPECT_TRUE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix5) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  S21Matrix matrix2{3, 3};
  EXPECT_EQ(matrix2.GetCols(), 3);
  EXPECT_EQ(matrix2.GetRows(), 3);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_FALSE(result1);
  EXPECT_FALSE(matrix1 == matrix2);

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_FALSE(result2);
  EXPECT_FALSE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix6) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  S21Matrix matrix2{2, 2};
  EXPECT_EQ(matrix2.GetCols(), 2);
  EXPECT_EQ(matrix2.GetRows(), 2);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_FALSE(result1);
  EXPECT_FALSE(matrix1 == matrix2);

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_FALSE(result2);
  EXPECT_FALSE(matrix1 == matrix2);
}

TEST(TestEqMatrix, TestEqMatrix7) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  S21Matrix matrix2{1, 1};
  EXPECT_EQ(matrix2.GetCols(), 1);
  EXPECT_EQ(matrix2.GetRows(), 1);

  bool result1 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result1);
  EXPECT_TRUE(matrix1 == matrix2);

  bool result2 = matrix1.EqMatrix(matrix2);
  EXPECT_TRUE(result2);
  EXPECT_TRUE(matrix1 == matrix2);

  matrix1(0, 0) = 2.5000001;
  matrix2(0, 0) = 2.5;

  EXPECT_FALSE(matrix1 == matrix2);
}
