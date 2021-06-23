#include<iostream>
using namespace std;



class App
{
    char appName[20];
    float useTime;
};



class Report
{
   char reportName[20];
   App applist[15];
   float totalUseTime;
   char duration[15];
   char startDate[15];

   public:
   void setDetails();

};

inline void Report::setDetails()
{
    cout<<"Enter report name: ";
    fflush(stdin);
    gets(reportName);
    
    cout<<"Enter duration of report: ";
    fflush(stdin);
    gets(duration);

    cout<<"Enter starting date of report";
    fflush(stdin);
    gets(startDate);

}


