#pragma once
#include <iostream>

using std::cout;
using std::cin;

//==================PROTOTYPE==================//

void showArr(int* arr, const short size = 2, const char* delim = " ");
void showArr(float* arr, const short size = 2, const char* delim = " ");

inline void showResult(const int value);

short indexMenu(short& indMenu, const short size);
void printMenu(std::string* const arr, const short size, const short& indMenu);
void selectMenu(std::string* const arr, const short size, const short& indMenu = 0);

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
inline void showResult(const int value) {
	cout << "\nresult = " << value << "\n";
}
;
short indexMenu(short& indMenu, const short size) {

    short indMin = 0;
    char direct = ' ';

    cout << " w|s ";
    direct = cin.get();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    system("CLS");

    while (true) {

        if (direct == '\n')
            return static_cast<int>(direct);
        else if (direct == 'w' || direct == 'W')
            indMenu++;
        else if (direct == 's' || direct == 'S')
            indMenu--;
        else
        {
            cout << "\n\tERROR!";
            cout << "\n\t\"w\" - Down, \"s\" - Up: -> ";
        }

        //reload index menu
        if (indMenu < indMin)
            indMenu = size;
        else if (indMenu > size)
            indMenu = indMin;

        return indMenu;
    }
}
;
void printMenu(std::string* const arr, const short size, const short& indMenu) {
	
	cout << "\n MENU:\n";
	for (short i = 0; i <= size; i++) {
		if (indMenu == i) {
			cout << " -> " << *(arr + i) << "\n";
			continue;
		}
		cout << "    " << *(arr + i) << "\n";
	}
}
;
void selectMenu(std::string* const arr, const short size, short& indMenu) {
    do {
        printMenu(arr, size, indMenu);

    } while (static_cast<char>(indexMenu(indMenu, size)) != '\n');
};
