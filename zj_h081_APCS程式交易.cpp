/*https://zerojudge.tw/ShowProblem?problemid=h081
�Ĥ@����APCS����@�D�C��ɷQ���X�ӡA�]�ܺ�i�I����]�Q������D���ѨM�C
����(2022.1.22)�ש�ѥX�ӤF�I */
#include <iostream>
using namespace std;

int main (){
	int n, d; cin>>n>>d;
	int a[n]={}, i=0;//i�O�ˬd����@���ܼơA�ҥH�����g�bfor-loop�~�� 
	for (int i=0; i<n; i++)
		cin>>a[i];
	int buy[n]={}, j=0;//�R�i���ڤ@�}�l�g���}�C�Aindex=j�����g�b�~�� 
	int sell[n]={}, k=0;//�汼���ڤ@�}�l�]�g���}�C�Aindex=k�����g�b�~�� 
	int income=0;
	while(i<n){
		buy[j]=a[i];//buy[0]=a[0]
		for (i=i+1; i<n; i++){	//�C�@���ˬd�O�qi=i+1�}�l�I�o�O��}�I�I 
			if (a[i]-buy[j]>=d){
				sell[k]=a[i]; //cout<<"sell = "<<sell[k]<<endl;
				income+=sell[k]-buy[j]; //cout<<"income = "<<income<<endl;
				j++; break;
			}
		}
		//cout<<"i = "<<i<<" j ="<<j<<endl;
		for (i=i+1; i<n; i++){	//�C�@���ˬd�O�qi=i+1�}�l�I�o�O��}�I�I
			if (sell[k]-a[i]>=d){
				buy[j]=a[i]; //cout<<"buy = "<<buy[j]<<" i = "<<i;
				k++; break;
			}
		}
	}
	cout<<income;
	return 0;
}
