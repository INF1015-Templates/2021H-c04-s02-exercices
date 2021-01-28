///
/// Exemples des slides sur les paramètres.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <cstdio>

#include <cppitertools/range.hpp>

#include "params.hpp"

using namespace std;
using namespace std::literals;


void swap_v1(int a, int b) {
	int buffer = a;
	a = b;
	b = buffer;
}

void swap_v2(int& a, int& b) {
	int buffer = a;
	a = b;
	b = buffer;
}

void modify1D(double values[], int numValues) {
	for (int i : iter::range(numValues))
		values[i] *= 10;
}

void modify2D(double values[][10], int numValues) {
	for (int i : iter::range(numValues))
		for (int j : iter::range(10))
			values[i][j] *= 10;
}

void runParamsExample() {
	{
		int foo = 42;
		int bar = 69;
		printf("foo=%i, bar=%i" "\n", foo, bar);
		swap_v1(foo, bar);
		printf("foo=%i, bar=%i" "\n", foo, bar);
		swap_v2(foo, bar);
		printf("foo=%i, bar=%i" "\n", foo, bar);
	}
	{

	}
}
