// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	int sum = 0;
	cout << "請輸入一個正整數n";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0)sum += i;
	}
	cout << "1~" << n << "之間所有偶數的和為:" << sum << endl;
}
