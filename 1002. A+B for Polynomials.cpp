#include <iostream>
#include <cstring>
#include <iomanip>

#define MAX_LENGTH 2000

using namespace std;

int main() {
	double polynomials[MAX_LENGTH];
	memset(polynomials, 0, (MAX_LENGTH + 1) * 8);
	int num, an;
	int total = 0;
	double n;
	cin >> num;
	for (int i = 0 ; i < num; i++) {
		cin >> an >> n;
		polynomials[an] = n;
	}
	cin >> num;
	for (int i = 0; i < num ; i++) {
		cin >> an >> n;
		polynomials[an] += n;
	}
	for (int i = 0 ; i < MAX_LENGTH ; i ++) {
		if (polynomials[i] != 0) total++;
	}
	cout << total;
	for (int i = MAX_LENGTH - 1; i >= 0; i--) {
		if (polynomials[i] != 0) cout << " " << i << " " << setiosflags(ios::fixed) << setprecision(1) << polynomials[i];
	}
	cout << endl;
	return 0;
}