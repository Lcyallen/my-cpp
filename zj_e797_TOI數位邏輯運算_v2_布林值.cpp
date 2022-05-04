#include <iostream>
using namespace std;

int main (){
	int r, c; cin>>r>>c;
	bool b[r][c]={};//也可以宣告為int 
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			cin>>b[i][j];
		}
	}
	cout<<"AND: ";
	for (int j=0; j<c; j++){
		bool A=b[0][j];	//原本寫在loop外b[0][0]，但發現每次進loop必須讓A輸入為b[0][j] 
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
			X=(X xor b[i][j]); //xor可以是運算子 
		}cout<<X<<" ";
	}
}
