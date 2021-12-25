#include <iostream>
using namespace std;

int main (){
	
	string a, b; cin>>a;
	int j=0;
	for (int i=0; i<a.size(); i++){
		if (a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
			b[j]=a[i]; j++;
		}			
	}
	int k=j;	//k是字串b的字數 
	for (int i=0; i<k; i++){	//把字串b的大寫字母轉換成小寫字母 
		if (b[i]>='A'&&b[i]<='Z')
			b[i]+=('a'-'A');
	}
	for (int i=0; i<k; i++){			//把字串由小到大排序 
		for (int j=i+1; j<k; j++){
			if (b[j]<b[i])
				swap(b[j], b[i]);		
		}			
	}
	for (int i=0; i<k; i++)			//輸出排序好的字串 
		cout<<b[i];
	cout<<endl;
	int l=0, c[k];				//新創一個整數陣列 
	for (int i=1; i<k; i++){	//標示出與左邊字母不同的是第幾個位置 
		if(b[i]!=b[i-1]){		//把第幾位跟左邊字母不同的數字放入新陣列 
			c[l]=i; l++;
		}
	}
	c[l]=k;
	int m=l+1;cout<<m<<endl;					//新陣列的位數 
	for (int i=0; i<m; i++)
		cout<<c[i]<<" ";
	cout<<endl;
	int n=0;
	if (c[0]%2)  n++;
	for (int i=1; i<m; i++){
		if ((c[i]-c[i-1])%2) n++;
		if (n==2) {
			cout<<"no..."; return 0;
		}
	}
	if (n<2) cout<<"yes !";
	
	return 0;
}

/*
1.自己在測試時可以，送出後出現RE(Runtime Error): 表示執行時錯誤，通常為記憶體配置錯誤 如：使用了超過陣列大小的位置 
2.雖然如此但花了好多天把可行的方法寫出來，還是可以感受到自己的進步
3.如何把非字母的字元剔除並重新排成新字串
4.如何把字母轉換成全部大(小)寫
5.如何把字母由小到大排序
6.如何尋找跟別人不同的字母位置
*/ 
