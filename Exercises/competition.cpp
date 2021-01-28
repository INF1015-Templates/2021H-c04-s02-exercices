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
using iter::range;


void readValues_v1(...) {
	
}

int getTotalGrade_v1(...) {
	return {};
}

MinMax findMinMax_v1(...) {
	return {};
}

/*TODO*/void readValues_v2(...) {
	
}

int getTotalGrade_v2(...) {
	return {};
}

MinMax findMinMax_v2(...) {
	return {};
}

void readValues_v3(...) {
	
}

int getTotalGrade_v3(...) {
	return {};
}

MinMax findMinMax_v3(...) {
	return {};
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
		vector<int> values = {}; // TODO
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

