#include<iostream>
using namespace std;

int main()
{
    int a1, an, d;
    int i;

    cin >> a1 >> an >> d;

    i = a1;
    while( i<=an )
    {
        cout << i << " ";

        i = i+d;
    }
    cout << endl;

    return 0;
}
