/*https://zerojudge.tw/ShowProblem?problemid=h034�D�ءA
�Q�D�Ԥ@�}�l�s�J�}�Ca[i][j]�ɴN"����"�A�M��A�̥H�e���覡��X�C
*/
#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	int l=0, mx_l=0;
	char a[200][200]={0};//�n�`�N�]���s�J�o�ӷs�}�C�N"����"�A�ҥH��B�C�Ʒ|��աI�@�}�lWA�N�O���b�o�̡C 
	for (int j=0; j<n; j++){
		string s; cin>>s;	
		l=s.size();		
		mx_l=max(mx_l, l);
		for (int i=0; i<l; i++){
			a[i][j]=s[i];
		}
	}
	for (int i=0; i<mx_l; i++){
		for (int j=0; j<n; j++){
			if (a[i][j]>='A'&&a[i][j]<='Z')
				cout<<a[i][j];
		}
	}
	
return 0;
}
