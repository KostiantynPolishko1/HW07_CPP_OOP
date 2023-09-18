#pragma once
#include <ctime>

inline int createValue(int value, short min, short max);
inline float createValue(float value, short min, short max);

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

