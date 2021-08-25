#include <iostream>
using namespace std;

int main (){
	string A, B;
	cin>>A>>B;
	int la=A.size(), lb=B.size();
	int j=0, k=-1;
	
	for (int i=0; i<la; i++)
	{
		for (j=k+1; j<=(lb-la+i); j++)	//(2)
		{
			if (A[i]==B[j]){	//(3)
				k=j; break;		//(6)
			}
		}
		if (j==lb-la+i+1){		//(4)
			cout<<"NO\n"; return 0;
		}	
	}
	cout<<"YES\n";	//(5)

return 0;
}
/*
1.這一題一開始不懂題目還要求按照「順序」所以卡在最後一個測資沒過。結果想了好久
2.1一直以來對於這種用for-loop+if檢查，檢查最後如果都沒有符合條件應該怎麼寫其實沒有把握。現在大概有點心得。
2.2 j的檢查不用檢查到string B的最後一個字元，因為這題一定要照順序，所以A[0]最後出現的機會只到B[lb-la+0]，超過了就算符合也沒有用 
3.if只負責檢查條件一次，break後是跳出for-loop往「下」執行外圍的loop，此時的j是break當時的j。 
4.這裡就是「如果所有的j都檢查完，而且沒有符合if條件的時候」應該怎麼處理--但如果沒有再一個if，則是每一個「跳出」迴圈或「結束」迴圈都會執行，要注意！ 
5.照理這裡應該是18行的if不符合或21行的for-loop結束後都會走到22行，但19行有寫如果印出NO就return 0了，所以能走到22行的只有YES的狀況
6.把j指派到k很重要，因為下一個字元的搜尋就從k+1個開始就好了，但如果沒有新建一個變數k，j是會變動的 
*/ 
