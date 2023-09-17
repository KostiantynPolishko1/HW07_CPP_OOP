#pragma once
#include <iostream>

using std::cout;
using std::cin;

void showArr(int* arr, const short size = 2, const char* delim = " ") {
	for (int* iter = arr; iter != arr + size; iter++) {
		cout << *iter << *delim;
	}
	cout << "\n";
}
;