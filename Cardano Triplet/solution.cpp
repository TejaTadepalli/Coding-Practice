#include<iostream>
#include<math.h>
using namespace std;

bool Cardano(int,int,int);

int main()
{
    int totalCardano=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            for(int k=1;k<=100;k++)
            {
                if((i+j+k)<=100)
                {
                    if(Cardano(i,j,k))
                    {
                        cout<<"\nThere is a Cardano Triplet for: ("<<i<<", "<<j<<", "<<k<<")";
                        totalCardano++;
                    }
                }
            }
        }
    }
    cout<<"\n\nTotal Cardano Triplets are: "<<totalCardano;
    return 0;
}

bool Cardano(int i,int j,int k)
{
    float value = cbrt(i + (j*sqrt(k))) + cbrt(i - (j*sqrt(k)));    // Cardano Triplet Formula which has been given...
    if((value < 1.000001) && (value > 0.999999))
    // cannot do if(value == 1) as this is a float value(root will give us approximate value and we will need to take accordingly)
        return true;
    else
        return false;
}
