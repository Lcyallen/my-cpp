#include <iostream>
using namespace std;

int main (){
	
	int n, total;
	cin>>n;
	total=n;

	do
	{
		total=total+n/5;
		n=(n/5+n%5);
	}
		while(n>4);

	cout<<total;
	
	return 0;
}

/*
1.�Q���X�j�����ӫ��g�I�ܪq��I�����٬O���Q�ݵ���...2021.8.2
2.���ѦA���}�ɮ׽վ㦨do{}while,���M�@���N�L�F�I�ܶ}��2021.8.17
*/ 
