/*Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out 
the values in the format 11/28/2004 by function. Pass the structure to the function*/

#include <iostream>
using namespace std;

struct Date{
    int month;
    int day;
    int year;

};


void printDate(const Date& date){

    cout << date.month << "/" <<date.day <<"/" <<date.year<<endl;

};
int main(){
   
    Date myDate;
   
    myDate.month=11;
    myDate.day=28;
    myDate.year=2002;

    printDate(myDate);
    return 0;
}
