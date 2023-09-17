#include "PRINTMODULE.H"
#include "ARRAYOPERATION.H"
#include "DIGITOPERATION.H"

enum Type {
    DIGIT,
    ARRAY,
    EXIT
};

enum Operation {
    GET,
    SUM,
    SUBSTRACT,
    INT_TO_FLOAT,
    FLOAT_TO_INT,
    OUT
};

int main(void)
{
    short indMenu(0), indMenuOperation;
    short size(5);
    short min(1), max(11);
    int sum(0), substarct(0);
    //float sumF = 0.0f, substractF = 0.0f;

    std::string arrType[] = { "DIGIT", "ARRAY", "EXIT" };
    std::string arrOperation[] = { "GET", "SUM", "SUBSRACT", "INT -> FLOAT", "FLOAT -> INT", "EXIT" };
    
    selectMenu(arrType, EXIT, indMenu);
    printMenu(arrType, EXIT, indMenu);

    switch (indMenu)
    {
    case DIGIT:
        std::cout << "\nDIGIT\n";
        break;
    case ARRAY:
        cout << "\nARRAY\n";
        indMenuOperation = 0;
        
        do {
        selectMenu(arrOperation, OUT, indMenuOperation);
        printMenu(arrOperation, OUT, indMenuOperation);

            switch (indMenuOperation)
            {
            case GET:
                cout << "\nGET\n";
                break;
            case SUM:
                cout << "\nSUM\n";
                break;
            case SUBSTRACT:
                cout << "\nSUBSTRACT\n";
                break;
            case INT_TO_FLOAT:
                cout << "\nINT_TO_FLOAT\n";
                break;
            case FLOAT_TO_INT:
                cout << "\nFLOAT_TO_INT\n";
                break;
            }
        } while (static_cast<Operation>(indMenuOperation) != OUT );

        break;
    case EXIT:
        cout << "\nEXIT\n";
    default:
        return 0;
    }

    /*int* arr = createArr(0,size);

    fillArr(arr, min, max, size);
    float *arrf = convertNaturalRealNumber(arr, size);
    showArr(arrf, size);*/

    /*showArr(arr, size);

    sumArr(arr, sum, size);
    showResult(sum, arrOperation[0]);

    substarctArr(arr, substarct, size);
    showResult(substarct, arrOperation[1]);*/

    //deleteArr(arr);
    //deleteArr(arrf);

    return 0;
}
;

//if (!arr) {
//    throw new std::runtime_error("no RAM memory");
//}