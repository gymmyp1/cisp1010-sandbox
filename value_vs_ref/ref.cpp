#include <iostream>

using namespace std;

void f( int& iRef );

int main()
{
	int i = 6;
	f( i );
	cout << i << endl;	

	return 0;
}

/*  & means pass by reference- don’t copy the value but make  f’s 
 * formal parameter refer to the calling function’s actual parameter*/
void f( int& iRef )
{
	iRef = -1;		
}				