#include <iostream>
using namespace std;

int main (){
	
	string A;
	int i;
	while(cin>>A){
		int l=A.size();
		int sum=0;

		if (A=="0")	//�r��p��B�z"0����"�A�i�H����Ӧr��=="0" 
			return 0;
	
		for (i=0; i<l; i++){
			if ('a'<=A[i] && A[i]<='z')	//�ڲߺD������ҡA�u���p�g�r���ɤ~�p��sum 
				sum = sum+(A[i]-'a'+1);
		
			else if ('A'<=A[i] && A[i]<='Z')//�u���j�g�r���ɤ~�p��sum 
				sum = sum+(A[i]-'A'+1);	
		
			else
				break;				//��L�u�n�D�r�������X�j�� 
		}
		
		if (i<l)
			cout<<"Fail\n";
		else
			cout<<sum<<endl;		
	}
		
	return 0;
}
