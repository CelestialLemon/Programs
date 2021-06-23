#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

COORD coord = {0, 0};
void gotoxy (float x, float y)
{

        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{   float x =25, y =25 ;
    bool continueGame = true, erase ;
	
do{
	
	erase = false ;
	char path = getch();
	if(path == 'w')
	 y = y - 1; 
	  
	else if(path == 's')
	  y = y +1 ;
	  
	else if(path == 'a')
	   x += -1 ;
	   
	else if(path == 'd')
	  x += 1 ;
	  
	  else if(path == 'c')
	  {
	  	system("CLS");
	  	x =25 ;
	  	y =25 ;
	  }
	  
	 else if(path == 'W')
	 {
	   erase = true ;
	  y -=0.5 ;
     }
	else if(path == 'S')
	 {
	   erase = true ;
	  y += 0.5 ;
     }
	else if(path == 'A')
	{
	   erase = true ;
	  x += -1 ;
     } 
	else if(path == 'D')
	{
	   erase = true ;
	      x += 1 ;
     }
	 
	  
	  else
	  continueGame = false ;
	  
	  
	  gotoxy(x, y);
	  if(!erase)
	  cout<<".";
	  else
	  cout<<" ";



  }while(continueGame);
	return 0;
}
