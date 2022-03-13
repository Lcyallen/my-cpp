#include <iostream>
using namespace std;

int main (){
	string menu[2][5]={{"Medium Wac 4","WChicken Nugget 8","Geez Burger 7","ButtMilk Crispy Chicken 6","Plastic Toy 3"},
						{"German Fries 2","Durian Slices 3","WcFurry 5","Chocolate Sunday 7"}};//寫成這樣的格式其實是猜中的，心中還是有疑惑的 
	int money[2][5]={{4,8,7,6,3},{2,3,5,7}};
	string food[1000]={};	//一開始寫f[5]結果一直出現「記憶體區段錯誤！ 
	int a, b, i=0, total=0;
	while(cin>>a,a&&cin>>b){	//一開始寫(cin>>a>>b,a)但這樣必須等到輸入"0 0"才會結束，原本以為必須砍掉重練了，後來試出這個結果 
		total+=money[a-1][b-1];
		food[i]=menu[a-1][b-1];i++;//原本直接讓menu[][]印出來，但這樣無法等所有測資輸入完再印，只好把測資存入新的陣列 
	}
	for (int j=0; j<i; j++)	cout<<food[j]<<endl;
	if (total) cout<<"Total: "<<total;	//測資有只輸入一個0 
}
