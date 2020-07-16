#include <iostream>

void showSwitch() {
	using namespace std;
	int num;
	cout << "please imput the number:\nnum = ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "num = " << num << endl;
		printf("name 1\n");
	case 0:
		cout << "num = " << num << endl;
		printf("name 0\n");
	default:
		printf("print out of range\n");
		break;
	}
}
int main() {
	showSwitch();
	return 0;
}