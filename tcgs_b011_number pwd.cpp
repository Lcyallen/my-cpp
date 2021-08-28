#include <iostream>
#include <cctype>
using namespace std;

int main (){
	string A, B;
	int n=0, s=0;
	for (int i=1; i<=3; i++){
		cin>>A;
		int l=A.size();
	
		for (int i=0; i<l; i++){
			if (isdigit(A[i]))
				n=n*10+(A[i]-'0');//(1)
		}
		s+=n;
		n=0;
	}
		cout<<s<<endl;
	
	return 0;
}
/*
1-1.這樣寫其實是看網站別人的寫法的，原本沒想到可以直接轉換成數值 
1-2.可以直接用A[i]-'0'轉換成數字就不用記-48了 
2.原本把這題拆成3個步驟，雖然自己在測試時可以，但網站說有一個測資沒過，仍沒找到原因 
