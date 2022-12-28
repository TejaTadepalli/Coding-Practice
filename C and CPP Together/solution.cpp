#include<iostream>
#include<stdio.h>        // for the scanf() and printf() functions...
#include<string>        // for the string data-type
using namespace std;

int main()
{
    char c_ch,cpp_ch;
    int c_int,cpp_int;
    long int c_lint,cpp_lint;
    float c_f,cpp_f;
    double c_d,cpp_d;
    long double c_ld,cpp_ld;
    string c_string,cpp_string;
    
    printf("\nC-Style Code...");                                // C-Style Code
    printf("\nEnter a Character: ");
    scanf("%c", &c_ch);
    printf("\nEnter an Integer: ");
    scanf("%d", &c_int);
    printf("\nEnter a Long Integer: ");
    scanf("%ld", &c_lint);
    printf("\nEnter a Float: ");
    scanf("%f", &c_f);
    printf("\nEnter a Double: ");
    scanf("%lf", &c_d);
    printf("\nEnter a Long Double: ");
    scanf("%Lf", &c_ld);
    printf("\nEnter a String: ");
    scanf("%s", &c_string);
    printf("\n\nEntered Values are: ");
    printf("\nCharacter: %c", c_ch);
    printf("\nInteger: %d", c_int);
    printf("\nLong Integer: %ld", c_lint);
    printf("\nFloat: %f", c_f);
    printf("\nDouble: %lf", c_d);
    printf("\nLong Double: %Lf", c_ld);
    printf("\nString: %s", c_string);
    
    cout<<"\n\nCPP-Style Code...";                            // CPP-Style Code
    cout<<"\nEnter a Character: ";
    cin>>cpp_ch;
    cout<<"\nEnter an Integer: ";
    cin>>cpp_int;
    cout<<"\nEnter a Long Integer: ";
    cin>>cpp_lint;
    cout<<"\nEnter a Float: ";
    cin>>cpp_f;
    cout<<"\nEnter a Double: ";
    cin>>cpp_d;
    cout<<"\nEnter a Long Double: ";
    cin>>cpp_ld;
    cout<<"\nEnter a String: ";
    cin>>cpp_string;
    cout<<"\n\nEntered Values are: ";
    cout<<"\nCharacter: "<<cpp_ch;
    cout<<"\nInteger: "<<cpp_int;
    cout<<"\nLong Integer: "<<cpp_lint;
    cout<<"\nFloat: "<<cpp_f;
    cout<<"\nDouble: "<<cpp_d;
    cout<<"\nLong Double: "<<cpp_ld;
    std::cout<<"\nString: "<<cpp_string<<std::endl;           // With normal cout, we cannot print the string... as a result I have used this method
    return 0;
}
