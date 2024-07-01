#include "test.h"

/************************** INVERSE_MATRIX TESTS *************************/

TEST(TestInverse, TestInverseException1) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.InverseMatrix());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestInverse, TestInverseException2) {
  S21Matrix test_matrix(3, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.InverseMatrix());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestInverse, TestInverseException3) {
  S21Matrix test_matrix(1, 5);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.InverseMatrix());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestInverse, TestInverseException4) {
  S21Matrix test_matrix(5, 1);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.InverseMatrix());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestInverse, TestInverseException5) {
  S21Matrix test_matrix(5, 4);
  FillMatrix(test_matrix, 5.5);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.InverseMatrix());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestInverse, TestInverseZero1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  matrix1(0, 0) = 0.0;

  S21Matrix matrix_before = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestInverse, TestInverseZero2) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 12;
  matrix1(0, 2) = 0.0;
  matrix1(1, 0) = 14;
  matrix1(1, 1) = 1.5;
  matrix1(1, 2) = 0.0;
  matrix1(2, 0) = 1.7;
  matrix1(2, 1) = 18;
  matrix1(2, 2) = 0.0;

  S21Matrix matrix_before = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestInverse, TestInverseZero3) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(0, 2) = 1.3;
  matrix1(1, 0) = 1.4;
  matrix1(1, 1) = 1.5;
  matrix1(1, 2) = 1.6;
  matrix1(2, 0) = 1.7;
  matrix1(2, 1) = 1.8;
  matrix1(2, 2) = 1.9;

  S21Matrix matrix_before = matrix1;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestInverse, TestInverse0) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  matrix1(0, 0) = 0;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1(0, 0) == 0);
}

TEST(TestInverse, TestInverse1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  matrix1(0, 0) = 1.5;

  EXPECT_ANY_THROW(matrix1.InverseMatrix());
  EXPECT_TRUE(matrix1(0, 0) == 1.5);
}

TEST(TestInverse, TestInverse2) {
  S21Matrix matrix1{2, 2}, inversed{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  inversed = matrix1.InverseMatrix();

  EXPECT_NEAR(inversed(0, 0), -2, EPS_TEST);
  EXPECT_NEAR(inversed(0, 1), 1, EPS_TEST);
  EXPECT_NEAR(inversed(1, 0), 1.5, EPS_TEST);
  EXPECT_NEAR(inversed(1, 1), -0.5, EPS_TEST);
}

TEST(TestInverse, TestInverse3) {
  S21Matrix matrix1{3, 3}, inversed{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = -7;
  matrix1(1, 0) = -6;
  matrix1(2, 0) = 10;
  matrix1(0, 1) = -9;
  matrix1(1, 1) = 3;
  matrix1(2, 1) = 0;
  matrix1(0, 2) = 8;
  matrix1(1, 2) = -4;
  matrix1(2, 2) = -6;

  inversed = matrix1.InverseMatrix();

  EXPECT_NEAR(inversed(0, 0), -18.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(0, 1), -54.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(0, 2), 12.0 / 570, EPS_TEST);
  
  EXPECT_NEAR(inversed(1, 0), -76.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(1, 1), -38.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(1, 2), -76.0 / 570, EPS_TEST);
  
  EXPECT_NEAR(inversed(2, 0), -30.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(2, 1), -90.0 / 570, EPS_TEST);
  EXPECT_NEAR(inversed(2, 2), -75.0 / 570, EPS_TEST);
}

TEST(TestInverse, TestInverse4) {
  S21Matrix matrix1{4, 4}, inversed{4, 4};
  EXPECT_EQ(matrix1.GetCols(), 4);
  EXPECT_EQ(matrix1.GetRows(), 4);

  matrix1(0, 0) = -7;
  matrix1(1, 0) = -6;
  matrix1(2, 0) = 10;
  matrix1(3, 0) = 7;
  matrix1(0, 1) = -9;
  matrix1(1, 1) = 3;
  matrix1(2, 1) = 0;
  matrix1(3, 1) = -3;
  matrix1(0, 2) = 8;
  matrix1(1, 2) = -4;
  matrix1(2, 2) = -6;
  matrix1(3, 2) = -10;
  matrix1(0, 3) = 0;
  matrix1(1, 3) = 10;
  matrix1(2, 3) = 4;
  matrix1(3, 3) = 8;

  inversed = matrix1.InverseMatrix();

  EXPECT_NEAR(inversed(0, 0), 13.0 / 504, EPS_TEST);
  EXPECT_NEAR(inversed(0, 1), -3.0 / 56, EPS_TEST);
  EXPECT_NEAR(inversed(0, 2), 11.0 / 126, EPS_TEST);
  EXPECT_NEAR(inversed(0, 3), 67.0 / 1008, EPS_TEST);
  
  EXPECT_NEAR(inversed(1, 0), -1.0 / 252, EPS_TEST);
  EXPECT_NEAR(inversed(1, 1), 5.0 / 84, EPS_TEST);
  EXPECT_NEAR(inversed(1, 2), 4.0 / 63, EPS_TEST);
  EXPECT_NEAR(inversed(1, 3), 53.0 / 504, EPS_TEST);

  EXPECT_NEAR(inversed(2, 0), 29.0 / 168, EPS_TEST);
  EXPECT_NEAR(inversed(2, 1), 13.0 / 168, EPS_TEST);
  EXPECT_NEAR(inversed(2, 2), 5.0 / 21, EPS_TEST);
  EXPECT_NEAR(inversed(2, 3), 59.0 / 336, EPS_TEST);

  EXPECT_NEAR(inversed(3, 0), -41.0 / 504, EPS_TEST);
  EXPECT_NEAR(inversed(3, 1), -19.0 / 168, EPS_TEST);
  EXPECT_NEAR(inversed(3, 2), -25.0 / 126, EPS_TEST);
  EXPECT_NEAR(inversed(3, 3), -95.0 / 1008, EPS_TEST);
}