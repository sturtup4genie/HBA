#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief ����� ����� � ���������.
*/
void main()
{
	setlocale(LC_ALL, "ru");
	/**
	* \brief
	* \ a - ����������, ������� ��� ������ � ��������� ������ ������� ��������.
	* \ b - ����������, ������� ��� ������ � ��������� ������ ������� ��������.
	**/
	double a, b;
	cout << "������� ������ �����" << endl;
	cin >> a;

	if (a <= 0)
	{
		/**
		* \brief �������� �� ������������ ����� .
		**/
		cout << "����� ������ ���� ������ ����" << endl;
		cout << "������� ������ �����" << endl;
		cin >> a;
	}

	cout << "������� ������ �����" << endl;
	cin >> b;

	if (b <= 0)
	{
		/**
		* \brief �������� �� ������������ �����.
		**/
		cout << "����� ������ ���� ������ ����" << endl;
		cout << "������� ������ �����" << endl;
		cin >> b;
	}
	/**
	* \brief
	* \ c - ����������, ������� ��� ������ � ��������� ������ ������� ��������.
	* \ ������� ��� ���������� �������� ������.
	**/
	double c = (sqrt(pow(a, 2) + pow(b, 2)));
	cout << "������� ����� " << a*0.5*b << endl;
	cout << "�������� ����� " << a + b + c << endl;
}