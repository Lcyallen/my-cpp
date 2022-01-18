#include <iostream>
#include <cstring>	//下面會用到計算char的長度 
using namespace std;

int main (){
	char n1[300], n2[300]={}, x;//宣告為char的好處是可以初始化記憶體大小[300]，而不是宣告為string 
	cin>>n1; cin>>x;
	int j=0;
	for (int i=0; i<strlen(n1); i++){//計算char的長度的寫法！要記！ 
		if (n1[i]==x) continue;	//這是學解答的寫法 
		n2[j]=n1[i]; j++;//j是n2的字元數 
	}
	//cout<<n2<<" "<<strlen(n2)<<" "<<j;
	for (int i=0; i<j/2; i++){	//只需檢查到n2長度的一半就好 
		if (n2[i]!=n2[j-i-1]){
			cout<<"No\n"; return 0;
		}
	}
	cout<<"Yes\n";
	
	return 0;
}
