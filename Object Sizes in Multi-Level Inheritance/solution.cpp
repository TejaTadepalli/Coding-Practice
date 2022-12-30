#include<iostream>
using namespace std;

class Parent
{
    private:
        int a;
    protected:
        char b;
    public:
        int c;
}P;

class Child1 : protected Parent
{
    private:
        int i;
    protected:
        int j;
    public:
        char k;
}C1;

class Child2 : public Child1
{
    private:
        char p;
    protected:
        int q;
    public:
        int r;
}C2;

int main()
{
    cout<<"\nSize of Object P is: "<<sizeof(P);
    cout<<"\nSize of Object C1 is: "<<sizeof(C1);
    cout<<"\nSize of Object C2 is: "<<sizeof(C2);
    return 0;
}
