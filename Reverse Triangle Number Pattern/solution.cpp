#include<iostream>
using namespace std;

void Pattern(int);

int main()
{
    int num1;
    cout<<"\nEnter the Number: ";
    Pattern(num1);
    return 0;
}

void Pattern(int num)
{
    for(int i=0; i<=num; i++)
    {
        for(int j=num-i; j>0; j--)
            cout<<j<<" ";
        cout<<endl;
    }
    return;
}
