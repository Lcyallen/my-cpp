#include <iostream>
using namespace std;

void printArray0(int [], int);
int main ()
{
	int num[5] = {1, 2, 3, 4, 5};
	printArray0(num, 5);	//傳進去的第一個arugument只需要寫"num"->陣列名，不用再加[]

return 0;
}
void printArray0(int a[], int len)	//需要第二個argument-"len"是因為fun裡面需要用到len
{
		cout << a[0] << endl << a[1] << endl << a[2] << endl << a[3] << endl << a[4];//所有陣列的元素都傳進來了
}