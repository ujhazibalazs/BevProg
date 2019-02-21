#include "std_lib_facilities.h"

int main()
{
    unsigned int a=1;
    int lepes=0;

    while(a!=0)
    {
        a <<= 1;
        lepes++;
        cout << a << '\n';
    }
    cout << "Lépések száma: " << lepes << '\n';
}