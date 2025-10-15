#include <iostream>

using namespace std;

void f(int i);

int main()
{
	int i = 6;
	f( i );
	cout << i << endl;	//what prints out here?

	return 0;
}

/* formal parameter is call by value*/
void f( int i )
{
	i = -1;		
}				