#include <iostream>
#include <fstream>
using namespace std;


int main (int argc, char *argv[]) {
	fstream fio;
	char output[100];
	int x;
	cout << argv[1];
	fio.open(argv[1]);
	fio >> output;
	cout << output;
}

