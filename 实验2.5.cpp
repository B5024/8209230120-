#include <iostream>
using namespace std;
int main()
{
	char a;
	int yw=0, sz=0, kg=0, qt=0;
	cout << "�������ַ�����";
	cin >> a;
	for (;1;) {

		if (a <= 'z' && a >= 'a') yw++;
		else if (a <= 'Z' && a >= 'A') yw++;
		else if (a <= '9' && a >= '0') sz++;
		else if (a == ' ') kg++;
		else qt++;
		if ((a = getchar()) == '\n') break;
	}
	cout << "\nӢ���ַ�һ���У�" << yw << "\n�����ַ�һ���У�" << sz << "\n�ո�һ���У�" << kg << "\n�����ַ�һ���У�" << qt << endl;
	return 0;
}