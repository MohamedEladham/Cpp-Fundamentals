#include <iostream>
using namespace std;

int main()
{
    // =========================
    // Dynamic int allocation
    // =========================
    int* ptrI = new int;

    *ptrI = 10;

    cout << "Int Value : " << *ptrI << endl;
    cout << "Address   : " << ptrI << endl;

    delete ptrI;
    ptrI = nullptr;

    cout << "\n--------------------\n";

    // =========================
    // Dynamic float allocation
    // =========================
    float* ptrF = new float;

    *ptrF = 22.66f;

    cout << "Float Value : " << *ptrF << endl;
    cout << "Address     : " << ptrF << endl;

    delete ptrF;
    ptrF = nullptr;

    return 0;
}