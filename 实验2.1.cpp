#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char h;
	int  j;
	cout << "������Сд��ĸ��" << endl;
	cin >> h;
	if(h>=97&&h<=122){
		j = int(h) - 32;
		cout << "���дΪ��" << char(j) << endl;
	}
	else {
		cout << "������Ĳ���Сд��ĸ" << endl;
	}
	
	return 0;
}
