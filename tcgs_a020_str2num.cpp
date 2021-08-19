#include <iostream>
#include <cmath>
using namespace std;

int main (){
	string a;		//把輸入的數字當成字串來處理 
	cin>>a;
	int l=a.size();	//必須知道這個字串幾位數 
	
	int inv=0;		//原本把inv寫成陣列，後來發現inv應該寫成整數就好 

	for (int i=0; i<l; i++)
		inv+=(a[i]-48)*pow(10.0,i);	//把字串變成數字記得要「-48」，還有pow的底數必須寫成float，不然會出現CE！ 

	cout<<inv;
	
		
return 0;
}

/*
1.之前把輸入的數字當成整數處理，輸入和輸出都必須用陣列，總覺得有點麻煩
2.現在把輸入的數字當成字串，只要記得a[i]要減48才會變成數字！
3.pow的底數要是float，我第一次看到CE！
*/ 
