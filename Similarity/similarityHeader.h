#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

int deletePosition(char* input, int position)
{
	int i, stringLength = strlen(input);
	
	
	for(i=position ; i<(stringLength -1) ; i++)                  //function to delete a given element from an array
	{
		input[i] = input [i+1] ;
	}

	return 0;
}

int firstLetterMatch(char* string1, char* string2)
{    
                                                //first letter match program
	 if(string1[0] == string2[0])
	  return 30 ;
	 else
	  return 0;
}

int lengthMatch(char* string1, char* string2)                   //length match code
{   
     if(strlen(string1) == strlen(string2))
       return 10;
     else
	   return 0; 
}

int matchSubsequentLetters(char* string1, char* string2)
{  
       int i, j, similarityPoints = 0, multiplier = -1, position;
	   char input1[20], input2[20];
	   strcpy(input1, string1);
	   strcpy(input2, string2);
	   
	   
	 for(i=0 ; i<strlen(input1) ; i++)                                           //perform operation for all chars of first string
	 { 
	       
	                                                     
	   if(multiplier> -1)                                                                
	   {    if(multiplier == 0)
	        similarityPoints += 2;                                                      //if a second letter matches 2 points are awarded
	   	    if(input1[i] == input2[position +1])
	   	    {   
	   	        multiplier++;                                                      //when the search is on matching streak 5 extra points are awarded for every subsequent match
				   similarityPoints = similarityPoints + (5 * multiplier)	;
				   position++;
		    }
		    else
		        multiplier = -1 ;                     //if streak breaks reset the multiplier to original value
	   }
	   
	   if(multiplier == -1)
	   {
	   	   for(j=0 ; j<strlen(input2) ; j++)
	   	   {  
	   	   	   if(input1[i] == input2[j])
	   	   	   {    multiplier ++ ;                         //search for new streak or letter matches
				    position = j ;
					break;                              //match for i th letter of string1 found at jth position for string2
			   }
		   }
	   }
	   
	   
    }
     return similarityPoints;
	    
}



int findSimilarity(char* string1, char* string2)
{
	int similarityPoints =0 ;
	strlwr(string1);
	strlwr(string2);                                                    //reduce all chars to one level of capitalization to make comparison easy
    similarityPoints += firstLetterMatch(string1, string2);                //first step, first letter match (30 points max)
   
	similarityPoints += lengthMatch(string1, string2);                      //second step, compare lengths (10 points max)
                                                                   
	similarityPoints += matchSubsequentLetters(string1, string2);     //third steps, match remaining letters (no max points)
	return similarityPoints;   
} 


