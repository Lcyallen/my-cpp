#include <iostream>
#include <cmath>	//有用到sqrt 
using namespace std;

int main (){
	int t; cin>>t;
	string s; getline(cin, s);//記得getline要寫兩次 ！ 
	while (t--){
		getline(cin, s);
		int sqt=sqrt(s.size());//後來乾脆把sqrt(s.size())宣告為新的整數變數之後比較好處理 
		if (sqt*sqt!=s.size())	//因為上面已宣告sqt為整數，若不是完全平方數開根號會只取整數值 
			cout<<"INVALID\n";
		else{
			for (int j=0; j<sqt; j++){	//這邊想很久也改很多次。新宣告的變數j要等i從0~s.size跑完後再+1，所以j要在外圈 
				for (int i=0; i<s.size(); i++){	//把i從0~s.size都跑過一遍 
					if (i%sqt==j)		//找出i%sqt==0；然後再==1、==2...一直到==sqt-1，所以這個變數必須新宣告 
						cout<<s[i];
				}
			}
			cout<<endl;
		}
	}
	
	return 0;
}
