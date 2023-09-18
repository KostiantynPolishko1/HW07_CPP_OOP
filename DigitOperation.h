#pragma once
#include <ctime>

//==================PROTOTYPES==================//

inline int createValue(int value, short min, short max);
inline float createValue(float value, short min, short max);

inline void sumValue(int a, int b, int& sum);
inline void sumValue(float a, float b, float& sum);

inline void substractValue(int a, int b, int &substract);
inline void substractValue(float a, float b, float& substract);

inline float valueIntFloat(int value);
inline int valueIntFloat(float value);

//==================FUNCTIONS==================//

inline int createValue(int value, short min, short max) {
	srand(time(NULL));
	rand();

	return static_cast<int>(min + rand() % (max - min));
}
;
inline float createValue(float value, short min, short max) {
	srand(time(NULL));
	rand();

	return static_cast<float>(min + rand() % (max - min));
}
;
inline void sumValue(int a, int b, int& sum) {
	sum = a + b;
}
;
inline void sumValue(float a, float b, float& sum) {
	sum = a + b;
}
;
inline void substractValue(int a, int b, int& substract) {
	substract =  a - b;
}
;
inline void substractValue(float a, float b, float& substract) {
	substract = a - b;
}
;
inline float valueIntFloat(int value) {
	return static_cast<float>(value);
}
;
inline int valueIntFloat(float value) {
	return static_cast<int>(value);
}
;