///
/// Exercice des slides sur les paramètres
///

#pragma once


#include <cstddef>
#include <cstdint>

#include <span>
#include <vector>

using namespace std;


struct MinMax {
	int min;
	int max;
};


void readValues_v1(int values[], int numValues);

int getTotalGrade_v1(const int values[], int numValues);

MinMax findMinMax_v1(const int values[], int numValues);

int getTotalGrade_v2(const vector<int>& values);

vector<int> readValues_v2(int numValues);

MinMax findMinMax_v2(const vector<int>& values);

void readValues_v3(span<int> values);

int getTotalGrade_v3(span<const int> values);

MinMax findMinMax_v3(span<const int> values);

void runCompetitionExample();
