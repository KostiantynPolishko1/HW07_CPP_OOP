#include "PRINTMODULE.H"
#include "ARRAYOPERATION.H"
#include "DIGITOPERATION.H"

enum Type {
    DIGIT,
    ARRAY,
    EXIT
}
;
enum Digit {
    INTEGER,
    FLOAT,
    EXIT2
}
;
enum Operation {
    GET,
    SUM,
    SUBSTRACT,
    INT_TO_FLOAT,
    FLOAT_TO_INT,
    EXIT3
}
;

int main(void)
{
    short indMenu(0), indMenuDigit, indMenuOperation;
    short size(5);
    short min(1), max(11);

    int sum(0);
    int substarct(0);
    float sumf(0);
    float substarctf(0.0f);

    int a(0), b(0);
    float af(0.0f), bf(0.0f);

    int* arr = nullptr;
    float* arrf = nullptr;

    std::string arrMenu[] = { "TYPE OPERATIONS", "TYPE VALUES", "OPERATIONS" };
    std::string arrType[] = { "DIGIT", "ARRAY", "EXIT" };
    std::string arrDigit[] = { "INTEGER", "FLOAT", "EXIT" };
    std::string arrOperation[] = { "GET", "SUM", "SUBSRACT", "INT -> FLOAT", "FLOAT -> INT", "EXIT" };

    //menu for select type of structure value or array
    selectMenu(arrType, EXIT, arrMenu[0], indMenu);
    printMenu(arrType, EXIT, arrMenu[0], indMenu);
    system("CLS");

    switch (indMenu)
    {
    case DIGIT:
        {
            std::cout << "\n" << arrType[DIGIT] << "\n";
            indMenuOperation = 0;
            indMenuDigit = 0;

            //menu for select type of variables
            selectMenu(arrDigit, EXIT2, arrMenu[1], indMenuDigit);
            printMenu(arrDigit, EXIT2, arrMenu[1], indMenuDigit);
            system("CLS");

            switch (indMenuDigit)
            {
            case INTEGER:
                cout << arrDigit[INTEGER] << "\n";
                {
                    a = createValue(a, min, max);
                    b = createValue(b, min, max);
                    break;
                }

            case FLOAT:
                cout << arrDigit[FLOAT] << "\n";
                {
                    af = createValue(af, min, max);
                    bf = createValue(af, min, max);
                    break;
                }

            case EXIT2:
                cout << arrDigit[EXIT2] << "\n";
                return 0;
            }

            //menu for select type of operations
            do {
                selectMenu(arrOperation, EXIT3, arrMenu[2], indMenuOperation);
                printMenu(arrOperation, EXIT3, arrMenu[2], indMenuOperation);
                system("CLS");

                switch (indMenuOperation)
                {

                case GET:
                    cout << arrOperation[GET] << "\n";
                    if (!a && !b) {
                        showResult(af);
                        showResult(bf);
                    }
                    else if (!af && !bf) {
                        showResult(a);
                        showResult(b);
                    }
                    break;

                case SUM:
                    cout << arrOperation[SUM] << "\n";
                    if (!a && !b) {
                        sumValue(af, bf, sumf);
                        showResult(sumf);
                    }
                    else if (!af && !bf) {
                        sumValue(a, b, sum);
                        showResult(sum);
                    }
                    sum = 0;
                    sumf = 0.0f;
                    break;

                case SUBSTRACT:
                    cout << arrOperation[SUBSTRACT] << "\n";
                    if (!a && !b) {
                        substractValue(af, bf, sumf);
                        showResult(sumf);
                    }
                    else if (!af && !bf) {
                        substractValue(a, b, sum);
                        showResult(sum);
                    }
                    sum = 0;
                    sumf = 0.0f;
                    break;

                case INT_TO_FLOAT:
                    cout << arrOperation[INT_TO_FLOAT] << "\n";
                    if (!af && !bf) {
                        af = valueIntFloat(a);
                        bf = valueIntFloat(b);
                        a = 0, b = 0;
                        showResult(af);
                        showResult(bf);
                    }
                    else
                        cout << "\nNO TRANSFORM! VARIABLES ARE ALREADY FLOAT!";
                    break;

                case FLOAT_TO_INT:
                    cout << arrOperation[FLOAT_TO_INT] << "\n";
                    if (!a && !b) {
                        a = valueIntFloat(af);
                        b = valueIntFloat(bf);
                        af = 0.0f, bf = 0.0f;
                        showResult(a);
                        showResult(b);
                    }
                    else 
                        cout << "\nNO TRANSFORM! VARIABLES ARE ALREADY INT!";
                    break;

                case EXIT3:
                    cout << arrOperation[EXIT3] << "\n";               
                    break;
                }

            } while (static_cast<Operation>(indMenuOperation) != EXIT3);

            cout << "\n" << arrOperation[EXIT3] << "\n";
        }
    case ARRAY:
        {
            cout << "\n" << arrType[ARRAY] << "\n";
            indMenuOperation = 0;
            indMenuDigit = 0;

            //menu for select type of variables
            selectMenu(arrDigit, EXIT, arrMenu[1], indMenuDigit);
            printMenu(arrDigit, EXIT, arrMenu[1], indMenuDigit);
            system("CLS");

            switch (indMenuDigit)
            {
            case INTEGER:
                cout << arrDigit[INTEGER] << "\n";
                arr = createArr(0, size);

                if (!arr) {
                    throw new std::runtime_error("no RAM memory");
                    return 1;
                }
                fillArr(arr, min, max, size);
                break;

            case FLOAT:
                cout << arrDigit[FLOAT] << "\n";
                arrf = createArr(0.0f, size);
                if (!arrf) {
                    throw new std::runtime_error("no RAM memory");
                    return 1;
                }
                fillArr(arrf, min, max, size);
                break;

            case EXIT2:
                cout << arrDigit[EXIT2] << "\n";
                return 0;
            }

            //menu for select type of operations
            do
            {
                selectMenu(arrOperation, EXIT3, arrMenu[2], indMenuOperation);
                printMenu(arrOperation, EXIT3, arrMenu[2], indMenuOperation);
                system("CLS");

                switch (indMenuOperation)
                {
                case GET:
                    cout << arrOperation[GET] << "\n";
                    if (!arr)
                        showArr(arrf, size);
                    else
                        showArr(arr, size);
                    break;

                case SUM:
                    cout << arrOperation[SUM] << "\n";
                    if (!arr) {
                        sumArr(arrf, sumf, size);
                        showResult(sumf);
                        sumf = 0.0f;
                    }
                    else if(!arrf) {
                        sumArr(arr, sum, size);
                        showResult(sum);
                        sum = 0;
                    }                                     
                    break;

                case SUBSTRACT:
                    cout << arrOperation[SUBSTRACT] << "\n";
                    if (!arr) {
                        substarctArr(arrf, substarctf, size);
                        showResult(substarctf);
                        substarctf = 0.0f;
                    }
                    else if(!arrf) {
                        substarctArr(arr, substarct, size);
                        showResult(substarct);
                        substarct = 0;
                    }
                    break;

                case INT_TO_FLOAT:
                    cout << arrOperation[INT_TO_FLOAT] << "\n";
                    if (!arrf) {
                        arrf = createArr(0.0f, size);
                        if (!arrf) {
                            throw new std::runtime_error("no RAM memory");
                            return 1;
                        }
                        copyArr(arr, arrf, size);
                        showArr(arrf, size);
                        deleteArr(arr);
                    }
                    else
                        cout << "\nNO TRANSFORM! VARIABLES ARE ALREADY FLOAT!";
                    break;

                case FLOAT_TO_INT:
                    cout << arrOperation[FLOAT_TO_INT] << "\n";
                    if (!arr) {
                        arr = createArr(0, size);
                        if (!arr) {
                            throw new std::runtime_error("no RAM memory");
                            return 1;
                        }
                        copyArr(arrf, arr, size);
                        showArr(arr, size);
                        deleteArr(arrf);
                    }
                    else
                        cout << "\nNO TRANSFORM! VARIABLES ARE ALREADY INT!";
                    break;
                }
            } while (static_cast<Operation>(indMenuOperation) != EXIT3);

            if (!arr)
                deleteArr(arrf);
            else if (!arrf)
                deleteArr(arr);

            cout << "\n" << arrOperation[EXIT3] << "\n";
            break;
        }
    case EXIT:
        cout << "\n" << arrType[EXIT] << "\n";
    default:
        return 0;
    }

    return 0;
}
;