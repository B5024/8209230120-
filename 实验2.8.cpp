#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float a, x, X;
	cout << "������aΪ��" << endl;
	cin >> a;
	for (x = a;1;) 
	{

		X = 0.5 * (x + a / x);
		if (X - x<1.0e-5 && X - x>-1.0e-5)break;
		x = X;
	}
	cout << "a��ƽ����Ϊ��" << X << endl;
	return 0;
}
//��ʹa��Ϊ������
//��forѭ����Ϊ:
//if (a != 0) {
//	if (a > 0) {
//		for (x = a;1;)
//		{
//			X = 0.5 * (x + a / x);
//			if (X - x<1.0e-5 && X - x>-1.0e-5)break;
//			x = X;
//		}
//		cout << "a��ƽ����Ϊ��" << X << endl;
//	}
//	else {
//		for (a = -a, x = a;1;)
//		{
//			X = 0.5 * (x + a / x);
//			if (X - x<1.0e-5 && X - x>-1.0e-5)break;
//			x = X;
//		}cout << "a��ƽ����Ϊ��" << X << "i" << endl;
//	}
//}
//else cout << "a��ƽ����Ϊ��0";