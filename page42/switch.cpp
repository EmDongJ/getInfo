#include <iostream>

void showSwitch() {
	using namespace std;
	int num;
	cout << "please imput the number:\nnum = ";
	cin >> num;
	switch (num)
	{
	case 1:
	{
		cout << "> -- received num = " << num << endl;
		printf("name 1\n");
		break;
	}
	case 0:
	{
		cout << "> -- received num = " << num << endl;
		printf("name 0\n");
		break;
	}
	default:
		printf("print out of range\n");
		break;
	}
}
int main() {
	showSwitch();
	return 0;
}