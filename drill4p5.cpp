#include "std_lib_facilities.h"

int main()
{
	double szam1,szam2;
	while(!cin.fail())
	{
		double kul=1.0/100;
		cout<<"Add meg a számokat:";
		cin>>szam1>>szam2;
		if(szam1>szam2)
			{cout<<"The larger value is "<<szam1<<" and the lower value is "<<szam2<<'\n';}
		else
			{cout<<"The larger value is "<<szam2<<" and the lower value is "<<szam1<<'\n';}
		 if(szam1==szam2)
			{cout<<"the numbers are equal. \n";}
		else if((szam1-szam2)<kul)
			{ cout<<"The numbers are almost equal";}
		else if((szam2-szam1)<kul)
			{ cout<<"The numbers are almost equal";}
	}
return 0;
}
