/*
   This program gets input and output file names from the user,
   reads numbers from the input file and write the numbers formatted
   as dollar amounts to the output file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void writeNum( ofstream&, double );

int main()
{
   double num;
   ifstream input;
   ofstream output;
   string filename;

    // get input file name, open it
    cout << "Enter input file name: ";
    cin >> filename;
    input.open( filename );

    // input file doesn't exists, end program
    if ( input.fail() )
    {
        cout << "Input file " << filename << " open failed.\n";
        return 0;
    }

    // if existing input file empty, end program
    char c;
    input.get( c );
    if ( input.eof() ) {
        cout << "Input file " << filename << " is empty.\n";
        return 0;
    }

    // otherwise, input file exists and is non-empty so put back char read
    // to check empty and read/write to output file until eof
    input.putback( c );
    cout << "Enter output file name: ";
    cin >> filename;
    output.open( filename );

    // read numbers while sucessfully reading a number write them formatted to output file
    // the >> operator returns false when a read fails (including end-of-file)
    while (  input >> num )
    {
        writeNum( output, num );
    }

    // close files and we're done
    input.close( );
    output.close( );
    return 0;
}

/* writeNum: writes one number to a file in dollar format
   Parameters:
      out: output file
      n: number to write 
   Pre-condition: output file is already open
   Returns: nothing
*/
void writeNum( ofstream& out, double n )
{
   out.precision( 2 );
   out.setf( ios::fixed );
   out.setf( ios::showpoint );
   out << "$" << setw(7) << right << n << "\n";
}   