#include<iostream>
#include<string.h>
using namespace std;

float findLexoValue(string word)
{   char wordArray[word.length()];
    for(int i=0; i<word.length() ; i++)
    {
       wordArray[i] = word[i]; 	
	}
	strupr(wordArray);
	
	float value = 0, multiplier =1;
	
	for(int i=0 ; i<word.length() ; i++)
	{
		value += multiplier*wordArray[i];
		multiplier /= 100;
	}
	return value;
	
	
}

int main()
{
	cout<<"Enter a string: ";
	string input;
	cin>>input;
	
	float value = findLexoValue(input);
	printf("%.56f",value);
	return 0;
}
