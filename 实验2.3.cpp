#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c;
	cout << "�����������߳�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b) {
		if (b + c > a) {
			cout << "�������ܳ�Ϊ" << a + b + c << endl;
			if (b == a || b == c) {
				cout << "���ǵ���������" << endl;
			}
			else if (a == c) {
				cout << "���ǵ���������" << endl;
			}
			else cout << "�ⲻ�ǵ���������" << endl;
		}
		else cout << "���޷�����������" << endl;

	}
	else cout << "���޷�����������" << endl;
	return 0;
}
