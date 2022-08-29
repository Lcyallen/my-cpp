#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int t; cin>>t;
	string website[10] = {};	//1.
	int score[10] = {};

	for (int j=1; j<=t; j++){
		for (int i=0; i<10; i++)
			cin>>website[i]>>score[i];	//3.
		
		cout<<"Case #"<<j<<":"<<endl;

		for (int i=0; i<10; i++){
			if (score[i]==*max_element(score,score+10))
				cout<<website[i]<<endl;
		}
	}
}
/*
1.試了很久,一開始把一行輸入設為2維str[10][2],把str[i][1]當成str再轉成int, 但一直無法成功
2.str a[i] 無法透過-'0'轉成int, 是要將每個str字元轉數字才可以這樣寫
3.後來試宣告不同型態,string a[10]和int b[10], 再透過cin>>a[10]>>b[10]可獲得int b[10] 
