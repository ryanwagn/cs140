#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	//  commandline argument parsing
	int N;
	bool doall = true;
	if ( argc > 1 ) {
		N = atoi(argv[1]);
		doall = false;
		if ( N < 1 ) {
			cout << "Please enter an integer greater than 0. \n";
			return -1;
		}
	}
	// variable declarations
	int lineNum = 0;
	int age, agemax=0, agemin=0, totala=0;
	char gender[20];
	int male=0, female=0;
	float d, dmax=0, dmin=0, totald=0;
	float ageavg, davg;
	// while-loop reading data from stdin {
	while (cin >> age >> gender >> d && (lineNum < N || doall)) {
		lineNum++;
		//    update age stats
		totala += age;
		if ( age > agemax ) 
			agemax = age;
		if (age < agemin || agemin == 0 )
			agemin = age;
		//    update male/female counts 
		if ( strcmp(gender,"male") == 0 )
			male++;
		else
			female++;
		//    update distance stats
		totald += d;
		if ( d > dmax )
			dmax = d;
		if (d < dmin || dmin == 0 )
			dmin = d;
	}
	// calculate averages
	ageavg = float(totala)/lineNum;
	davg = totald/lineNum;

	//  print results to stdout
	cout << "\nRead " << lineNum << " records from stdin\n\n";
	cout << "Student age:\n\tmin = " << agemin << " years\n"
		 << "\tmax = " << agemax << " years\n"
		 << "\tavg = " << ageavg << " years\n\n";
	cout << "Student sex:\n\tmale   = " << male
		 << "\n\tfemale = " << female;
	cout << "\n\nHome to UT distance:\n"
		 << "\tmin = " << dmin << " miles\n"
		 << "\tmax = " << dmax << " miles\n"
		 << "\tavg = " << davg << " miles\n\n";
}
