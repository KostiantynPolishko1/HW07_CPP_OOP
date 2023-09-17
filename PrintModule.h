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
inline void showResult(const int value, const std::string nameFunction) {
	cout << "\n" << nameFunction << " = " << value << "\n";
}
;