#include <iostream>
using namespace std;

int main (){
	
	string A;
	int i;
	while(cin>>A){
		int l=A.size();
		int sum=0;

		if (A=="0")	//字串如何處理"0尾版"，可以讓整個字串=="0" 
			return 0;
	
		for (i=0; i<l; i++){
			if ('a'<=A[i] && A[i]<='z')	//我習慣正面思考，只有小寫字母時才計算sum 
				sum = sum+(A[i]-'a'+1);
		
			else if ('A'<=A[i] && A[i]<='Z')//只有大寫字母時才計算sum 
				sum = sum+(A[i]-'A'+1);	
		
			else
				break;				//其他只要非字母都跳出迴圈 
		}
		
		if (i<l)
			cout<<"Fail\n";
		else
			cout<<sum<<endl;		
	}
		
	return 0;
}
