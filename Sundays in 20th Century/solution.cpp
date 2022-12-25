#include<iostream>
using namespace std;

int Sundays();
bool leapYear(int);

enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum day {Sun, Mon, Tue, Wed, Thur, Fri, Sat};

int main()
{
    int total = Sundays();
    cout<<"\nNumber of Sundays that fell on the 1st of the Month during 20th Century are: "<<total;
    return 0;
}

int Sundays()
{
    int first=Mon, last, totalSunday=0;
    if(leapYear(1900))  // first day is given to be as a Monday
        last = Tue;
    else
        last = Mon;
    for(int year=1901; year<=2000; year++)
    {
        for(int month=Jan; month<=Dec; month++)
        {
            first = (last+1)%7; // formula to find the value
            if(first == Sun)
                totalSunday++;
            //need to check if it comes under loop or not...
            switch(month)
            {
                case Jan:                         // kept it empty as no such condition...
                case Mar:
                case May:
                case Jul:
                case Aug:
                case Oct:
                case Dec:   last = (first+2)%7;
                            break;
                case Apr:
                case Jun:
                case Sep:
                case Nov:   last = (first+1)%7;
                            break;
                case Feb:   if(leapYear(year))
                                last = first;
                            else
                                last = (first+6)%7;
                                break;
            }
        }
    }
    return totalSunday;
}

bool leapYear(int year)
{
    if((year%100 != 0) && (year%4 == 0) || (year%400 == 0))
        return true;
    else
        return false;
}
