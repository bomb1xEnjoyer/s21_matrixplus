#include "test.h"

/************************** DETERMINANT_MATRIX TESTS *************************/

TEST(TestDeterminant, TestDeterminantException1) {
  S21Matrix test_matrix(2, 3);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.Determinant());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestDeterminant, TestDeterminantException2) {
  S21Matrix test_matrix(3, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.Determinant());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestDeterminant, TestDeterminantException3) {
  S21Matrix test_matrix(55, 2);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.Determinant());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestDeterminant, TestDeterminantException4) {
  S21Matrix test_matrix(3, 55);
  S21Matrix matrix_before = test_matrix;

  EXPECT_ANY_THROW(test_matrix.Determinant());
  EXPECT_TRUE(test_matrix == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  matrix1(0, 0) = 0.0;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero2) {
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

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = -66;
  matrix1(0, 1) = -66;
  matrix1(1, 0) = -66;
  matrix1(1, 1) = -66;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero4) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 0;
  matrix1(0, 1) = 0;
  matrix1(0, 2) = 0;

  matrix1(1, 0) = 0;
  matrix1(1, 1) = 0;
  matrix1(1, 2) = 0;

  matrix1(2, 0) = 0;
  matrix1(2, 1) = 0;
  matrix1(2, 2) = 0;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero5) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 9.89841e+07;
  matrix1(0, 1) = 7.57375e+07;
  matrix1(0, 2) = 7.57375e+07;

  matrix1(1, 0) = 1.90939e+07;
  matrix1(1, 1) = 7.57375e+07;
  matrix1(1, 2) = 7.57375e+07;

  matrix1(2, 0) = -4.32978e+07;
  matrix1(2, 1) = 7.57375e+07;
  matrix1(2, 2) = 7.57375e+07;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero6) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 3;
  matrix1(1, 0) = 2;
  matrix1(1, 1) = 6;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero7) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 6;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminantZero8) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 62003758.14000639319420;
  matrix1(0, 1) = 124007516.28001278638840;
  matrix1(1, 0) = 7533129.83762268722057;
  matrix1(1, 1) = 15066259.67524537444115;

  double result_check = 0.0;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant1) {
  S21Matrix matrix1{1, 1};
  EXPECT_EQ(matrix1.GetCols(), 1);
  EXPECT_EQ(matrix1.GetRows(), 1);

  matrix1(0, 0) = 1.5;

  double result_check = 1.5;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant2) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(1, 0) = 1.3;
  matrix1(1, 1) = 1.4;

  double result_check = -0.02;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant3) {
  S21Matrix matrix1{2, 2};
  EXPECT_EQ(matrix1.GetCols(), 2);
  EXPECT_EQ(matrix1.GetRows(), 2);

  matrix1(0, 0) = 7.72122069261968;
  matrix1(1, 0) = -7.3629210004583;
  matrix1(0, 1) = 8.93235725676641;
  matrix1(1, 1) = 2.69165195827372;

  double result_check = 86.5510796270;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant4) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 1;
  matrix1(0, 1) = 1;
  matrix1(0, 2) = 2;
  matrix1(1, 0) = 3;
  matrix1(1, 1) = 4;
  matrix1(1, 2) = 5;
  matrix1(2, 0) = 6;
  matrix1(2, 1) = 0;
  matrix1(2, 2) = 7;

  double result_check = -11;
  S21Matrix matrix_before = matrix1;
  double result = 0;
  result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant5) {
  S21Matrix matrix1{3, 3};
  EXPECT_EQ(matrix1.GetCols(), 3);
  EXPECT_EQ(matrix1.GetRows(), 3);

  matrix1(0, 0) = 5.34922476788051;
  matrix1(1, 0) = 1.65522041497752;
  matrix1(2, 0) = -8.68382598599419;
  matrix1(0, 1) = -3.25669884728268;
  matrix1(1, 1) = 10.8967615629081;
  matrix1(2, 1) = 4.55130848893896;
  matrix1(0, 2) = -2.14478276530281;
  matrix1(1, 2) = -2.7382052554749;
  matrix1(2, 2) = 5.7808097708039;

  double result_check = 138.2380038449;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant6) {
  S21Matrix matrix1{4, 4};
  EXPECT_EQ(matrix1.GetCols(), 4);
  EXPECT_EQ(matrix1.GetRows(), 4);

  matrix1(0, 0) = 1.1;
  matrix1(0, 1) = 1.2;
  matrix1(0, 2) = 1.3;
  matrix1(0, 3) = 1.4;
  matrix1(1, 0) = 1.5;
  matrix1(1, 1) = 1.6;
  matrix1(1, 2) = 1.7;
  matrix1(1, 3) = 1.8;
  matrix1(2, 0) = 1.9;
  matrix1(2, 1) = 2.0;
  matrix1(2, 2) = 2.1;
  matrix1(2, 3) = 2.2;
  matrix1(3, 0) = 2.3;
  matrix1(3, 1) = 2.4;
  matrix1(3, 2) = 2.5;
  matrix1(3, 3) = 2.6;

  double result_check = -5.1347814888913e-17;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant7) {
  S21Matrix matrix1{4, 4};
  EXPECT_EQ(matrix1.GetCols(), 4);
  EXPECT_EQ(matrix1.GetRows(), 4);

  matrix1(0, 0) = -7.00037610391155;
  matrix1(1, 0) = -6.32839397341013;
  matrix1(2, 0) = 10.222164043691;
  matrix1(3, 0) = 7.95983747509308;
  matrix1(0, 1) = -9.82599597726949;
  matrix1(1, 1) = 3.03237457247451;
  matrix1(2, 1) = 0.587724786484614;
  matrix1(3, 1) = -3.41600720770657;
  matrix1(0, 2) = 8.27683520526625;
  matrix1(1, 2) = -4.28063526446931;
  matrix1(2, 2) = -6.93227237439714;
  matrix1(3, 2) = -10.6065054496285;
  matrix1(0, 3) = 0.586602877592668;
  matrix1(1, 3) = 10.6546861075331;
  matrix1(2, 3) = 4.33103069034405;
  matrix1(3, 3) = 8.75408579711802;

  double result_check = -6618.5495718153;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant8) {
  S21Matrix matrix1{5, 5};
  EXPECT_EQ(matrix1.GetCols(), 5);
  EXPECT_EQ(matrix1.GetRows(), 5);

  matrix1(0, 0) = 5.543;
  matrix1(0, 1) = 25.425;
  matrix1(0, 2) = 24.4325;
  matrix1(0, 3) = 23.52;
  matrix1(0, 4) = 0.0;
  matrix1(1, 0) = 52.3;
  matrix1(1, 1) = 53.2;
  matrix1(1, 2) = 34.434;
  matrix1(1, 3) = 0.0;
  matrix1(1, 4) = 53.352;
  matrix1(2, 0) = 54.23512;
  matrix1(2, 1) = 34.325;
  matrix1(2, 2) = 0.0;
  matrix1(2, 3) = 24.343;
  matrix1(2, 4) = 34.422;
  matrix1(3, 0) = 36.22;
  matrix1(3, 1) = 0.0;
  matrix1(3, 2) = 32.0;
  matrix1(3, 3) = 24.432;
  matrix1(3, 4) = 43.21;
  matrix1(4, 0) = 0.0;
  matrix1(4, 1) = 23.21;
  matrix1(4, 2) = 23.234;
  matrix1(4, 3) = 12.1231;
  matrix1(4, 4) = 21.2232;

  double result_check = 74346939.8940858;

  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant9) {
  S21Matrix matrix1{6, 6};
  EXPECT_EQ(matrix1.GetCols(), 6);
  EXPECT_EQ(matrix1.GetRows(), 6);

  matrix1(0, 0) = -8.25324401422404;
  matrix1(1, 0) = 7.73323425720446;
  matrix1(2, 0) = 1.84863350028172;
  matrix1(3, 0) = -10.0115760930348;
  matrix1(4, 0) = -5.15668712323532;
  matrix1(5, 0) = 0.833224474685267;
  matrix1(0, 1) = 6.72777522937395;
  matrix1(1, 1) = -5.02706401585601;
  matrix1(2, 1) = -0.966418515890837;
  matrix1(3, 1) = 7.74789611180313;
  matrix1(4, 1) = 0.869955397676677;
  matrix1(5, 1) = -2.01394975557923;
  matrix1(0, 2) = -4.55829650838859;
  matrix1(1, 2) = 3.51532235136256;
  matrix1(2, 2) = -7.3990064188838;
  matrix1(3, 2) = 0.485122002195567;
  matrix1(4, 2) = 9.88733662408777;
  matrix1(5, 2) = -3.07178143155761;
  matrix1(0, 3) = -6.01939426595345;
  matrix1(1, 3) = -7.33630517800339;
  matrix1(2, 3) = -3.09628330147825;
  matrix1(3, 3) = 8.41876223543659;
  matrix1(4, 3) = -3.80699184164405;
  matrix1(5, 3) = 1.82289709686302;
  matrix1(0, 4) = 9.28037635562941;
  matrix1(1, 4) = 8.25562612293288;
  matrix1(2, 4) = 3.07955321925692;
  matrix1(3, 4) = 1.94713557977229;
  matrix1(4, 4) = 7.41955809853971;
  matrix1(5, 4) = -9.39580690651201;
  matrix1(0, 5) = 2.73021495575085;
  matrix1(1, 5) = -5.90446221316233;
  matrix1(2, 5) = 5.84046185878105;
  matrix1(3, 5) = -2.47668161639012;
  matrix1(4, 5) = 1.28693996206857;
  matrix1(5, 5) = 4.85558348917402;

  double result_check = -109019.85742181906954580110;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}

