//true와 false는 bool형 데이터. 각 데이터의 크기가 1바이트인 이유. 옳냐 아니냐의 2택밖에 없다.

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

	isNat = IsNatural(num);//bool형의 변수로 bool형의 함수를 받는다. int형도 char형도 void형도 같다.
	if (isNat)cout << "Natural number" << endl;
	else cout << "Unnatural number" << endl;

	return 0;
}