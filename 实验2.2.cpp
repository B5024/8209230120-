#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "������x��ֵ��" << endl;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x > 0 && x < 1) {
			y = 3.0 - (2.0 * x);
		}
		else if (x >= 1 && x < 5) {
			y = 2.0 / (4.0 * x) + 1;
		}
		else if (x >= 5 && x < 10) {
			y = x * x;
		}
		cout << "����ֵyΪ��" << y << endl;
	}
	else
		cout << "x�����ں����Ķ������ڡ�" << endl;
	return 0;
}
