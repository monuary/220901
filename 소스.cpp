//true�� false�� bool�� ������. �� �������� ũ�Ⱑ 1����Ʈ�� ����. �ǳ� �ƴϳ��� 2�ùۿ� ����.

#include<iostream>
using namespace std;

bool IsNatural(int num)
{
	if (num <= 0)return false;
	else return true;
}

int main()
{
	bool isNat;
	int num;
	cout << "Input number: ";
	cin >> num;

	isNat = IsNatural(num);//bool���� ������ bool���� �Լ��� �޴´�. int���� char���� void���� ����.
	if (isNat)cout << "Natural number" << endl;
	else cout << "Unnatural number" << endl;

	return 0;
}