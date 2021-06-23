#include<iostream>
using namespace std;

void CloseAllDoors(bool *doors)
{
   
   for (int i = 1; i < 101; i++)
   {
       doors[i] = false;


   }
   
}

void ProceduralMethod(bool *doors)
{
    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if(i % j == 0)
            doors[i] = !doors[i];
        }
        
    }
    
}

void SequentialMethod(bool *doors)
{
    int multiplier;
    for (int i = 1; i <= 101; i++)
    {
        multiplier = i;
        while(multiplier < 101)
        {
           doors[multiplier] = !doors[multiplier];
           multiplier += i;
        }
    }
    
}

void PrintDoorStates(bool *doors)
{
    cout<<"Door states : \n";
    for (int i = 0; i < 101; i++)
    {
        cout<<doors[i]<<"\t";
        if(i%10 == 0)
        cout<<"\n";
    }
    
}

int main()
{
   bool doors[101];
 
   CloseAllDoors(doors);
   ProceduralMethod(doors);
   PrintDoorStates(doors);

   CloseAllDoors(doors);
   SequentialMethod(doors);
   PrintDoorStates(doors);


   return 0;
}




/*
puzzle question
100 doors are closed, a person walks to a door in a order. First he walks to every door number divisible by 1 and toogles its state
i.e if its closed open it, if its open then closes it. Then he starts again and visits every door number divisble by 2 then by 3 and so on
it 100. Find which doors are open at end
*/