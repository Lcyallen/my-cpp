#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int h, m;
	cin>>h>>m;
	h = (h+2+(m+30)/60)%24;	//h���Ψ��J��m,�ҥH�n���g, ��g��m�w��� 
	m = (m+30)%60;
	cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m;	//�m�߮榡�ƿ�X 
}
