#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	while (n--){
		int a, b, c, count=0;//�D�ة��T���|�C������J3�ӼƦr�A�ҥH���ݥΰ}�C�C���F���D��ɻݿ�Xno�A�h�[�@�ӭp�ƾ� 
		cin>>a>>b>>c;
		for (int i=a+1; i<b; i++){
			if (i%c!=0){
				cout<<i<<" "; count++;
			}
		}
		if (count==0) cout<<"No free parking spaces.";
		cout<<endl;	//�Y����g�b��13��A�h��Xno���e�٬O�|������A�ҥH�g�b���C 
	}
	return 0;
}
