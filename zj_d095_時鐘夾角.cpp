#include <iostream>
#include <iomanip>	//���D��X�榡�n�D�p���I�U�T��ҥH�n�����Y 
using namespace std;

int main (){
	string time;
	double angle=0;	//�n�⧨���ŧi��double 
	while(cin>>time, time!="0:00"){
		if (time.size()==4)	//�Q��Φr����װ����ϧO 
		angle=(time[0]-'0')*30.+((time[2]-'0')*10.+(time[3]-'0'))/2.-((time[2]-'0')*10.+(time[3]-'0'))*6.;
		else
		angle=((time[0]-'0')*10+(time[1]-'0'))*30+((time[3]-'0')*10.+(time[4]-'0'))/2.-((time[3]-'0')*10.+(time[4]-'0'))*6.;
		angle=(angle>=0)*angle-(angle<0)*angle;	//�Y���w���o��ɰw�֮ɡA�����|�ܦ��t���C�G����t�����ܦ����� 
		if (angle<=180)
			cout<<fixed<<setprecision(3)<<angle<<endl;//�n��X�p���I�U�T�� 
		else
			cout<<fixed<<setprecision(3)<<360-angle<<endl;
	}

	return 0;
}

