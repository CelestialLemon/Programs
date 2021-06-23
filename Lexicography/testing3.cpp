#include<iostream>
#include<string.h>
using namespace std;

int searchFor(char searchUnit, char* Letters)
{
	int stringLength = 4;
	for(int i=0 ; i<4 ; i++)
	{
		if(searchUnit == Letters[i])
		{
			return i;
		}
	}
}

int deletePosition(int position , char* Letters, int strLen)
{
	for(int i= position; i<strLen-1 ; i++)
	
	{
		Letters[i] = Letters[i+1];
	}
	return (strLen-1);
}
void findMissingLetters(string s1, char* letters, char* remainingLetters, int strLen)
{
	char Letters[4];
	strcpy(Letters, letters);
    int position;
	
	int stringLength = 2;
	for(int i=0 ; i<strLen ; i++)
	{
		position = searchFor(s1[i], Letters);
		strLen = deletePosition(position, Letters, strLen);
	}
	

	int numOfElementsToCopy = 4 - strLen ;
	for(int i=0 ; i<numOfElementsToCopy ; i++)
	{
		remainingLetters[i] = Letters[i];
	}
}
int main()
{   char letters[4] = {'s', 'k', 'd', 'f'};
    int numOfLetters = 4;
	string s1 = "sk";
	char remainingLetters[4 - 2];
	findMissingLetters(s1, letters, remainingLetters, 2);
	cout<<remainingLetters;
	return 0;
}
