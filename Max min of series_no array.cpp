#include <iostream>
using namespace std;
int main(){
	
	int score, i, Max, min;
		
	for (i=0, Max=0, min=1000; cin>>score; i++)
	{
		if (Max<score)
			Max=score;	

		if (min>score)
			min=score;
	}
	
	cout<<"Max = "<<Max<<endl;
	cout<<"min = "<<min<<endl;
	
	return 0;
}

//�p�G��P�@����J����ư��B�z�A�h�����g�b�P�@��for�j���
//�L�X���G���bfor�j��~�B�z�S���Y
//Max, min���n�]�w��l�� 
