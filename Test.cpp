#include <iostream>

using namespace std;

bool isEven(int value) { return value % 2 == 0; }

bool isEven1(int value) {
	int result;
	result = value % 2;
	return result == 0;
}

bool isEven2(int value) {
	int result;
	bool isEven;
	result = value % 2;
	isEven = result == 0;

	return isEven;
}

void isEven3(bool& isEven, int value) {
	isEven = value % 2 == 0;
}

void isEven4(int value) {
	bool res = value % 2 ? true : false;
	return res;
}

int main()
{
	bool isEven = false;
	isEven3(isEven, 7);
	if (isEven) {
		cout << "1111111111111111111111";
	}
	else {
		cout << "0000000000000000000000";
	}
}