#include <iostream>
using namespace std;

void reverseArr(int [], int);	
int main ()
{
	int len = 0; cin >> len;
	
	int num[len] = {};
	for (int i = 0; i < len; i++)
		cin >> num[i];
	
	reverseArr(num, len);
	
	for (int i = 0; i < len; i++)
		cout << num[i] << " ";
	
	return 0;
}
void reverseArr(int a[], int len)	//要把長度傳進來，不然函數無法收到"len"變數
{
	for (int i = 0; i < len/2; i++)	//只需要做到第(len/2)個就好！無論len是奇數還是偶數
		swap(a[len-i-1], a[i]);	//交換兩個元素
}