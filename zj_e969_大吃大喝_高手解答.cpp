#include <iostream>
using namespace std;

int main (){
	int n, m, k, a[2]={32, 55}, i=0;	//�ǰ���g����k�A�Τ@�}�C��n�椬�����Ʀr�C��a[0]��k=0���Ʀr�Aa[1]��k=1���Ʀr�C 
	cin>>n>>m>>k;
	if (n<a[k]){						//�Ĥ@���N�����������p���ζi�j��A�ҥH���g�C��>��<�f�ta[k]�i��P�_�A�W�F�`�I 
		cout<<"Wayne can't eat and drink.\n"; return 0;
	}
	while (n>=a[(i+k)%2]){				//�u�n�����Y�@�����i�j��Q�סC�U�@���ɡA�ѤU�����]����>=�Q�Y�F�誺���B�~�|�i�j��I 
		cout<<i*m<<": Wayne ";			//�ɶ��٨S�g�L�N�Y�F�ҥHi=0 
		if ((i+k)%2)					//�Q��"����i"�P"��l���Ak"�f�t"%"�ӧP�_ 
			cout<<"drinks a Corn soup, ";//�ܴ� 
		else
			cout<<"eats an Apple pie, ";//�Y�� 
		n-=a[(i+k)%2];					//�Y���@�w�����I���A�ҥH���ɦ��}�C�������B
		if (n==0){						//�ѤU�����B��3�ر��p�C�Y�Ѫ���==0 
			cout<<"and now he doesn't have money.\n"; return 0;
		}
		else if (n==1){					//�Y�Ѫ���==1�Adollar����[s 
			cout<<"and now he has 1 dollar.\n"; return 0;
		}
		else							//��L���p�h��X�ٳѦh�ֿ� 
			cout<<"and now he has "<<n<<" dollars.\n";
		i++;
	}
	
	return 0;
}
