#include <iostream>
using namespace std;

int main (){
	string A; cin>>A;
	int l=A.size();
	
	for (int i=0; i<l; i++)
		cout<<char((A[i]-40)%26+64);//(5)

//cout<<char(('A'-64-2+26)%26+64);	//(4)
return 0;
}
/*
1.cout<<int('a');可以直接印出每個字母的ASCII code
2.cout<<'a'-'b';可以轉成數值 
3.cout<<char(65)可以印成字母
4.把A所屬的ascii碼(65)先-64平移回到1,再-2往前兩格(此時離開字母了)必須+26再%26才能回到正確字母「順序」再+64回到正確ascii碼 
5.原本以為只要把每個字母-2就可以了，但沒注意到A和B兩個字母-2會「出界」，只好利用%把數字調整回來 
*/
