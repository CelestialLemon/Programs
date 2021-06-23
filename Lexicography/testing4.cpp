#include<iostream>
#include<string.h>
using namespace std;

string findAndDelete(string s1, string s2)
{
	int strLen1 = s1.length();
	int strLen2 = s2.length();
	
	for(int i=0 ; i<strLen1 ; i++)
	{
		for(int j=0 ; j<strLen2 ; j++)
		{
			if(s1[i] == s2[j])
			{ 
				for(int k=j ; k<(strLen2 - 1); k++)
				{
					s2[k] = s2[k+1];
				}
				strLen2--;
			}
		}
	}
    int diff = s2.length() - s1.length();
    char remainingLetters[diff];
    for(int i=0 ; i<diff ; i++)
	{
		remainingLetters[i] = s2[i];
	}
	
	for(int i=0 ; i<diff ; i++)
	{
		cout<<remainingLetters[i];
	}
	return  s2;
	
}


int main()
{

	
	string s1, s2, s3;
	cin>>s1;
	cin>>s2;
	s3 = findAndDelete(s1, s2);
	
	


	
	

	

}
