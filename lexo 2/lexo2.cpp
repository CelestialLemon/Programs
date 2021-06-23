#include<iostream>
#include<string.h>
using namespace std;

void ArrangeLexo(string* words)
{
	
}

int main()
{
	cout<<"Enter number of inputs: ";
	int numOfWords;
	cin>>numOfWords;
	cout<<"\nEnter "<<numOfWords<<" words:\n";
	string words[numOfWords];
	
	for(int i=0; i<numOfWords ;i++)
	{
		cin>>words[i];
		
	}
	
	ArrangeLexo(words);
}
