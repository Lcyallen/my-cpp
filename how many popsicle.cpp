#include <iostream>
using namespace std;

int main (){
	
	int n, total;
	cin>>n;
	total=n;

	do
	{
		total=total+n/5;
		n=(n/5+n%5);
	}
		while(n>4);

	cout<<total;
	
	return 0;
}

/*
1.想不出迴圈應該怎麼寫！很沮喪！但我還是不想看答案...2021.8.2
2.今天再打開檔案調整成do{}while,竟然一次就過了！很開心2021.8.17
*/ 
