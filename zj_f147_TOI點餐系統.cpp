#include <iostream>
using namespace std;

int main (){
	string menu[2][5]={{"Medium Wac 4","WChicken Nugget 8","Geez Burger 7","ButtMilk Crispy Chicken 6","Plastic Toy 3"},
						{"German Fries 2","Durian Slices 3","WcFurry 5","Chocolate Sunday 7"}};//�g���o�˪��榡���O�q�����A�ߤ��٬O���ôb�� 
	int money[2][5]={{4,8,7,6,3},{2,3,5,7}};
	string food[1000]={};	//�@�}�l�gf[5]���G�@���X�{�u�O����Ϭq���~�I 
	int a, b, i=0, total=0;
	while(cin>>a,a&&cin>>b){	//�@�}�l�g(cin>>a>>b,a)���o�˥��������J"0 0"�~�|�����A�쥻�H�������屼���m�F�A��ӸեX�o�ӵ��G 
		total+=money[a-1][b-1];
		food[i]=menu[a-1][b-1];i++;//�쥻������menu[][]�L�X�ӡA���o�˵L�k���Ҧ������J���A�L�A�u�n�����s�J�s���}�C 
	}
	for (int j=0; j<i; j++)	cout<<food[j]<<endl;
	if (total) cout<<"Total: "<<total;	//���꦳�u��J�@��0 
}
