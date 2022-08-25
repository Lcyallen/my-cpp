#include <iostream>
#include <iomanip>>
using namespace std;

int main (){
	long long int h2, m2, s2, h, m, s;	//看解答才試試用long long, 否則我也不知道為何會出現負數 
	cin>>h>>m>>s;
	s2 = s%60;
	m2 = (m+s/60)%60;
	h2 = (h+(m+s/60)/60)%24;
	cout<<setw(2)<<setfill('0')<<h2<<":"<<setw(2)<<setfill('0')<<m2<<":"<<setw(2)<<setfill('0')<<s2;
}

/*
1.格式化輸出在cout<<後面寫'setw(2)'指定輸出寬度為2
2.setfill('0') 指定填充字元為0 
3.沒有寫靠右對齊！但AC，是否表示預設值勍是靠右 
