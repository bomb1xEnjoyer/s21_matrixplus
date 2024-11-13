#pragma once

#include <gtest/gtest.h>

#include "../s21_matrix_oop.h"

#define EPS_TEST 1e-7

void CheckMatrix(const S21Matrix matrix, double value);
void FillMatrix(S21Matrix &matrix, double value);