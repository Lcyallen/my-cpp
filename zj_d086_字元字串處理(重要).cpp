#include <iostream>
using namespace std;

int main (){
	
	string A;
	int i;
	while(cin>>A, A!="0"){	//這是看板中老師寫的，才知道原來while括號裡可以寫不只一個條件，只要用逗點分開。而且是用字串來輸入那個 0，所以要用"0" 
		int l=A.size();
		int sum=0;
		for (i=0; i<l; i++){
			if (A[i]<'A'||A[i]>'Z'&&A[i]<'a'||A[i]>'z')	//若輸入不是大小寫英文字母，就跳出迴圈 
				break; 
			if ('a'<=A[i] && A[i]<='z')					//板中師寫的是 if ('a'<=A[i])單邊條件而已，值得學習 
				sum = sum+(A[i]-'a'+1);
			else										//板中師寫的，觀念超強！ 
				sum = sum+(A[i]-'A'+1);	
			/*else
				cout<<"Fail\n";*///這裡不管怎麼改都無法成功！跳出此迴圈後還是會輸出sum，一直想不到怎麼解決
		}
		
		if (i==l) 
			cout<<sum<<endl;
		else
			cout<<"Fail\n";		/*原來要這樣寫。利用跑完迴圈後的i判斷應該輸出哪一種情況！ 
	}
		
	return 0;
}
