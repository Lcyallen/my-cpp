#include <iostream>
using namespace std;

void reverseArr(int [], int[], int);	//初始陣列, 結果陣列, 陣列長度
int main ()
{
	int len = 0; cin >> len;
	int before[len] = {};
	int after[len] = {};	//結果陣列先宣告為空白
	for (int i = 0; i < len; i++)
		cin >> before[i];
	
	reverseArr(before, after, len);	//很重要！傳入的argument只需要寫陣列名，不用加[]
	
	for (int i = 0; i < len; i++)
		cout << after[i] << " ";
	
	return 0;
}
void reverseArr(int a[], int b[], int len)	//要把長度傳進來，不然函數無法收到"len"變數
{
	for (int i = 0; i < len; i++)
		b[len-i-1] = a[i];
}