#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int h, m;
	cin>>h>>m;
	h = (h+2+(m+30)/60)%24;	//h先用到輸入的m,所以要先寫, 後寫時m已更改 
	m = (m+30)%60;
	cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m;	//練習格式化輸出 
}
