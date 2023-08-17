#include <iostream>
using namespace std;

void reverseArr(int [], int [], int);

int main ()
{
	int len = 0; cin >> len;
	int a[len] = {};
	for (int i = 0; i < len; i++)
		cin >> a[i];
	int b[len] = {};
	
	reverseArr(a, b, len);	//把原始陣列a和空白陣列b都傳入函數
	
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";	//a[]沒有被更改
	cout << endl;
	for (int i = 0; i < len; i++)
		cout << b[i] << " ";	//b[]被更改
	
	return 0;
}

void reverseArr(int before[], int after[], int len)
{
	for (int i = 0; i < len ; i++)
	{
		after[len-1-i] = before[i];	//函數運行時會更改b[]的元素值，使b[]不再空白！
	}	
}