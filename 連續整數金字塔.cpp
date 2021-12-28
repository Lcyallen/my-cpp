#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int row, k=1, an=k;		//k在進for-loop前初始值為1，但須宣告一個新變數an把k丟進去儲存，才能在for-loop裡面使用 
	cin>>row;
	for (int j=1; j<=row; j++){	//j用來控制第幾列，寫在最上層。一定是從1~row 
		for (int i=row-j; i>0; i--)//用i控制每一列最先做的事。如果要輸出相同的東西(空格)要想的是每一列要印幾個才停止，由"i=row-j"來控制 
			cout<<" ";
		for (; k<j+an; k++)		//用k來控制輸出數字，但每一列的"初始值"是接續上一列最末值，所以k不能在for-loop裡面宣告，要在外面宣告。 
			cout<<fixed<<setw(4)<<k;
		an=k;
		cout<<endl;
	}
	
	return 0;
}
