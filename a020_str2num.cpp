#include <iostream>
#include <string>
using namespace std;

int main (){
	
	char eng[27] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
	string a; int i, s;
	
	getline(cin, a);
	
	for (i=0; i<=26; i++)
	{
		if (a[0]==eng[i])
		{
			i=i+10;
			s=(i/10)+(i%10)*9;
		}
	}
	
	s=s+(a[1]-48)*8+(a[2]-48)*7+(a[3]-48)*6+(a[4]-48)*5+(a[5]-48)*4+(a[6]-48)*3+(a[7]-48)*2+(a[8]-48)+(a[9]-48);

	if (s%10==0)
		cout<<"real"<<endl;
	else{
		cout<<"fake"<<endl;
		}

	return 0;
}

/*
1.�@���Q�n�Φr���ন�Ʀr�A�ש󦨥\�F�I 
2.��n�D��J�r��ɡA�ŧi��string�̤�K�C(�ŧi��char�ΰ}�C����K)�F���D�[�J#include <string> 
3.�b�g�����e�̳��O��string���}�C�ӳB�z 
*/
