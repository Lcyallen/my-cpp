#include <iostream>
using namespace std;

int main (){
	
	int n, s;
	while(cin>>n){
		s=0;		//�o���d���̤[���N�O�o�̡I��s�b�C���j�鰵���S���k0�ɡA�U�@���k�J��⧹��s�ٷ|�֥[�W�h�I 
		for (int i=1; i<n; i++){
			if (n%i==0)
				s+=i;		
		}
		
		if (s>n){
			cout<<"�ռ�"<<endl;
		}
		else if (s==n){			//�S�ѰO"����"���O"=" 
			cout<<"������"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
	}
	return 0;
}
