#pragma once
#include <ctime>

//==================PROTOTYPES==================//

inline int createValue(int value, short min, short max);
inline float createValue(float value, short min, short max);

inline void sumValue(int a, int b, int& sum);
inline void sumValue(float a, float b, float& sum);

inline void substractValue(int a, int b, int &substract);
inline void substractValue(float a, float b, float& substract);

//==================FUNCTIONS==================//

inline int createValue(int value, short min, short max) {
	srand(time(NULL));
	rand();

	return min + rand() % (max - min);
}
;
inline float createValue(float value, short min, short max) {
	srand(time(NULL));
	rand();

	return (float)(min + rand() % (max - min));
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