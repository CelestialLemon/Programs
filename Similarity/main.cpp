#include<iostream>
#include "similarityHeader.h"
using namespace std;
int main()
{
	char input1[20], input2[20];
	cout<<"Enter First String: ";
	cin>>input1;
	cout<<"Enter Second String: ";
	cin>>input2;
	
	int similarityPoints1 , similarityPoints2 ;
	similarityPoints1 = findSimilarity(input1, input2) ;                   //determine similarity of first string with second
	similarityPoints2 = findSimilarity(input2, input1)  ;                  //determine similarity of second string with first
	int similarityPoints = ( similarityPoints1 + similarityPoints2 ) / 2 ;   //average both values
	cout<<"\n1: "<<similarityPoints1;
	cout<<"\n2: "<<similarityPoints2;
	
		cout<<"\nFinal Points of similarity: "<<similarityPoints;         //display output
	

}
