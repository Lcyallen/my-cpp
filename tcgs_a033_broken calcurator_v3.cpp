#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int a; cin>>a;
	
	if (a<10000)
		cout<<"|____"<<setw(4)<<setfill('_')<<a<<"|";
	
	else
		cout<<"|____"<<setw(4)<<setfill('0')<<a%10000<<"|";//��ӹy���p�G�n�d�̫�|��ơA���N�O"%1000 "�N�i�H�F!! >"< 
		
	return 0;
}


