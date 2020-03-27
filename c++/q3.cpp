#include<iostream>


#define T 300 
using namespace std;

main()
{
	int a[3],sum=0,i;
	float p;
	
	for(i=0;i<3;i++)
	{
		cout<<" enter a marks in "<<i+1<<" subject (out of 100) : ";
		cin>>a[i];
		
		sum=sum+a[i];
	}
	
	p=(sum*100)/T;
	
	if(p>=80)
		cout<<"You get "<<p<<" presantage with Grade : I division  ";
	else if(p>=60)
		cout<<"You get "<<p<<" presantage with  Grade : II division  ";
	else if(p>=50)
		cout<<"You get "<<p<<" presantage with  Grade  : III division  ";
	else
		cout<<"You get "<<p<<" presantage with Grade : FAIL  ";
	return 0;
}
