#include <iostream>
using namespace std;

int main ()
{
	int layer; cin >> layer;

	for (int j = 0; j < layer; j++)
	{
		for (int i = layer-j; i > 1; i--)
			cout << " ";
			
		for (int i = 0; i < 2*j+1; i++)
			cout << "@";

		cout << endl;
	}
	
	for (int j = 1; j < layer; j++)
	{
		for (int i = 0; i < j; i++)
			cout << " ";
		
		for (int i = 2*(layer-j)-1; i > 0; i-- )
			cout << "@";
		
		cout << endl;
	}
return 0;
}