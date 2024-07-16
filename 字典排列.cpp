#include <iostream>
#include <algorithm>   //要用next_permutation()
using namespace std;

int main ()
{
	int n = 0; cin >> n;
	
	int a[n] = {};
	for (int i = 0; i < n; i++)  //把1~n放進a[]
		a[i] = i+1;
	
	do{
		for (int i = 0; i < n; i++)  //要搭配do{}while()的寫法
		cout << a[i] << " ";
	cout << endl;
	}while (next_permutation(a, a+n)); //先字典排列，再確認若不=0，會再回到do迴圈
	
return 0;
}
