#include<iostream>
using namespace std;

string FindLongestCommonPrefix(string* strings, int numOfStrings)
{
   string longestCommonPrefix = "";

   char nowSearching;

   bool foundEverwhere = true;

   for(int i=0; i<strings[0].length(); i++)
   {
       nowSearching = strings[0][i];
       foundEverwhere = true;
       for(int j=1; j<numOfStrings; j++)
       {
           if(strings[j].length() > i)
           {
               if(strings[j][i] == nowSearching)
               {
                  // longestCommonPrefix += nowSearching;
               }

               else
               {
                    foundEverwhere = false;
               }


           }

           else
           {
               foundEverwhere = false;
           }
           
       }

       if(foundEverwhere)
       {
           longestCommonPrefix += nowSearching;
       }
   }

   return longestCommonPrefix;


}

int main()
{
    int numOfStrings;
    cout<<"Enter number of string : ";
    cin>>numOfStrings;

    string strings[numOfStrings];

    for(int i=0; i<numOfStrings; i++)
    {
        cout<<"\nEnter string #"<<i<<" : ";
        cin>>strings[i];
    }

    string longestCommonPrefix = FindLongestCommonPrefix(strings, numOfStrings);

    cout<<"The longest common prefix in the given strings is "<<longestCommonPrefix;
        
    return 0;
}