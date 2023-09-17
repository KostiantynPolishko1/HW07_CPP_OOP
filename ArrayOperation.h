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

int sumArr(int* arr, const short size = 2) {

	int sum = 0;

	for (int* iter = arr; iter != arr + size; iter++) {
		sum += *iter;
	}
	return sum ;
}
;
int substarctArr(int* arr, const short size = 2) {

	int substract = 0;

	for (int* iter = arr; iter != arr + size; iter++) {
		substract += *iter;
	}
	return substract;
}
;