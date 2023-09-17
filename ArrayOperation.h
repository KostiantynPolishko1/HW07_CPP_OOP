#pragma once
#include <ctime>

//==================PROTOTYPE==================//

inline int* createArr(const int value, const short size = 2);
inline float* createArr(const float value, const short size = 2);
void fillArr(int* arr, short min = 0, short max = 9, const short size = 2);
void deleteArr(int* arr);
void deleteArr(float* arr);

void sumArr(int* arr, int& sum, const short size = 2);
void substarctArr(int* arr, int& substract, const short size = 2);

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
		*iter = min + rand() % (max - min);
}
;
void copyArr(int* arr, float *arrf, const short size = 2) {

	for (float* iter = arrf; iter != arrf + size; iter++)
		*iter = static_cast<float>(*arr++);
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
float* convertNaturalRealNumber(int *arr, const short size = 2) {
	
	float *arrf = createArr(0.0f, size);
	copyArr(arr, arrf, size);
	deleteArr(arr);
	
	return arrf;
}
;