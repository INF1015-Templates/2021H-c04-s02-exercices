///
/// Exemples des slides sur les paramètres.
///

#pragma once


#include <cstddef>
#include <cstdint>

using namespace std;


void swap_v1(int a, int b);

void swap_v2(int& a, int& b);

void modify1D(double values[], int numValues);

void modify2D(double values[][10], int numValues);

void runParamsExample();

