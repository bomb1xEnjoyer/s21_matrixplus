#include "test.h"

/**************************** CONSTRUCTORS EXCEPTIONS *************************/

TEST(TestConstructors, TestConstructorsException1) {
  EXPECT_ANY_THROW(S21Matrix(-1, 10));
}

TEST(TestConstructors, TestConstructorsException2) {
  EXPECT_ANY_THROW(S21Matrix(10, -1));
}

TEST(TestConstructors, TestConstructorException3) {
  EXPECT_ANY_THROW(S21Matrix(-1, 0));
}

TEST(TestConstructors, TestConstructorException4) {
  EXPECT_ANY_THROW(S21Matrix(0, -1));
}

TEST(TestConstructors, TestConstructorException5) {
  EXPECT_ANY_THROW(S21Matrix(-1, -1));
}

TEST(TestConstructors, TestConstructorsException5) {
  EXPECT_ANY_THROW(S21Matrix(-199, -199));
}

/**************************** CONSTRUCTORS TESTS *************************/

TEST(TestConstructors, TestDefaultConstructor) {
  S21Matrix matrix_check;
  EXPECT_EQ(matrix_check.GetRows(), 3);
  EXPECT_EQ(matrix_check.GetCols(), 3);
}

TEST(TestConstructors, TestDefaultConstructor01) {
  EXPECT_ANY_THROW(S21Matrix matrix_check(0, 0));
}

TEST(TestConstructors, ParameterizedConstructor1) {
  S21Matrix matrix_check(5, 4);
  EXPECT_EQ(matrix_check.GetRows(), 5);
  EXPECT_EQ(matrix_check.GetCols(), 4);
}

TEST(TestConstructors, ParameterizedConstructor2) {
  S21Matrix matrix_check(1000, 999);
  EXPECT_EQ(matrix_check.GetRows(), 1000);
  EXPECT_EQ(matrix_check.GetCols(), 999);
}

TEST(TestConstructors, CopyConstructor1) {
  S21Matrix matrix_check = S21Matrix(2, 2);

  S21Matrix copy = matrix_check;

  EXPECT_EQ(matrix_check.GetRows(), 2);
  EXPECT_EQ(matrix_check.GetCols(), 2);
  EXPECT_EQ(copy.GetRows(), 2);
  EXPECT_EQ(copy.GetCols(), 2);
}

TEST(TestConstructors, CopyConstructor2) {
  S21Matrix matrix_check = S21Matrix(2, 2);

  S21Matrix copy(matrix_check);

  EXPECT_EQ(matrix_check.GetRows(), 2);
  EXPECT_EQ(matrix_check.GetCols(), 2);
  EXPECT_EQ(copy.GetRows(), 2);
  EXPECT_EQ(copy.GetCols(), 2);
}

TEST(TestConstructors, CopyConstructor3) {
  S21Matrix matrix_check = S21Matrix(2, 2);

  S21Matrix copy{matrix_check};

  EXPECT_EQ(matrix_check.GetRows(), 2);
  EXPECT_EQ(matrix_check.GetCols(), 2);
  EXPECT_EQ(copy.GetRows(), 2);
  EXPECT_EQ(copy.GetCols(), 2);
}

TEST(TestConstructors, MoveConstructor1) {
  S21Matrix matrix_test{14, 14};

  S21Matrix matrix_check = std::move(matrix_test);

  EXPECT_EQ(matrix_check.GetRows(), 14);
  EXPECT_EQ(matrix_check.GetCols(), 14);
  EXPECT_EQ(matrix_test.GetRows(), 0);
  EXPECT_EQ(matrix_test.GetCols(), 0);
}

/**************************** CONSTRUCTORS TESTS *************************/

TEST(TestOperatorBrackets, OperatorBracketsException1) {
  S21Matrix matrix_check{99, 99};
  EXPECT_ANY_THROW(matrix_check(100, 99));
}

TEST(TestOperatorBrackets, OperatorBracketsException2) {
  S21Matrix matrix_check{99, 99};
  EXPECT_ANY_THROW(matrix_check(99, 100));
}

TEST(TestOperatorBrackets, OperatorBracketsException3) {
  S21Matrix matrix_check{99, 99};
  EXPECT_ANY_THROW(matrix_check(100, 100));
}

TEST(TestOperatorBrackets, OperatorBracketsException4) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(6, 5));
}

TEST(TestOperatorBrackets, OperatorBracketsException5) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(5, 6));
}

TEST(TestOperatorBrackets, OperatorBracketsException6) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(999, 999));
}

TEST(TestOperatorBrackets, OperatorBracketsException7) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(-1, 0));
}

TEST(TestOperatorBrackets, OperatorBracketsException8) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(0, -1));
}

TEST(TestOperatorBrackets, OperatorBracketsException9) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(-1, -1));
}

TEST(TestOperatorBrackets, OperatorBracketsException10) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(-99, -99));
}

TEST(TestOperatorBrackets, OperatorBracketsException11) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(5, 4));
}

TEST(TestOperatorBrackets, OperatorBracketsException12) {
  S21Matrix matrix_check{5, 5};
  EXPECT_ANY_THROW(matrix_check(4, 5));
}

TEST(TestOperatorBrackets, OperatorBracketsException13) {
  S21Matrix matrix_check{5, 5};
  EXPECT_NO_THROW(matrix_check(4, 4));
}

TEST(TestOperatorBrackets, OperatorBracketsException14) {
  S21Matrix matrix_check{2, 3};
  EXPECT_NO_THROW(matrix_check(1, 2));
  EXPECT_ANY_THROW(matrix_check(2, 2));
  EXPECT_ANY_THROW(matrix_check(1, 3));
}

TEST(TestOperatorBrackets, OperatorBracketsException15) {
  S21Matrix matrix_check{3, 2};
  EXPECT_NO_THROW(matrix_check(2, 1));
  EXPECT_ANY_THROW(matrix_check(3, 1));
  EXPECT_ANY_THROW(matrix_check(2, 2));
}

TEST(TestOperatorBrackets, OperatorBracketsException16) {
  S21Matrix matrix_check{3, 2};
  EXPECT_NO_THROW(matrix_check(2, 1));
  EXPECT_ANY_THROW(matrix_check(3, 1));
  EXPECT_ANY_THROW(matrix_check(2, 2));
}

TEST(TestOperatorBrackets, OperatorBrackets1) {
  S21Matrix matrix_check{3, 3};
  EXPECT_EQ(matrix_check.GetRows(), 3);
  EXPECT_EQ(matrix_check.GetCols(), 3);

  matrix_check(0, 0) = 1.0;
  matrix_check(0, 1) = 2.0;
  matrix_check(1, 0) = 3.0;
  matrix_check(1, 1) = 4.0;

  ASSERT_NEAR(matrix_check(0, 0), 1.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(0, 1), 2.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(0, 2), 0.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(1, 0), 3.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(1, 1), 4.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(1, 2), 0.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(2, 0), 0.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(2, 1), 0.0, EPS_TEST);
  ASSERT_NEAR(matrix_check(2, 2), 0.0, EPS_TEST);
}