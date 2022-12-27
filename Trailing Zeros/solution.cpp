#include<iostream>
using namespace std;

int main()
{
    int num=0,countZero=0,temp=0;
    cout<<"\nEnter Number: ";
    cin>>num;
    if(num<0)
        cout<<"\nWRONG INPUT!";
    else
    {
        for(int i=1;i<=num;i++)
        {
            temp=i;
            while(temp%5 == 0)
            {
                countZero++;
                temp/=5;
            }
        }
        cout<<"\nNumber of Trailing Zeros for "<<num<<"! are: "<<countZero;
    }
    return 0;
}
