#include <iostream>
#include <float.h>
using namespace std;
int main()
{
    cout << FLT_MAX << "\n";
    cout << FLT_MIN << "\n";

    cout << DBL_MAX << "\n";
    cout << DBL_MIN << "\n";

    cout << -DBL_MAX << "\n";
    cout << -DBL_MIN << "\n";
    
    cout << LDBL_MAX << "\n";
    cout << LDBL_MIN << "\n";

    cout << "CHAR\n\n";

    cout << UCHAR_MAX << "\n";
    cout << CHAR_MAX << "\n";
    cout << CHAR_MIN << "\n";
    cout << sizeof(char) << "\n";

    cout << "\n---------------------\n\n";

    cout << "\nSHORT\n\n";

    cout << USHRT_MAX << "\n";
    cout << SHRT_MAX << "\n";
    cout << SHRT_MIN << "\n";
    cout << sizeof(short) << "\n";
    cout << sizeof(SHRT_MAX) << "\n";

    cout << "\n---------------------\n\n";
    
    cout << "INT\n\n";

    cout << UINT_MAX << "\n";
    cout << INT_MAX << "\n";
    cout << INT_MIN << "\n";
    cout << sizeof(INT_MAX) << "\n";
    cout << sizeof(INT_MIN) << "\n";

    cout << "\n---------------------\n\n";

    cout << "LONG\n\n";

    cout << ULONG_MAX << "\n";
    cout << LONG_MAX << "\n";
    cout << LONG_MIN << "\n";
    cout << sizeof(long int) << "\n";
    cout << sizeof(long) << "\n";

    cout << "\n---------------------\n\n";

    cout << "LONG LONG\n\n";

    cout << ULLONG_MAX << "\n";
    cout << LLONG_MAX << "\n";
    cout << LLONG_MIN << "\n";
    cout << sizeof(long long int) << "\n";
    cout << sizeof(long long) << "\n";

    cout << "\n---------------------\n\n";
    
    cout << sizeof(int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    
    return 0;
}