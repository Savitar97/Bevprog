#include "std_lib_facilities.h"

int main()
{	double max=0,min=0;
	vector<double> szamok;
	double szam1;
	while(!cin.fail())
	{
		double kul=1.0/100;
		cout<<"Add meg a számot:";
		cin>>szam1;
		szamok.push_back(szam1);

	}
	szamok.erase(szamok.begin()+(szamok.size()-1));
	max=szamok[0];
	min=szamok[0];
	for(int i=1;i<szamok.size();i++)
	{
		if(szamok[i]>max)
			{max=szamok[i];}
		if(szamok[i]<min)
			{min=szamok[i];}
	}
	cout<<"The largerst number: "<<max<<" the smallest number "<<min;
return 0;
}
