#include<iostream>
using namespace std;

class Parent
{
	public:
		Parent()
		{
			cout<<"in base constructor\n";
		}
		~Parent() 	{}
	
};

class Child:public Parent
{
  public:
  Child()
  {
  	cout<<"in child constructor";
  	
	  }
	  ~Child() {}
	 	
};

int main()
{
	Child c;
	return 0;
}
