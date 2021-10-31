#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int a; cin>>a;
	
	if (a<10000)
		cout<<"|____"<<setw(4)<<setfill('_')<<a<<"|";
	
	
	else
		cout<<"|____"<<setw(4)<<setfill('0')<<a%10+(a/10%10)*10+(a/100%10)*100+(a/1000%10)*1000<<"|";
		
	return 0;
}

/*
1.在網站的討論中才看到仍然可以把輸入當成數字，分為大於10000和小於10000兩種情形
2.如果大於10000但前面數字是0必須留下來，但如果利用%卻不會把最前面的0保留。此時可以把0當成setfill('0')來處理！真的太厲害了！
3.格式化輸出是必須複習的主題！
*/ 
