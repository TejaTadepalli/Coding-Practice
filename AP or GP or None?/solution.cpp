#include<iostream>
using namespace std;

bool AP(int*);
bool GP(int*);

const int SIZE=10;

int main()
{
    int array[SIZE];
    cout<<"\nEnter the Elements of Array Size: "<<SIZE;
    for(int i=0;i<SIZE;i++)
    {
        cout<<"\nEnter Element at Array Position ["<<i<<"]: ";
        cin>>array[i];
    }
    (AP(array) == true) ? (cout<<"\nThe Array is in AP") : (cout<<"\nThe Array is Not in AP");
    (GP(array) == true) ? (cout<<"\nThe Array is in GP") : (cout<<"\nThe Array is Not in GP");
    return 0;
}

bool AP(int* array)
{
    //formula is: an=a1+(n-1)d
    
    bool flag=true;
    int d = array[1] - array [0];
    for(int i=2;i<SIZE;i++)
    {
        int value = array[i] - array[i-1];
        if(value != d)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool GP(int* array)
{
    // formula is: an=a1*(r)^(n-1)
    
    bool flag=true;
    float r;
    for(int i=0;i<SIZE;i++)
    {
        if(array[i] == 0)
        {
            flag = false;
            break;
        }
        if(flag == true)
        {
            r = (float)(array[1])/(float)(array[0]);
            for(int j=2;j<SIZE;j++)
            {
                float value = (float)(array[j])/(float)(array[i-1]);
                if(value != r)
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    return flag;
}
