#include<iostream>
using namespace std;

inline string deletePosition(string input, int position)
{
	for(int i=position ; i< ( input.length() - 2) ; i++)
	{
		input[i] = input[i+1];
	}
	
	return input;
}

inline bool findIfPalindrome(string input)
{
	int len = input.length();
    input = deletePosition(input, 2);
    input = deletePosition(input, 4);
    cout<<"the string is "<<input;
    return true;
	 
}

int main()
{   string input;
    cin>>input;
    if(findIfPalindrome(input))
    cout<<"Yes";
    else
    cout<<"No";
	return 0;
}
