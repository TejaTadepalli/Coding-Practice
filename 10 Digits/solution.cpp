#include<iostream>
using namespace std;

int Digits(int);

int main()
{
    int num1=1, num2=1, num3, index=3, value;
    while(true)
    {
        num3 = num1 + num2;
        value = Digits(num3);
        if(value == 10)   //finding specific condition of 10 digits
        {
            cout<<"\nNumber is: "<<num3;
            cout<<"\nIt's index in Fibonacci Sequence is: "<<index;
            break;
        }
        //Below is Fibonacci Logic
        index++;
        num1 = num2;
        num2 = num3;
    }
    return 0;
}

int Digits(int num)
{
    int count=0;
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
