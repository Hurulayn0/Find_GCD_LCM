#include <iostream>
using namespace std;
int main() {
	short int x, y, EBOB=1 , EKOK, smallNumber, i;
	cout << "enter two numbers:";
	cin >> x >> y;
	if (x < y) 
		smallNumber = x;
	else
		smallNumber = y;
	for (i = smallNumber; i > 1; i--) {
		if( (x % i == 0) && (y % i == 0)) {
			EBOB = i;
			break;  
		}
	}
	if (EBOB != 1) {
		EKOK = EBOB * (x / EBOB) * (y / EBOB);
		cout << "Greatest common divisior is " << EBOB << "\n";
	}
	else
		EKOK = x * y;
		cout << "Greatest common divisior is 1 \n";
	cout << "Least common multiple is " << EKOK << "\n";
	return 0;
}