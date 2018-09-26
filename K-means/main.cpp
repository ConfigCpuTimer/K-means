#include "Group.h"

#include <iostream>


int main() {
	using namespace std;

	vector<Sample> data;

	Sample X1(0, 0);
	Sample X2(3, 8);
	Sample X3(2, 2);
	Sample X4(1, 1);
	Sample X5(5, 3);
	Sample X6(4, 8);
	Sample X7(6, 3);
	Sample X8(5, 4);
	Sample X9(6, 4);
	Sample X10(7, 5);

	data.push_back(X1);
	data.push_back(X2);
	data.push_back(X3);
	data.push_back(X4);
	data.push_back(X5);
	data.push_back(X6);
	data.push_back(X7);
	data.push_back(X8);
	data.push_back(X9);
	data.push_back(X10);

	return 0;
}