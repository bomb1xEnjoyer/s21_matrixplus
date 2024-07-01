#include "test.h"

/***************************** MUTATORS TESTS ******************************/

TEST(TestMutators, TestMutatorsException1) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetRows(-1));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutatorsException2) {
  S21Matrix test_matrix(3, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetRows(-1));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutatorsException3) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetCols(-1));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutatorsException4) {
  S21Matrix test_matrix(3, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetCols(-1));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutatorsException5) {
  S21Matrix test_matrix(2, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetCols(-9999));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutatorsException6) {
  S21Matrix test_matrix(3, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.SetCols(-9999));
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestMutators, TestMutators1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  FillMatrix(matrix1, 5.5);
  matrix1.SetRows(2);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 0.0, EPS_TEST);
}

TEST(TestMutators, TestMutators2) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  FillMatrix(matrix1, 5.5);
  matrix1.SetCols(2);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 0.0, EPS_TEST);
}

TEST(TestMutators, TestMutators3) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  FillMatrix(matrix1, 5.5);
  matrix1.SetRows(1);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
}

TEST(TestMutators, TestMutators4) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  FillMatrix(matrix1, 5.5);
  matrix1.SetCols(1);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
}

TEST(TestMutators, TestMutators5) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  FillMatrix(matrix1, 5.5);
  matrix1.SetRows(1);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 5.5, EPS_TEST);
}

TEST(TestMutators, TestMutators6) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  FillMatrix(matrix1, 5.5);
  matrix1.SetCols(1);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 5.5, EPS_TEST);
}

TEST(TestMutators, TestMutators7) {
  S21Matrix matrix1{99, 99};
  EXPECT_EQ(matrix1.GetRows(), 99);
  EXPECT_EQ(matrix1.GetCols(), 99);

  FillMatrix(matrix1, 5.5);
  matrix1.SetRows(2);
  matrix1.SetCols(2);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 5.5, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 1), 5.5, EPS_TEST);
}

TEST(TestMutators, TestMutators8) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix1.SetRows(1);

  EXPECT_EQ(matrix1.GetRows(), 1);
  EXPECT_EQ(matrix1.GetCols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 1, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 2, EPS_TEST);
}

TEST(TestMutators, TestMutators9) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix1.SetCols(1);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 1);

  EXPECT_NEAR(matrix1(0, 0), 1, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 3, EPS_TEST);
}

TEST(TestMutators, TestMutators10) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix1.SetRows(3);

  EXPECT_EQ(matrix1.GetRows(), 3);
  EXPECT_EQ(matrix1.GetCols(), 2);

  EXPECT_NEAR(matrix1(0, 0), 1, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 2, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 3, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 1), 4, EPS_TEST);
  EXPECT_NEAR(matrix1(2, 0), 0, EPS_TEST);
  EXPECT_NEAR(matrix1(2, 1), 0, EPS_TEST);
}

TEST(TestMutators, TestMutators11) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;

  matrix1.SetCols(3);

  EXPECT_EQ(matrix1.GetRows(), 2);
  EXPECT_EQ(matrix1.GetCols(), 3);

  EXPECT_NEAR(matrix1(0, 0), 1, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 1), 2, EPS_TEST);
  EXPECT_NEAR(matrix1(0, 2), 0, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 0), 3, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 1), 4, EPS_TEST);
  EXPECT_NEAR(matrix1(1, 2), 0, EPS_TEST);
}