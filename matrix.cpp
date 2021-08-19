#include <iostream>
using namespace std;

int main(){
	
	int A[2][3]={{1,2,3},{3,2,1}};		//A琌2*3痻皚-->23︽ 
	int B[3][2]={{1,2},{2,3},{3,4}};	//B琌3*2痻皚-->32︽ 
	int C[2][2]={{0},{0}};			//C琌A*B痻皚=2*2-->22︽﹍て–じА0 
	
	for (int i=0; i<2; i++)		//i琌璶C┪琌A计-->2 
	{
		for (int j=0; j<2; j++)	//j琌︽璶C┪琌B︽计-->2 
		{
			for (int k=0; k<3; k++)		//k琌A㎝B砆"Μ "い丁-->3 
				C[i][j]+=A[i][k]*B[k][j];	//C璶癘眔ノ仓よΑр–A(i,k)*B(k,j)挡狦常癬ㄓ 
		}
	}
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<C[i][j]<<"\t";		//竒ノぃk 
		}
		cout<<endl;						//–块Ч璶传 
	}
	
	return 0;
}
