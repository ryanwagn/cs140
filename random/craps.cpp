#include <cstdlib>
#include <iostream>
using namespace std;

class craps { 
	public:
		craps();
		~craps();
		void showstats();
		void rolldice(bool do_show=false);

	private:
		int nrolls;
		int fcount[13];
		int rnumgen();
};

craps::craps() {
	nrolls = 0;
	for (int i=0; i<13; i++)
		fcount[i] = 0;
}
craps::~craps() {}

void craps::rolldice(bool do_show) {
	int r1 = rnumgen();
	int r2 = rnumgen();
	int sum = r1 + r2;
	if (do_show)
		cout << r1 << " + " << r2 << " = " << sum << "\n";

	nrolls++;
	fcount[sum]++;
}

void craps::showstats() {
	cout << "\nGame statistics:\n";
	
	for (int i=2; i<13; i++) {
		cout << i << " "

int craps::rnumgen() {
	static bool do_init = true;

	if (do_init == true) {
		time_t seedvalue = time(NULL);
		srand(seedvalue);
		do_init = false;
	}
	return rand() % 6 + 1;
}



int main(int argc, char *argv[]) {

	int N = 5;
	if (argc == 2)
		N = atoi(argv[1]);
	craps G;

	for (int i=0; i<N; i++) 
		G.rolldice(true);
}

	
			