TEST(TestDeterminant, TestDeterminant10) {
  S21Matrix matrix1{9, 9};
  EXPECT_EQ(matrix1.GetCols(), 9);
  EXPECT_EQ(matrix1.GetRows(), 9);

  matrix1(0, 0) = -0.93;
  matrix1(0, 1) = 0.96;
  matrix1(0, 2) = 0.56;
  matrix1(0, 3) = 0.05;
  matrix1(0, 4) = -0.94;
  matrix1(0, 5) = 0.01;
  matrix1(0, 6) = 0.69;
  matrix1(0, 7) = -1.70;
  matrix1(0, 8) = 0.21;
  matrix1(1, 0) = -1.68;
  matrix1(1, 1) = 0.11;
  matrix1(1, 2) = -0.34;
  matrix1(1, 3) = -1.74;
  matrix1(1, 4) = -0.13;
  matrix1(1, 5) = -0.79;
  matrix1(1, 6) = -0.56;
  matrix1(1, 7) = -1.84;
  matrix1(1, 8) = 1.86;
  matrix1(2, 0) = -1.37;
  matrix1(2, 1) = 0.23;
  matrix1(2, 2) = -0.60;
  matrix1(2, 3) = -1.65;
  matrix1(2, 4) = -1.91;
  matrix1(2, 5) = -0.90;
  matrix1(2, 6) = -0.38;
  matrix1(2, 7) = 0.82;
  matrix1(2, 8) = 1.05;
  matrix1(3, 0) = -1.77;
  matrix1(3, 1) = 1.66;
  matrix1(3, 2) = 0.17;
  matrix1(3, 3) = 0.55;
  matrix1(3, 4) = 1.93;
  matrix1(3, 5) = -0.89;
  matrix1(3, 6) = -0.08;
  matrix1(3, 7) = 1.34;
  matrix1(3, 8) = 1.74;
  matrix1(4, 0) = 0.23;
  matrix1(4, 1) = 1.96;
  matrix1(4, 2) = -0.33;
  matrix1(4, 3) = -1.73;
  matrix1(4, 4) = 0.25;
  matrix1(4, 5) = 1.22;
  matrix1(4, 6) = -0.36;
  matrix1(4, 7) = 1.16;
  matrix1(4, 8) = 1.07;
  matrix1(5, 0) = 0.25;
  matrix1(5, 1) = -0.83;
  matrix1(5, 2) = -1.90;
  matrix1(5, 3) = 0.10;
  matrix1(5, 4) = 0.26;
  matrix1(5, 5) = -1.38;
  matrix1(5, 6) = -0.52;
  matrix1(5, 7) = -0.97;
  matrix1(5, 8) = -0.01;
  matrix1(6, 0) = 1.28;
  matrix1(6, 1) = -1.70;
  matrix1(6, 2) = 1.32;
  matrix1(6, 3) = -1.35;
  matrix1(6, 4) = 0.18;
  matrix1(6, 5) = -0.66;
  matrix1(6, 6) = 1.16;
  matrix1(6, 7) = -0.81;
  matrix1(6, 8) = -1.06;
  matrix1(7, 0) = 0.87;
  matrix1(7, 1) = 1.66;
  matrix1(7, 2) = 0.12;
  matrix1(7, 3) = -1.83;
  matrix1(7, 4) = -1.25;
  matrix1(7, 5) = 0.41;
  matrix1(7, 6) = 1.21;
  matrix1(7, 7) = -1.95;
  matrix1(7, 8) = 0.08;
  matrix1(8, 0) = 1.92;
  matrix1(8, 1) = 1.96;
  matrix1(8, 2) = -1.64;
  matrix1(8, 3) = -0.44;
  matrix1(8, 4) = 1.36;
  matrix1(8, 5) = 0.74;
  matrix1(8, 6) = -0.67;
  matrix1(8, 7) = -1.03;
  matrix1(8, 8) = 1.60;

  double result_check = -63.322314761722227635;
  S21Matrix matrix_before = matrix1;
  double result = matrix1.Determinant();

  EXPECT_NEAR(result_check, result, EPS_TEST);
  EXPECT_TRUE(matrix1 == matrix_before);
}