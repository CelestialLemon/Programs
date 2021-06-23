#include<iostream>
using namespace std;

int findFactorial (int n)
{    int result = 1;
	for(int i=1 ; i<=n ;i++)
	{
		result *= i;
	}
	return result;
}

int findNumOfCombinations(int n, int r)
{
   int result, nFactorial, rFactorial, nrFactorial;
   nFactorial = findFactorial(n);
   rFactorial = findFactorial(r);
   nrFactorial = findFactorial(n-r);
   
   result = ( nFactorial / (rFactorial * nrFactorial) );
   return result; 	
}

int main()
{
	string input;
	int numOfLetters;
	
	cout<<"Enter num of letters : ";
	cin>>numOfLetters;\
	cout<<"Enter letters in a string: ";
	cin>>input;
	
	if(numOfLetters != input.length())
	{
		cout<<"num of letters invalid ";
		return 0;
	}
	
	int numOfCombos = findNumOfCombinations(numOfLetters , 2);
	printf("\nThe num of combos possible are %d", numOfCombos);
	string combinations[numOfCombos];
	
	
	return 0;
}
