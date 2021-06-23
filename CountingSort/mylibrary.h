#include<iostream>
using namespace std;

void CountingSort(int *arr, int size)
{
    int rangeMax, rangeMin;

    //To find max number in the array
    rangeMax = arr[0];
    for(int i = 0 ; i<size ; i++)
    {
        if(rangeMax < arr[i])
        rangeMax = arr[i];
    }

    //To find min number in the array
    rangeMin = arr[0];
    for(int i = 0 ; i<size ; i++)
    {
        if(rangeMin > arr[i])
        rangeMin = arr[i];
    }
    
    int countArraySize = rangeMax - rangeMin + 1;
    
    int countArray[countArraySize];
    //initialize all values to 0;
    for(int i=0 ; i < countArraySize ; i++)
    {
        countArray[i] = 0;
    }

    

    //counting loop
    for(int i=0 ; i<size ; i++)
    {
        countArray[arr[i] - rangeMin]++;
    }

    

    //reordering array
    int arrPosition = 0;
    for(int i=0 ; i<countArraySize ; i++)
    {
        for(int j=countArray[i] ; j>0 ; j--)
        {
            arr[arrPosition] = rangeMin + i ;
            arrPosition++;
        }
    }

    



}
