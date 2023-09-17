#include "PRINTMODULE.H"
#include "ARRAYOPERATION.H"
#include "DIGITOPERATION.H"

int main(void)
{
    short a = 2;
    short b = 3;
    short size = 5;
    short min = 1, max = 11;
    int sum = 0, substarct = 0;
    std::string arrFunction[] = { "Sum", "Subsract", "Int -> Float", "Float -> Int" };
    //float sumF = 0.0f, substractF = 0.0f;

    int* arr = createArr(0,size);

    fillArr(arr, min, max, size);
    float *arrf = convertNaturalRealNumber(arr, size);
    showArr(arrf, size);

    /*showArr(arr, size);

    sumArr(arr, sum, size);
    showResult(sum, arrFunction[0]);

    substarctArr(arr, substarct, size);
    showResult(substarct, arrFunction[1]);*/

    //deleteArr(arr);

    deleteArr(arrf);

    return 0;
}
;

//if (!arr) {
//    throw new std::runtime_error("no RAM memory");
//}