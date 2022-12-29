#include<iostream>
#include<stdio.h>   // used for C-Style
using namespace std;

#define SIZE 5

int main()
{
    int array[SIZE];
    
    // C-Style Code
    printf("\nC-Style Code...");
    for(int i=0;i<SIZE;i++)
    {
        printf("\nEnter the element at position [%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nArray Elements are: ");
    for(int i=0;i<SIZE;i++)
        printf("%d\t", array[i]);
    
    // CPP-Style Code
    cout<<"\n\nCPP-Style Code...";
    for(int i=0;i<SIZE;i++)
    {
        cout<<"\nEnter the Element as Position ["<<i<<"]: ";
        cin>>array[i];
    }
    cout<<"\nArray Elements are: ";
    for(int i=0;i<SIZE;i++)
        cout<<array[i]<<"\t";
    return 0;
}
