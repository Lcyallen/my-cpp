#include <iostream>
using namespace std;

int main (){
	string p; cin>>p;	//�쥻�b��ҬO�_�ݭn�g���}�C�A��ӷQ�ոլݪ����ŧi��string 
	int s=0, eng=0, num=0, j=0;
	s+=p.size()*3;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z') eng++;//�@�}�l�S�g�A�ѤFa~z�PA~Z�����S���s��A�ӥB�O���p�g�A�j�g 
	}
	s+=eng*3;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='0'&&p[i]<='9') num++;
	}
	s+=num*2;
	if (p.size()>7&&eng!=0&&num!=0) s+=10;
	else s-=5;
	if (p.size()==eng) s-=eng;
	if (p.size()==num) s-=num;
	for (int i=0; i<p.size(); i++){
		if (p[i]>='0'&&p[i]<='9'&&p[i+1]>='0'&&p[i+1]<='9')	//�o�ӱ���Q�ܤ[�A�쥻�ٷQ�n�g�@�ӷs�}�C�A��ӵo�{�u�n�v�@�ˬd�C�ӼƦr���U�@�Ӧr���O�_�]�O�Ʀr�Y�i 
			j++;
	}
	s-=j*2;
	cout<<s;
}
