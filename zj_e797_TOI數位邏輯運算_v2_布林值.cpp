#include <iostream>
using namespace std;

int main (){
	int r, c; cin>>r>>c;
	bool b[r][c]={};//�]�i�H�ŧi��int 
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			cin>>b[i][j];
		}
	}
	cout<<"AND: ";
	for (int j=0; j<c; j++){
		bool A=b[0][j];	//�쥻�g�bloop�~b[0][0]�A���o�{�C���iloop������A��J��b[0][j] 
		for (int i=1; i<r; i++){
			A=(A&&b[i][j]);
		}cout<<A<<" ";
	}
	cout<<"\n OR: ";
	for (int j=0; j<c; j++){
		bool O=b[0][j];
		for (int i=1; i<r; i++){
			O=(O||b[i][j]);
		}cout<<O<<" ";
	}
	cout<<"\nXOR: ";
	for (int j=0; j<c; j++){
		bool X=b[0][j];
		for (int i=1; i<r; i++){
			X=(X xor b[i][j]); //xor�i�H�O�B��l 
		}cout<<X<<" ";
	}
}
