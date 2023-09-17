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
    
    int sum(0);
    int substarct(0);
    float sumf(0);
    float substarctf(0.0f);

    int* arr = nullptr;
    float* arrf = nullptr;

    std::string arrType[] = { "DIGIT", "ARRAY", "EXIT" };
    std::string arrOperation[] = { "GET", "SUM", "SUBSRACT", "INT -> FLOAT", "FLOAT -> INT", "EXIT" };
    
    selectMenu(arrType, EXIT, indMenu);
    printMenu(arrType, EXIT, indMenu);

    switch (indMenu)
    {
    case DIGIT:
        std::cout << "\n" << arrType[DIGIT] << "\n";
        break;
    case ARRAY:
        cout << "\n" << arrType[ARRAY] << "\n";
        indMenuOperation = 0;       
        arr = createArr(0, size);
        fillArr(arr, min, max, size);

        do 
        {
        selectMenu(arrOperation, OUT, indMenuOperation);
        printMenu(arrOperation, OUT, indMenuOperation);

            switch (indMenuOperation)
            {
            case GET:
                cout << arrOperation[GET] << "\n";
                if (arr != nullptr)
                    showArr(arr, size);
                else
                    showArr(arrf, size);
                break;

            case SUM:               
                cout << arrOperation[SUM] << "\n";
                sumArr(arr, sum, size);
                showResult(sum);
                sum = 0;
                sumf = 0.0f;
                break;

            case SUBSTRACT:                
                cout << arrOperation[SUBSTRACT] << "\n";
                substarctArr(arr, substarct, size);
                showResult(substarct);
                substarct = 0;
                substarctf = 0.0f;
                break;

            case INT_TO_FLOAT:
                cout << arrOperation[INT_TO_FLOAT] << "\n";
                arrf = createArr(0.0f, size);
                copyArr(arr, arrf, size);
                deleteArr(arr);
                break;

            case FLOAT_TO_INT:
                cout << arrOperation[FLOAT_TO_INT] << "\n";
                break;
            }
        } while (static_cast<Operation>(indMenuOperation) != OUT );

        if (!arr)
            deleteArr(arr);
        else
            deleteArr(arrf);

        break;
    case EXIT:
        cout << "\n" << arrType[EXIT] << "\n";
    default:
        return 0;
    }

    return 0;
}
;

//if (!arr) {
//    throw new std::runtime_error("no RAM memory");
//}