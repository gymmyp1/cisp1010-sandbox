/* File: chapter6.cpp
 * Author: Cindy Arnold
 * Description: this program reads one number from a file and writes it to a file 
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() { 
   int num;
   ifstream input;
   ofstream output;

   input.open( "input.dat" );
   output.open( "output.dat" );
   input >> num;
   output << "The number is: " << num; 
   input.close();
   output.close();
   return 0;
}
