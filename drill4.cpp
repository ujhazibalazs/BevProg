#include "std_lib_facilities.h"

int main()
{
    //7. feladat
    string unit;

    //4. feladat
    //double a=0;
    //double b=0;

    //6. feladat
    double input;
    double inputinmeter;
    double min=0;
    double max=0;
    double sum=0;

    //1. feladat
    while(cin >> input)
    {
        cout << "Unit indicator (cm,m,in,ft): ";
        cin  >> unit;
        if(unit == "m" || unit == "cm" || unit == "in" || unit == "ft")
        {
            if(unit == "m")
            {
                inputinmeter = input;
            }
            else if(unit == "cm")
            {
                inputinmeter = input / 100;
            }
            else if(unit == "in")
            {
                inputinmeter = (input * 2.54)/100
            }
            else if(unit == "ft")
            {
                inputinmeter = ((input * 12) * 2.54) / 100;
            }

            //9. feladat
            sum+=inputinmeter;
            if(inputinmeter<min)
            {
                min=inputinmeter;
            }
            else if(inputinmeter > max)
            {
                max=inputinmeter;
            }
        }
        else
        {
            //8. feladat
            cout << "Wrong unit.";
        }
        
        /*
        if(input < min)
        {
            min=input;
            cout << "The smallest number so far.";
        }
        else if(input > max)
        {
            max=input;
            cout << "The largest number so far.";
        }
        */
        //2. feladat
        /*
        if(a<b)
        {
            cout << "The smaller value is " << a << '\n';
            cout << "The larger value is " << b << '\n';
            //5. feladat
            if(a+1.0/100>=b)
            {
                cout << "The numbers are almost equal.";
            }
        }
        else if(b<a)
        {
            cout << "The smaller value is " << b << '\n';
            cout << "The larger value is " << a << '\n';
            if(b+1.0/100>=a)
            {
                cout << "The numbers are almost equal.";
            }

        }
        else
        {
            //3. feladat
            cout << "The numbers are equal.";
        }
        */
    }
}