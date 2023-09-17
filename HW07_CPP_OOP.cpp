#include "PRINTMODULE.H"
#include "ARRAYOPERATION.H"
#include "DIGITOPERATION.H"

int main(void)
{
    short a = 2;
    short b = 3;
    short size = 5;
    short min = 1, max = 11;

    int* arr = createArr(size);
    if (!arr) {
        throw new std::runtime_error("no RAM memory");
    }

    fillArr(arr, min, max, size);
    showArr(arr, size);

    sumArr(arr, size);
    substarctArr(arr, size);

    deleteArr(arr, size);

    return 0;
}
;