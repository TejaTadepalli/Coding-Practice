#include<iostream>
using namespace std;

void numNotes(int);                             // we have declared the function

int main()
{
        int amount;
        cout<<"\nEnter the Amount: ";
        cin>>amount;
        numNotes(amount);
        return 0;
}

void numNotes(int amount)
{
    int den[]={1,2,5,10,20,50,100,500,2000};    // denomination values
    int numofnotes;
    if(amount<=0)
    {
        cout<<"\nNot Possible to Calculate...";
        return;
    }
    cout<<"\n\nDenomination Details: ";
    cout<<"\nValue\tCount\tTotal";              // tried to make output as a tabular display
    for(int i=8;i>=0;i--)
    {
        if(amount>=den[i])
        {
            numofnotes=amount/den[i];
            cout<<"\n"<<den[i]<<"\t\t"<<numofnotes<<"\t\t"<<den[i]*numofnotes;
            amount=amount%den[i];
            if(amount==0)
                break;                          // come out of the loop when we have finished getting the notes of the given amount
        }
    }
}
