#include "std_lib_facilities.h"

int main()
{
    int a = 7;
    int b = 1;

    //Változók cseréje különbséggel
    a = a + b;
    cout << "a = " << a << "\nb = " << b << "\n";
    b = a - b;
    cout << "a = " << a << "\nb = " << b << "\n";
    a = a - b;
    cout << "a = " << a << "\nb = " << b << "\n\n";

    a = 7;
    b = 1;

    //Változók cseréje xor-al
    a = a xor b;
    cout << "a = " << a << "\nb = " << b << "\n";
    b = a xor b;
    cout << "a = " << a << "\nb = " << b << "\n";
    a = a xor b;
    cout << "a = " << a << "\nb = " << b << "\n\n";

    a = 7;
    b = 1;

    //Változók cseréje szorzattal
    a = a * b;
    cout << "a = " << a << "\nb = " << b << "\n";
    b = a / b;
    cout << "a = " << a << "\nb = " << b << "\n";
    a = a / b;
    cout << "a = " << a << "\nb = " << b << "\n\n";

}

