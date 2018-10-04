#include "std_lib_facilities.h"

int main()
{
	double szam1,szam2;
	while(!cin.fail())
	{

		cout<<"Add meg a számokat:";
		cin>>szam1>>szam2;
		if(szam1>szam2)
			{cout<<"The larger value is "<<szam1<<" and the lower value is "<<szam2<<'\n';}
		else
			{cout<<"The larger value is "<<szam2<<" and the lower value is "<<szam1<<'\n';}
		 if(szam1==szam2)
			{cout<<"the numbers are equal. \n";}

	}
return 0;
}
