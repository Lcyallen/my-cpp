#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	int n; cin >> n;
	char input[n] = "";
	
	for (int i=0; i<n; i++)
		cin >> input[i];
	
	sort (input, input+n);
	
	do{
		for (int i = 0; i < n; i++)
			cout << input[i] << " ";
		cout << endl;
	}while (next_permutation(input, input+n));
	
return 0;
}