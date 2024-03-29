//Hazem Ahmed
#include "pch.h"
#include <iostream>
using namespace std;
int step = 0;
void printMove(int dNum, char *from, char *to) {
	char* clr[] = { "", "Blue", "Green", "Yellow", "Orange", "Red" };
	cout << "\t\tStep " << ++step;
	cout << ": Move " << clr[dNum] << " from " << from << " to " << to << "\n";
}

void tower(int a, char *from, char *spare, char *to) {
	if (a == 1) {
		printMove(1, from, to);
	}
	else {
		tower(a - 1, from, to, spare);
		printMove(a, from, to);
		tower(a - 1, spare, from, to);
	}
}

int main() {
	int n;
	cout << "\n\t\t*****Tower of Hanoi*****\n";
	cout << "\t\tEnter number of discs : ";
	cin >> n;
	cout << "\n\n";
	tower(n, "Source", "Spare", "Target");

	return 0;
}