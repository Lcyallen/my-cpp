#include <iostream>
#include <cmath>	//���Ψ�sqrt 
using namespace std;

int main (){
	int t; cin>>t;
	string s; getline(cin, s);//�O�ogetline�n�g�⦸ �I 
	while (t--){
		getline(cin, s);
		int sqt=sqrt(s.size());//��Ӱ��ܧ�sqrt(s.size())�ŧi���s������ܼƤ������n�B�z 
		if (sqt*sqt!=s.size())	//�]���W���w�ŧisqt����ơA�Y���O��������ƶ}�ڸ��|�u����ƭ� 
			cout<<"INVALID\n";
		else{
			for (int j=0; j<sqt; j++){	//�o��Q�ܤ[�]��ܦh���C�s�ŧi���ܼ�j�n��i�q0~s.size�]����A+1�A�ҥHj�n�b�~�� 
				for (int i=0; i<s.size(); i++){	//��i�q0~s.size���]�L�@�M 
					if (i%sqt==j)		//��Xi%sqt==0�F�M��A==1�B==2...�@����==sqt-1�A�ҥH�o���ܼƥ����s�ŧi 
						cout<<s[i];
				}
			}
			cout<<endl;
		}
	}
	
	return 0;
}
