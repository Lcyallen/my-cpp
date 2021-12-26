#include <iostream>
using namespace std;

int main (){

	int n, k, total;
	while(cin>>n>>k){
		total=n;		//總和於一開始應為n
		while (n>=k){	//當n>=k才需要進入迴圈討論 
			total+=n/k;	//每次都把n/k加入總和 
			n=n/k+n%k;	//這邊易錯！應該把n/k(可以換新的支數)與n%k(不能換的餘數)相加才是下一次的n 
		}
		cout<<total<<endl;
	}
	
	return 0;
}
