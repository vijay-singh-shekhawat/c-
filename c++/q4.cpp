#include<iostream>

using namespace std;

main()
{
	int a[100],n,h;
	
	cout<<"how many no you want to enter : ";
	cin>>n;
	
	cout<<" enter a "<<1<< " no  : ";
	cin>>a[0];
		 
    h=a[0];
	
	for( int i=1;i<n;i++)
	{
		 cout<<" enter a "<<i+1<< " no  : ";
		 cin>>a[i];
		 
		 if(a[i]>h)
		    h=a[i];
	}
	
	
	cout<< " max is : "<<h;
	return 0;
}
