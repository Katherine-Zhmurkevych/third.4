// Lab_03_4.cpp
// < ��������� �������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 8
#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;	cout << "R = "; cin >> R;	if ((x * x + y * y <= R && x >= 0) ||		(y>=-x  && y<=R && x<=0) ||		(y>=x && y>=-R && x<=0))		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}