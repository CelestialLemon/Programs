#include<iostream>
using namespace std;
int main()
{
	char input1[20], input2[20];
	cout<<"Enter First String: ";
	cin>>input1;
	cout<<"Enter Second String: ";
	cin>>input2;
	
	int similarityPoints = findSimilarity(input1, input2) ;
	cout<<"Points of similarity: "<<similarityPoints;
	

}
