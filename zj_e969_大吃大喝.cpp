#include <iostream>
using namespace std;
void F(int k, int i){
	if (k!=i%2)
		cout<<"drinks a Corn soup, ";
	else
		cout<<"eats an Apple pie, ";
}
int main (){
	int n, m, k;  cin>>n>>m>>k;
	n=n-(k%2!=0)*55-(k%2==0)*32;	//����@�����A�ݬO-55�٬O-32 
	if (n<0){						//�@�}�l�N�L�k�Y����F�誺���p�A�S���n�i�J�j��A�ҥH���B�z 
		cout<<"Wayne can't eat and drink.\n";return 0;
	}
	else{
		for (int i=0; n>=0; i++){	//��L���p�N�n�i�J�j��Q�סA�åB�`�N�����ĤG��������O"�t��"�~�ݭn�A�i�J�j��I 
			if (n>1){				//�p�G�����Ĥ@�����������٦�>1�A�N�n��X"�ɶ� "�B�Y�F����M�Ѧh�ֿ� 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he has "<<n<<" dollars.\n";//�]���C���n��X���r���P�A�Q���"���"�ӧP�_��X���G 
			}
			else if (n==1){			//�p�G�����Ĥ@�������u��1���A��X�n�`�N�S���[s 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he has 1 dollar.\n";return 0;
			}
			else if (n==0){			//�p�G�����Ĥ@��������n=0�A�n��X"�S����" 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he doesn't have money.\n";return 0;
			}
			n=n-((i+k+1)%2!=0)*55-((i+k+1)%2==0)*32;//�o�̤]�ק�ܤ[�I�`�N�o�O�q��2���}�l�����A�ҥH�ni+1�A�ӥB�C�@���n���������P�A�ҥH�n�f�tk�M%2�O�_��0�ӧP�_�I 
		}
	}
	return 0;
}
