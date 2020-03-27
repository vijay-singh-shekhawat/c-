#include<iostream>

using namespace std;

main()
{
	int p;
	float r,i,t,ti;
	
	cout<<"enter a principal amount : ";
	cin>>p;
	cout<<"enter a interest rate (in year) : ";
	cin>>r;
	cout<<"enter a time period (in year) : ";
	cin>>ti;
	
	i=(p*ti*r)/100;
	t=p+i;
	cout<<"totel interest  is : "<< i <<"\n totel amount is : "<< t;
	
	return 0;
}
