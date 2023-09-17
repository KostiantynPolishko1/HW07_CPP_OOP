#pragma once
#include <ctime>

inline int* createArr(const short size = 2) {

	return new int[size];
}
;
void fillArr(int* arr, short min = 0, short max = 9, const short size = 2) {

	srand(time(NULL));
	rand();

	for (int* iter = arr; iter != arr + size; iter++)
		*iter = min + rand() % (max - min);
}
;
void deleteArr(int* arr, const short size = 2) {
	delete[] arr;
	arr = nullptr;
}
;

void sumArr(int* arr, int &sum, const short size = 2) {

	for (int* iter = arr; iter != arr + size; iter++) {
		sum += *iter;
	}
}
;
void substarctArr(int* arr, int &substract, const short size = 2) {

	for (int* iter = arr; iter != arr + size; iter++) {
		if (iter == arr + 0) {
			substract += *iter;
			continue;
		}
		substract -= *iter;
	}
}
;