///
/// Traite les arguments de ligne de commande à l'aide de TCLAP.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <vector>
#include <span>

#include <cppitertools/range.hpp>

#include "competition.hpp"

using namespace std;
using namespace std::literals;


void readValues_v1(int values[], int numValues) {
	cout << "Enter grades: ";
	for (int i : iter::range(numValues))
		cin >> values[i];
}

int getTotalGrade_v1(const int values[], int numValues) {
	int minVal = values[0];
	int maxVal = values[0];
	int total = 0;
	for (int i : iter::range(numValues)) {
		if (values[i] < minVal)
			minVal = values[i];
		else if (values[i] > maxVal)
			maxVal = values[i];
		total += values[i];
	}
	return total - minVal - maxVal;
}

MinMax findMinMax_v1(const int values[], int numValues) {
	MinMax result = {values[0], values[0]};
	for (int i : iter::range(numValues)) {
		if (values[i] < result.min)
			result.min = values[i];
		else if (values[i] > result.max)
			result.max = values[i];
	}
	return result;
}

vector<int> readValues_v2(int numValues) {
	cout << "Enter grades: ";
	 vector<int> values;
	// ou
	//vector<int> values(numValues);
	for (int i : iter::range(numValues)) {
		int value;
		cin >> value;
		values.push_back(value);
		// ou
		//cin >> values[i];
	}
	return values;
}

int getTotalGrade_v2(const vector<int>& values) {
	int minVal = values[0];
	int maxVal = values[0];
	int total = 0;
	for (int v : values) {
		if (v < minVal)
			minVal = v;
		else if (v > maxVal)
			maxVal = v;
		total += v;
	}
	return total - minVal - maxVal;
}

MinMax findMinMax_v2(const vector<int>& values) {
	MinMax result = {values[0], values[0]};
	for (int v : values) {
		if (v < result.min)
			result.min = v;
		else if (v > result.max)
			result.max = v;
	}
	return result;
}

void readValues_v3(span<int> values) {
	cout << "Enter grades: ";
	for (int& v : values)
		cin >> v;
}

int getTotalGrade_v3(span<const int> values) {
	int minVal = values[0];
	int maxVal = values[0];
	int total = 0;
	for (int v : values) {
		if (v < minVal)
			minVal = v;
		else if (v > maxVal)
			maxVal = v;
		total += v;
	}
	return total - minVal - maxVal;
}

MinMax findMinMax_v3(span<const int> values) {
	MinMax result = {values[0], values[0]};
	for (int v : values) {
		if (v < result.min)
			result.min = v;
		else if (v > result.max)
			result.max = v;
	}
	return result;
}

void runCompetitionExample() {
	const int arraySize = 8;
	// Utilisation des *_v1
	{
		int values[arraySize];
		readValues_v1(values, arraySize);
		for (int v : values)
			cout << v << " ";
		cout << "\n";
		MinMax minmaxValues = findMinMax_v1(values, arraySize);
		int totalGrade = getTotalGrade_v1(values, arraySize);
		cout << "Total: " << totalGrade << "\n"
		     << "Min: " << minmaxValues.min << "\n"
		     << "Max: " << minmaxValues.max << "\n";
	}
	// Utilisation des *_v2
	{
		vector<int> values = readValues_v2(arraySize);
		for (int v : values)
			cout << v << " ";
		cout << "\n";
		MinMax minmaxValues = findMinMax_v2(values);
		int totalGrade = getTotalGrade_v2(values);
		cout << "Total: " << totalGrade << "\n"
		     << "Min: " << minmaxValues.min << "\n"
		     << "Max: " << minmaxValues.max << "\n";
	}
	// Utilisation des *_v3
	{
		vector<int> values(arraySize);
		readValues_v3(values);
		for (int v : values)
			cout << v << " ";
		cout << "\n";
		MinMax minmaxValues = findMinMax_v3(values);
		int totalGrade = getTotalGrade_v3(values);
		cout << "Total: " << totalGrade << "\n"
		     << "Min: " << minmaxValues.min << "\n"
		     << "Max: " << minmaxValues.max << "\n";
	}
}

