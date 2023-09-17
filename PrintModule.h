#pragma once
#include <iostream>

using std::cout;
using std::cin;

//==================PROTOTYPE==================//

void showArr(int* arr, const short size = 2, const char* delim = " ");
void showArr(float* arr, const short size = 2, const char* delim = " ");

inline void showResult(const int value, const std::string nameFunction);

//==================FUNCTION==================//

void showArr(int* arr, const short size, const char* delim) {
	for (int* iter = arr; iter != arr + size; iter++) {
		cout << * iter << *delim;
	}
	cout << "\n";
}
;
void showArr(float* arr, const short size, const char* delim) {

	for (float* iter = arr; iter != arr + size; iter++) {
		cout << *iter << *delim;
	}
	cout << "\n";
}
;
inline void showResult(const int value, const std::string nameFunction) {
	cout << "\n" << nameFunction << " = " << value << "\n";
}
;