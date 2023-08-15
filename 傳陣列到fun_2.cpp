#include <iostream>
using namespace std;

void arrAdd(int [], int, int);	//宣告fun名稱(傳入的型態)，第一個傳入整數陣列，第二個整數，第三個整數
int main ()
{
	int num[8] = {1, 2, 3, 4, 5};
	arrAdd(num, 1, 4);	//傳入陣列名，要加的第一數index，要加的第二數index

return 0;
}
void arrAdd(int arr[], int a, int b)	//參數型態要記得寫！
{
	cout << arr[a] + arr[b];	//得到(2+5=)7
}