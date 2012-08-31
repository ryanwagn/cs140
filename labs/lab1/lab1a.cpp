#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
	//  set default value for N
	int N=10;

	int sum = 0;
	
	//  commandline argument update
	if ( argc > 1 )
		N = atoi(argv[1]);

	//  error checking on N
	if ( N < 1 || N > 64000 ) {
		cout << "Enter a number between 1 and 64000 (inclusive)" << endl;
		return 1;
	}



	// for-loop computing sum
	for (int i = 1; i <= N; i++) { 
		sum += i;
	}
//  print result to stdout
	cout << "1+2+...+" << N << " = " << sum << endl;
}
