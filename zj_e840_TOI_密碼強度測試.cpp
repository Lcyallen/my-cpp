#include <iostream>
using namespace std;

int main (){
	string p; cin>>p;	//原本在思考是否需要寫成陣列，後來想試試看直接宣告為string 
	int s=0, eng=0, num=0, j=0;
	s+=p.size()*3;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z') eng++;//一陣子沒寫，忘了a~z與A~Z中間沒有連續，而且是先小寫再大寫 
	}
	s+=eng*3;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='0'&&p[i]<='9') num++;
	}
	s+=num*2;
	if (p.size()>7&&eng!=0&&num!=0) s+=10;
	else s-=5;
	if (p.size()==eng) s-=eng;
	if (p.size()==num) s-=num;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='0'&&p[i]<='9'&&p[i+1]>='0'&&p[i+1]<='9')	//這個條件想很久，原本還想要寫一個新陣列，後來發現只要逐一檢查每個數字的下一個字元是否也是數字即可 
			j++;
	}
	s-=j*2;
	cout<<s;
}
