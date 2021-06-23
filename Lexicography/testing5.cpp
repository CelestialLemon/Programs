#include<iostream>
#include<string.h>
using namespace std;


int bubbleSort(char* arr, int numOfElements)
{
	int i,j , temp;
	for(i=0 ; i<numOfElements ; i++)
	{  
		for(j=0 ; j<(numOfElements -1) ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				
				
			}
		}
	}

}

int findFactorial(int n)
{
	
	if(n==0)
	return 1;
	
	int result =1;                                    //function to find factorail of a given number
	for(int i=1 ; i<=n ; i++)
	{
		result *= i;
	}
	return result;
}

int findNumOfPermutations(int n, int r)
{                                                      //function to find num of permutations for given pair of n and r
	int nFactorial, nrFactorial;
	nFactorial = findFactorial(n);
	nrFactorial = findFactorial(n-r);
	
	int numOfPerms = nFactorial / nrFactorial ;
	return numOfPerms;
}

int findTotalNumOfPerms(int n)
{
	int result = 0;                               //fuction to find total no of permutations for a given number of objects
	for(int i =1 ; i<= n ; i++)
	{
		result += findNumOfPermutations(n, i);   //loop finds out permutations for each value of r and adds them
	}
	return result;
}
string findAndDelete(string s1, string s2)
{
	int strLen1 = s1.length();
	int strLen2 = s2.length();
	                                                                    //this function is for finding the missing elements in the string
	                                                                     //it searches for an element that is present and deletes it thus
	                                                                     //only elements that are missing remian
	for(int i=0 ; i<strLen1 ; i++)                        //this loop runs for all the elements we want to delete
	{
		for(int j=0 ; j<strLen2 ; j++)                     //this loop searches for elements in second string
		{
			if(s1[i] == s2[j])
			{ 
				for(int k=j ; k<(strLen2 - 1); k++)                        //intermost loop does the deleting by shifting everthing
				{
					s2[k] = s2[k+1];
				}
				strLen2--;
			}
		}
	}
    
   
	
	return  s2;                                                    //return what's remaining
	
	
}




void findPermutations(string* words, int n, int r, char* Letters)
{
	char letters[n];                                                           //fuction finds out permutations of given letters for specific pair of
	                                                                          //n and r
	strcpy (letters, Letters);
	string letterString;
	letterString = Letters;
	
	int checkAmmo, putAmmo, checkAmmoRefil, putAmmoRefil, ammoNum;             //checkAmmo is to check the missing letters every fixed interval
	char appendUnit;                                                             //putAmmo is to append an element to string
	checkAmmo =0;                                                              //checkAmmoRefil is to refil checkAmmo if it runs out i.e we need to check again
	putAmmo = 0;                                                                //similarly if putAmmo runs out we need to change the element we append
	ammoNum = 0;                                                                //ammoNum dictates which unit we are appending at the end
	string remain;                                                               //string remain stores which elements are missing from checked string
	int numOfPerms = findNumOfPermutations(n, r);                       
	
	checkAmmoRefil = numOfPerms;
	putAmmoRefil = numOfPerms / n;


	
	for(int i=0 ; i<r ; i++)
   {   
		checkAmmo =0;                                  //put checkAmmo and putAmmo 0 so we check first position and change ammo for appending first unit
		putAmmo =0;                                     //basically reset the cycle
		
		for(int j=0  ; j<numOfPerms ; j++)
		{   
			if(checkAmmo == 0)                      //if we run out of checkAmmo check which letter are missing
			{   ammoNum =0;                       //we don't check every string for missing characters , we only do it at required intervals
			                                    //when check is required checkAmmo runs our thus we check
				remain = findAndDelete(words[j], letterString);
				
				
				checkAmmo = checkAmmoRefil;              //since we checked now we refil checkAmmo completely
			}
			
			if(putAmmo == 0)
			{                                       //when putAmmo runs out we need to change the unit that we append at end of string
				appendUnit = remain[ammoNum];
				ammoNum++;
				putAmmo = putAmmoRefil;
			}
			
			words[j] += appendUnit;                     //this line actually does the appending
			checkAmmo--;                                 //we did one appending so checkAmmo and putAmmo are reduced by 1
			putAmmo--;
		}
	
		
		checkAmmoRefil = putAmmoRefil;
	
		if( ((n-1) -i) == 0 )                              //this is expectional case precaution
		putAmmoRefil = 1;                                  //when r = n, i.e we have to include say all 4 letters to form word the denominator becomes 0 
		else                                              //and so it shows runtime error whe nthe putAmmoRefil should actually to 1 it becomes N.D
		putAmmoRefil /= ((n-1)-i);
	    
	
	  
   }
}


void findAllPermutations(char* letters, int positionPointer, int numOfLetters, string* totalWords)
{   
     int totalNumOfPerms = findTotalNumOfPerms(numOfLetters);
    for(int r=1 ; r<=numOfLetters ; r++)
    {
	   int numOfPerms = findNumOfPermutations(numOfLetters, r);
	   
	   
		
	    string words[numOfPerms];
	    findPermutations(words, numOfLetters, r, letters);
        
        for(int i = 0 ; i<numOfPerms ; i++)
        {
        	totalWords[positionPointer] = words[i];
        	positionPointer++;
		}
	   
	}
	
	
	cout<<"\n\n\nAlas\n\n\n";
	
}
int main()
{   
    int numOfLetters, r, positionPointer = 0;
    cout<<"enter num Of letters: ";
    cin>>numOfLetters;
    char letters[numOfLetters];
    
    int totalNumOfPerms = findTotalNumOfPerms(numOfLetters);
    cout<<"total numOfPerms are "<<totalNumOfPerms<<"\n";
    string totalWords[totalNumOfPerms];
	for(int j=0 ; j<numOfLetters ; j++)
	{ 
	    cin>>letters[j];
	}
    
    bubbleSort(letters, numOfLetters);
    findAllPermutations(letters, positionPointer, numOfLetters, totalWords);
    
    for(int i =0 ; i<totalNumOfPerms ; i++)
	    {
		   cout<<i<<". "<<totalWords[i];
		   cout<<"\n";
	    }
    
	return 0;
}
