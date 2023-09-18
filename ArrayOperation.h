#pragma once
#include <ctime>

//==================PROTOTYPES==================//

inline int* createArr(const int value, const short size = 2);
inline float* createArr(const float value, const short size = 2);

void fillArr(int* arr, short min = 0, short max = 9, const short size = 2);
void fillArr(float* arr, short min = 0, short max = 9, const short size = 2);

void deleteArr(int* arr);
void deleteArr(float* arr);

void sumArr(int* arr, int& sum, const short size = 2);
void sumArr(float* arr, float& sum, const short size = 2);

void substarctArr(int* arr, int& substract, const short size = 2);
void substarctArr(float* arr, float& substract, const short size = 2);

void copyArr(int* arr, float* arrf, const short size = 2);
void copyArr(float* arrf, int* arr, const short size = 2);

//==================FUNCTIONS==================//

inline int* createArr(const int value, const short size) {

	return new int[size];
}
;
inline float* createArr(const float value, const short size) {

	return new float[size];
}
;
void fillArr(int* arr, short min, short max, const short size) {

	srand(time(NULL));
	rand();

	for (int* iter = arr; iter != arr + size; iter++)
		*iter = static_cast<int>(min + rand() % (max - min));
}
;
void fillArr(float* arr, short min, short max, const short size) {

	srand(time(NULL));
	rand();

	for (float* iter = arr; iter != arr + size; iter++)
		*iter = static_cast<float>(min + rand() % (max - min));
}
;
void copyArr(int* arr, float *arrf, const short size) {

	for (float* iter = arrf; iter != arrf + size; iter++)
		*iter = static_cast<float>(*arr++);
}
;
void copyArr(float* arrf, int *arr, const short size) {

	for (int* iter = arr; iter != arr + size; iter++)
		*iter = static_cast<int>(*arrf++);
}
;
void deleteArr(int* arr) {
	delete[] arr;
	arr = nullptr;
}
;
void deleteArr(float* arr) {
	delete[] arr;
	arr = nullptr;
}
;
void sumArr(int* arr, int &sum, const short size) {

	for (int* iter = arr; iter != arr + size; iter++) {
		sum += *iter;
	}
}
;
void sumArr(float* arr, float &sum, const short size) {

	for (float* iter = arr; iter != arr + size; iter++) {
		sum += *iter;
	}
}
;
void substarctArr(int* arr, int &substract, const short size) {

	for (int* iter = arr; iter != arr + size; iter++) {
		if (iter == arr + 0) {
			substract += *iter;
			continue;
		}
		substract -= *iter;
	}
}
;
void substarctArr(float* arr, float &substract, const short size) {

	for (float* iter = arr; iter != arr + size; iter++) {
		if (iter == arr + 0) {
			substract += *iter;
			continue;
		}
		substract -= *iter;
	}
}
;