#include<iostream>
using namespace std;

struct Date
{
   int date;
   int month;
   int year;

   void initDate()
   {
       date=17;
       month=5;
       year=2003;
   }

   void printDateOnConsole()
   {
    cout<<"Date="<<date<<"-"<<month<<"-"<<year<<endl;
   }

   void acceptDateonConsole()
   {
     cout<<"enter date,month and year=";
     cin>>date>>month>>year;
   }
   bool isLeapYear()
   {
    if((year%4)==0)
    return true;
    else
    return false;
   }

   
};
int menu()
   {
    int choice;
    cout<<"0.Exit\n";
    cout<<"1.initDate"<<endl;
    cout<<"2.printDate"<<endl;
    cout<<"3.acceptDate"<<endl;
    cout<<"4.CheckLeapYear"<<endl;
     cout<<"enter choice=";
     cin>>choice;
     return choice;
   }
int main()
{
    struct Date d;
    int choice;

    while((choice=menu())!=0)
    {
       switch(choice)
       {
        case 1: d.initDate();
           break;

        case 2:d.printDateOnConsole();
          break;

        case 3:d.acceptDateonConsole();
          break;

        case 4:if(d.isLeapYear())
               cout<<"Leap year";
               else
               cout<<"Not Leap Year";
        break;

        default:

        cout<<"Invalid choice";
       }
    }
}
