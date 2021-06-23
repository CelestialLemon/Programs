#include<iostream>
using namespace std;

inline void findBalancingFactors(int x, int y, int p, int q)
{
	int i, factor1, factor2, factor3, multiplier, testDivi[3], continues =1 ;

	
	

		factor1 = p*y ;
		factor2 = q*x ;
		factor3 = x*y ;
		
	

		for(i=2 ; i<10000 ; i++)
		{
			testDivi[0] = factor1 % i ;
			testDivi[1] = factor2 % i ;
			testDivi[2] = factor3 % i ;
			
			if(testDivi[0] == 0 && testDivi[1] == 0 && testDivi[2] == 0)
			{
				factor1 = factor1 / i;
				factor2 = factor2 / i;
				factor3 = factor3 / i;
				continues = 1;
				break;
			}
		}
	
	
	
	cout<<factor1<<" "<<factor2<<" "<<factor3 ;
}
int main()
{   int x, y, p, q ;
    cin>>x;
    cin>>y;
    cin>>p;
    cin>>q;
    
    findBalancingFactors(x, y, p, q);
    return 0;
  
}
