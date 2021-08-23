#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int a, b; cin>>a>>b;
	
	if (b+30>=60)
		cout<<setw(2)<<setfill('0')<<(a+3)%24<<":"<<setw(2)<<setfill('0')<<(b-30);
	else cout<<setw(2)<<setfill('0')<<(a+2)%24<<":"<<setw(2)<<setfill('0')<<(b+30);
	
return 0;
}
/*
1.先讓輸出結果正確，如果分鐘>=60就要進位到小時，則小時變成+3
2.格式化輸出忘記了。要設定輸出位數是setw()，每個要輸出的結果前面就要加
3.空格以什麼符號填滿要用setfill('')-->要多複習
*/ 
