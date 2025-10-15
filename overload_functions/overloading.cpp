//illustrate overloading the function name avg
#include <iostream>

using namespace std;

//returns the average of 2 numbers n1 and n2
double avg(double n1, double n2);

//returns the average of 3 numbers n1, n2, and n3
double avg(double n1, double n2, double n3);

void f(int i);

int main()
{
	cout << "The average of 2.0, 2.5, and 3.0 is: "
         << avg(2.0,2.5,3.0) << endl;

	cout << "The average of 4.5 and 5.5 is: "
         << avg(4.5, 5.5) << endl;
         
	return 0;
}

double avg(double n1, double n2) {
    return ((n1 + n2)/2.0);
}


double avg(double n1, double n2, double n3) {
    return ((n1 + n2 + n3)/3.0);
}

