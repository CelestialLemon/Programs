#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix
{
	int arr[1][1];
	int r, c;
	
    public:
    	Matrix(int r, int c);
    	void GetMatrixDetails();
    	void DisplayMatrix();
    	void SetDimmensions(int r, int c);
    	
};

inline Matrix::Matrix(int r, int c)
{
	arr = new int[r][c];
}

inline void GetMatrixElements::Matrix()
{
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cin>>arr[i][j];
		}
	}
}

inline void SetDimmensions::Matrix(int r1, int c1)
{
    r = r1;
	c = c1;	
}

inline void DisplayMatrix()
{
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
}



int main()
{
     int r1, r2, c1, c2; 
	 
	 cout<<"Enter dimmesions of first matrix:\n";
	 cout<<"r1: ";
	 cin>>r1;	
	 cout<<"c1: ";
	 cin>>c1;
	 
	 cout<<"Enter dimmesions of second matrix:\n";
	 cout<<"r2: ";
	 cin>>r2;	
	 cout<<"c2: ";
	 cin>>c2;
	 
	Matrix a = new Matrix(r1, c1);
	Matrix b = new Matrix(r2, c2); 
	
	system("ClS");
	
	cout<<"Enter elements of matrix 1: ";
	a.GetMatrixDetails();
	cout<<"Enter elements of matrix 2: ";
	b.GetMatrixDetails();
	
	 
	system("ClS");
	
	a.DisplayMatrix();
	cout<<"\n\n";
	b.DisplayMatrix();
	 return 0;
	 
	 
	 
}


