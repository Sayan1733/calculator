#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
//Building a calculator using switch statement

using namespace std;

int main()
{
    long a,b;			//intialize variable
    char c;

    cout<<"enter the first no"<<endl;		//taking first no
    cin>>a;

    cout<<"enter the opperator:"<<endl;		//taking the opperator
    cin>>c;

    double result = sqrt(a);				//intialize result with sqrt function for square root

    switch(c)								//start of switch case for opperator
    {

    case '+':								// case for sum

        cout<<"enter the second no:"<<endl;
        cin>>b;
        cout<<"The sum is:"<<a+b<<endl;
        break;

    case '-':								//case for substraction

        cout<<"enter the second no:"<<endl;		
        cin>>b;
        cout<<"The difference is:"<<a-b<<endl;
        break;

    case '*':								//case for multiplication

        cout<<"enter the second no:"<<endl;
        cin>>b;
        cout<<"The multiplication is:"<<a*b<<endl;
        break;

    case '/':								//case for divison

        cout<<"enter the second no:"<<endl;
        cin>>b;
        cout<<"The division is:"<<a/b<<endl;
        break;

    case 's':								//case for square root
        cout<<"The sqrt of "<<a<<" is "<<result<<endl;
        break;

    default:								//default statement intialize
    {
        cout<<"Invalid Input!"<<endl;
        system("Color 04");
    }
    
    }

	getch();
    return 0;
}
