#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

COORD coord = {0, 0};
void gotoxy (int x, int y)
{

        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{   	int i, x=500;

  do{
   
           gotoxy(20, 5);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"\\";
	
	       }
	        Sleep(x);
			
			 gotoxy(20, 5);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"|";
	
	       }
	        Sleep(x); 
			
			 gotoxy(20, 5);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"/";
	
	       }
	        Sleep(x); 
			
			 gotoxy(20, 5);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"_";
	
	       }
	        Sleep(x);
	        
	        system("CLS");
			
			 gotoxy(20, 6);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"\\";
	
	       }
	        Sleep(x); 
			
			gotoxy(20, 6);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"|";
	
	       }
	       Sleep(x);
		   
		   gotoxy(20, 6);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"/";
	
	       } 
	       Sleep(x);
	       
		   system("CLS");
		   
		   gotoxy(20, 5);
	       for(i=0  ; i< 50 ; i++)
	       {
	         	cout<<"_";
	
	       } 
		   Sleep(x);        
     }while(true);
   return 5;    
}
