#include<iostream>
using namespace std;

int main()
{
	char s[26];
	for(int i=91 ; i<123 ; i += 2)
	{
		s[i-97] = i;
	}
	
	for(int i=0; i<26 ; i++)
	{
		cout<<s[i];
	}
	return 0;
}
