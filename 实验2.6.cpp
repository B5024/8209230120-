#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cout << "��������������";
	cin >> a >> b;
	c = a, d = b;
	if (a > b) {
		for (;1;) {
			a = a % b;
			if (a == 0) break;
            b = b % a;
			if (b == 0) break;
		}  
	}
	else {
		for (;1;) {
			b = b % a;
			if (b == 0) break;
			a = a % b;
			if (a == 0) break;
		}
	}
	cout << "�������������Լ��Ϊ��";
	if (a == 0) e = b;
	else e = a;
	cout << e;
	cout << "������������󹫱���Ϊ��" << c * d / e << endl;
}