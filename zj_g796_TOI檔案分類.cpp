#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	string s;
	int a[n]={}, i=0;
	for (int i=0; i<n; i++){	//一開始寫while(n--)一直錯誤，後來改成for才可。應該要找出原因。 
		cin>>s; 
		a[i]=(s[3]-'0')*10+(s[4]-'0');//把字串s的"字元"轉成"二位數"，並存入a[i] 
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[j]<a[i])
				swap(a[i],a[j]);//把a[i]由小到大排列 
		}
	}
	int b[n]={}, j=0;	//b[n]用來存不重複的a[i]。j是b[i]的字數所以必須寫在外面 
	int c[n+1]={}; c[0]={-1};//c[n+1]用來存每個元素在"第幾個位置"時跟右邊元素不同。c[0]必須為-1，這樣之後在減-1時才能得到第一個元素的正確個數 
	for (int i=0; i<n; i++){
		if (a[i]!=a[i+1]){	//若第i個元素與第i+1個不同時，存入b[j] 
			b[j]=a[i];
			c[j+1]= i; j++;//第i個開始不同也要存i這個資訊 
		}
	}
	for (int i=0; i<j; i++)
		cout<<b[i]<<" "<<c[i+1]-c[i]<<endl;//有幾個元素剛好可以用c[]的i+1項減第i項 
	
return 0;
}
