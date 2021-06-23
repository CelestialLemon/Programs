#include<iostream>
#include"mylibrary.h"
using namespace std;

void TakeInput(int *arr, int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
}

void DisplayOutput(int *arr, int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}




int main()
{
    cout<<"Program for counting sort\n";
    int numOfElements;
    cout<<"Enter number of elements in the array: ";
    cin>>numOfElements;
     
    int arr[numOfElements];
    
    cout<<"Enter elements for the array\n";
    TakeInput(arr, numOfElements);
    CountingSort(arr, numOfElements);
    DisplayOutput(arr, numOfElements);


    return 0;
}