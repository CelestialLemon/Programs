#include<iostream>
#include"wellbeing.h"
using namespace std;


int ChooseOperation()
{
    cout<<"1. Add new app\n2. Remove app\n3. Add use times\n4. Reset use times\n5. Show report";
    int opt;
    cin>>opt;
    return opt;
}

int ReportChoice()
{
    cout<<"Enter your Choice:\n1. Add new report to database\n2. Load an existing report\n";
    int opt;
    cin>>opt;
    return opt;
}

Report NewReport()
{
   Report report;
   report.setDetails();
   return report;
}



int main()
{
    Report report;
    switch(ReportChoice())
    {
        case 1:
         report = NewReport();
         break;

        case 2:
         break;
        
        default:
         cout<<"Invalid Choice!";
         break;
    }    
    
    return 0;

}