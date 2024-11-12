// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}
int main(

)
{
	int num = 1;
	int sum = 0;

	cout << "請輸入一個正整數";
	cin >> num;

	//非遞迴計算n!
	int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;

	}
	cout << "非遞迴版本:" << num << "! = " << result << endl;

	result = factorial(num);
	cout <<"遞迴版本:" << num << "! = " << result << endl;
}
