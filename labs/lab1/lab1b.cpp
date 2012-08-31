#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
//  commandline argument parsing

// variable declarations
char line[50];
int lineNum = 0;
int age;
char gender[20];
float d;
// while-loop reading data from stdin {
	while (cin >> age >> gender >> d) {
		lineNum++;
		cout << age  << " " << gender << " " << d << endl;
	}
//    update age stats
//    update male/female counts 
//    update distance stats

//  print results to stdout
}
