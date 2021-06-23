#include<iostream>

using namespace std;
int main()
{   int i ,j,  numOfTestCases;
   cin>> numOfTestCases ;
    long numbers[numOfTestCases] ;
	int sum[numOfTestCases],  digits[numOfTestCases][8], numOfDigits[numOfTestCases], digitsOfSum[2] ;
    
    // take input of numbers
    for (i=0 ; i<numOfTestCases ; i++)
    {  
       cin >> numbers[i] ;
	}
	 
	 //determine number digits of all the numbers
	 
	 for (i=0 ; i<numOfTestCases ; i++)
	 {
	 	//determining no of digits for one number code
	 	    if ( numbers[i] < 10 )
			      numOfDigits [i]  = 1 ;			  
			
			if(numbers[i]>9 && numbers[i]<100) 
			     numOfDigits [i]  = 2 ; 
		    
			if(numbers[i]>99 && numbers[i]<1000) 
			     numOfDigits [i]  = 3 ;
		    
			if(numbers[i]>999 && numbers[i]<10000) 
			     numOfDigits [i]  = 4 ;
			
			if(numbers[i]>9999 && numbers[i]<100000) 
			     numOfDigits [i]  = 5 ;
			
			if(numbers[i]>99999 && numbers[i]<1000000) 
			     numOfDigits [i]  = 6;
			
			if(numbers[i]>999999 && numbers[i]<10000000) 
			     numOfDigits [i]  = 7 ;
				 
			if(numbers[i]>9999999 && numbers[i]<100000000) 
			     numOfDigits [i]  = 8 ;          
		
	 }
	 
	//digit seperator for all numbers
	
	for (i=0 ; i<numOfTestCases ; i++)
	{   
	     for (j=0 ; numbers[i]>0 && j<8 ; j++)
	     {  
	         digits[i][j] = numbers[i] % 10 ;
	         numbers[i] = numbers[i] / 10 ;
		 }
	
	}
	//print digits
/*	for(i=0 ; i<numOfTestCases ; i++)
	{
		switch(numOfDigits[i])
		{
		    case 1:
			for (j=0 ; j<1 ; j++)
			{
			   cout << digits[i][j];
			   cout<<" ";
			}
			break;
	         case 2:
			for (j=0 ; j<2 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	     	case 3:
			for (j=0 ; j<3 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	    	case 4:
			for (j=0 ; j<4 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	    	case 5:
			for (j=0 ; j<5 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	    	case 6:
			for (j=0 ; j<6 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	    	case 7:
			for (j=0 ; j<7 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	    	case 8:
			for (j=0 ; j<8 ; j++)
			{
			   cout << digits[i][j];
			   cout << " ";
			}
			break;
	   }
	   cout<<"\n";
   }
  */ 
   cout<<"\n\n";
  
   
   //initialize sum to 0 first
   for (i=0 ; i<numOfTestCases ; i++)
   {
   	   sum[i] = 0;
   }
   
   //add digits
  
    for(i=0 ; i<numOfTestCases ; i++)
    {  
       	  	for (j=0 ; j<numOfDigits[i] ; j++)
       	  	{
			   sum[i] = sum[i] + digits[i][j] ; 	 
			}
			
			while(sum[i] > 9)
			{  
			    digitsOfSum[0] = sum[i] % 10;
				sum[i] = sum[i] / 10;
				digitsOfSum[1] = sum[i] % 10;
				sum[i] = sum[i] / 10;
				sum[i] = digitsOfSum[0] + digitsOfSum[1];
				 
			}
			
   }
   
   //print sum
   
   for (i=0 ; i<numOfTestCases ; i++)
   {
   	   cout << sum[i] ;
   	   cout << "\n";
   }
	return 0 ;
	
	
	
	
}
