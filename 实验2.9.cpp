#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float each,all=0,day=0;
	for (each = 2.0;all < 100;each = 2 * each,++day)
	{
		all = all + each;
	}
	cout << "ƽ��ÿ�컨" << 0.8 * all / day << "Ԫ" << endl;
	return 0;
}