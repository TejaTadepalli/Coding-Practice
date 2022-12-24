#include<iostream>
using namespace std;

bool Curious(int);
int factorial(int);

int main()
{
    cout<<"\nThe Curious Numbers between 1 and 10000 are: ";
    for(int i=1; i<=10000; i++)
    {
        bool curiousNum = Curious(i);
        if(curiousNum == true)
            cout<<"\n"<<i;
    }
    return 0;
}

bool Curious(int i)
{
    int sum=0, value=i, digit;
    while(value != 0)
    {
        digit = value%10;
        sum += factorial(digit);
        value /= 10; 
    }
    if(sum == i)
        return true;
    else
        return false;
}

int factorial(int digit)
{
    int f;
    if(digit == 0)
        return 1;
    else
    {
        f = digit * factorial(digit-1);
        return f;
    }
}
