#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int t; cin>>t;
	string website[10] = {};	//1.
	int score[10] = {};

	for (int j=1; j<=t; j++){
		for (int i=0; i<10; i++)
			cin>>website[i]>>score[i];	//3.
		
		cout<<"Case #"<<j<<":"<<endl;

		for (int i=0; i<10; i++){
			if (score[i]==*max_element(score,score+10))
				cout<<website[i]<<endl;
		}
	}
}
/*
1.�դF�ܤ[,�@�}�l��@���J�]��2��str[10][2],��str[i][1]��str�A�নint, ���@���L�k���\
2.str a[i] �L�k�z�L-'0'�নint, �O�n�N�C��str�r����Ʀr�~�i�H�o�˼g
3.��Ӹիŧi���P���A,string a[10]�Mint b[10], �A�z�Lcin>>a[10]>>b[10]�i��oint b[10] 
