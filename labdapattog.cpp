#include "std_lib_facilities.h"
#include <unistd.h>

void rajzol(vector<string> palya,int x,int y,char labda);

int main()
{
bool futtat=true;
vector<string> palya;
char labda,palyaelem,ures=' ';
string ureshely="",palyaalkoto="";
int x=1,y=1,szelesseg,magassag,tmagassag;
cout<<"Add meg milyen elemből álljon a pálya:";
cin>>palyaelem;
cout<<"Add meg a pálya szélességét:";
cin>>szelesseg;
cout<<"Add meg a pálya magasságát:";
cin>>magassag;
cout<<"Add meg mi legyen a labda:";
cin>>labda;
for(int i=0;i<szelesseg;i++)
{	
	palyaalkoto+=palyaelem;
	ureshely+=ures;
}
cout<<palyaalkoto<<endl;
cout<<ureshely<<endl;
for(int i=0;i<magassag;i++)
{
palya.push_back(ureshely);
}
palya[0]=palyaalkoto;
palya[magassag-1]=palyaalkoto;
tmagassag=magassag-1;
int lepteto=1;
while(futtat)
	{
		x=abs(szelesseg-lepteto%(2*szelesseg));
		y=abs(tmagassag-lepteto%(2*tmagassag));
		rajzol(palya,x,y,labda);
		lepteto++;
		usleep(100000);
	}

	return 0;
}

void rajzol(vector<string> palya,int x,int y,char labda)
{
system("clear");
palya[y][x]=labda;
for(int i=0;i<palya.size();i++)
{
cout<<palya[i]<<endl;
}
}
