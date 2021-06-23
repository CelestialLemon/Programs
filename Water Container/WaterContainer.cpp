#include<iostream>

using namespace std;

int FindVolumeOfTank(int pole1Position, int pole2Position, int pole1Height, int pole2Height)
{
    int lengthOfTank, heightOfTank;

    if(pole2Position > pole1Position)
    {
        lengthOfTank = pole2Position - pole1Position;
    }

    else
    {
        lengthOfTank = pole1Position = pole2Position;
    }

    if(pole2Height > pole1Height)
    {
        heightOfTank = pole1Height;
    }

    else
    {
        heightOfTank = pole2Height;
    }

    int volumeOfTank = lengthOfTank * heightOfTank;
    return volumeOfTank;
    
    
}

int MaxContainerCapacity(int numOfColumns, int *columns)
{
    /*finding the volume of each container made by each column with every other column using combinations
      i.e finding out the volume of container formed by pole 1 with pole 2, pole 2 with pole 3, pole 1 with pole 3 and
      so on. This requires combination nCr such that n is total number of poles and r is 2 since we take 2 poles at a 
      time. We will keep a max area variable to keep track of what was the maximum area that we found. At the same time
      we will also keep track of the poles  that form these maximum area/ volume. maxVolume indicates maximum volume found
      and volume indicates the current computed volume */
    int maxVolume = 0, maxVolumePole1 = 0, maxVolumePole2 = 0;
    int currentVolume; 

    for(int i=0; i<numOfColumns - 1; i++)     
    {
         for(int j=i+1; j<numOfColumns; j++)
         {
              currentVolume = FindVolumeOfTank(i, j, columns[i], columns[j]);
              if(currentVolume > maxVolume)
              {
                  maxVolume = currentVolume;
                  maxVolumePole1 = i;
                  maxVolumePole2 = j;
              }
         }
    }


    printf("Maximum volume : %d, between poles %d and %d", maxVolume, maxVolumePole1 +1, maxVolumePole2 +1);
    return maxVolume;
}

int main()
{
    int numOfColumns;
    cout<<"Enter number of columns in the field: ";
    cin>>numOfColumns;

    int columns[numOfColumns];
    cout<<"\nEnter height of "<<numOfColumns<<" columns : ";
    
    for(int i=0; i<numOfColumns; i++)
    {
        cin>>columns[i];
    }

    MaxContainerCapacity(numOfColumns, columns);

    return 0;

}