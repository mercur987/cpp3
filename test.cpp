#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	const int STD_BMI = 22; // 標準BMI
	double stdWeight;   // 標準体重
	double height;
	double weight;
	double bmi;

	cout << "身長(m)を入力してください:";
	cin >> height;
	cout << "体重(kg)を入力してください:";
	cin >> weight;
	stdWeight = STD_BMI * height * height;
	bmi = weight / height / height;
	cout << "あなたのBMIは、" << bmi << "です" << endl;
	if (bmi < 18.5) {
		cout << "低体重です" << endl;
	}
	else if (18.5 <= bmi < 25) {
		cout << "普通体重です" << endl;
	}
	else if (25 <= bmi < 30) {
		cout << "肥満(1度)です" << endl;
	}
	else if (30 <= bmi < 35) {
		cout << "肥満(2度)です" << endl;
	}
	else if (35 <= bmi < 40) {
		cout << "肥満(3度)です" << endl;
	}
	else {
		cout << "肥満(4度)です" << endl;
	}
	cout << "あなたの標準体重は、" << stdWeight << "です" << endl;
	return 0;
}
