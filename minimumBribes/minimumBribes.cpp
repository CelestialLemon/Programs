#include<iostream>
using namespace std;
int minimumBribes(int* arr, int numOfElements)
{   int i, j, k, numOfBribes =0, difference ;
    
     for(i=1 ; i<=numOfElements ; i++)
     {  difference = arr[i] - i ;
         if(difference > 2 )
          return -1;    
     }
     
     for (i=1 ; i<=numOfElements ; i++)
     {
         j=2;
         k=1;
         while (j<=numOfElements)
         {
             if (arr[k] > arr[j])
             {
                 arr[0] = arr[k];
                 arr[k] = arr[j];
                 arr[j] = arr[0];
                 numOfBribes++;
             }
             j++;
             k++;
        
         }
     }
     return numOfBribes ;
}
int main()
{
    int numOfTestCases;
    cin>>numOfTestCases;
    int result[numOfTestCases], numOfTestCases2;
    numOfTestCases2 = numOfTestCases ;


    while (numOfTestCases >0)
    {   int i, numOfElements, numOfBribes =0;
        cin>>numOfElements;
        int arr[numOfElements] ;
        for(i=1; i<=numOfElements ; i++)
        {   cin>>arr[i];
        }
    
         result[numOfTestCases] = minimumBribes(arr , numOfElements);
 
       numOfTestCases--;     

    }

   while(numOfTestCases2 >0)
   {   if(result[numOfTestCases2] == -1)
        cout<<"Too chaotic\n";
       else
        cout<<result[numOfTestCases2]<<"\n";
        numOfTestCases2 --;
   }
}
