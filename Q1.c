#include<stdio.h>
struct Date
{
  int day;
  int month;
  int year;
};

  void initDate(struct Date *d)
  {
     d->day=1;
     d->month=8;
     d->year=2024;
  }

  void printDateOnConsole(struct Date d)
  {
    printf("Date=%d-%d-%d\n",d.day,d.month,d.year);
  }

  void acceptDateFromConsole(struct Date *d)
  {
    printf("enter day,month and year=");
    scanf("%d%d%d",&d->day,&d->month,&d->year);
  }

  int menu()
  {
    int choice;
    printf("0:exit\n");
    printf("1.Initialize Date\n");
    printf("2.PrintDateOnConsole\n");
    printf("3 Accept Date\n");

    printf("Enter choice=\n");
    scanf("%d",&choice);
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
        case 1: initDate(&d);
              break;

        case 2:printDateOnConsole(d);
           break;

        case 3:acceptDateFromConsole(&d);
           break;

    default:
         printf("Invalid Choice");
    }
 }

}