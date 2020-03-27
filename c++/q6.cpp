#include<iostream>

using namespace std;

main()
{
	int i,j,n;
	
	cout<<"how many row you want to enter  : ";
	cin>>n;
	
	cout<<"partten is hear.....  \n\n\n";
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<" ";
		
		for(j=1;j<=i;j++)
		cout<<"* ";
		
		cout<<"\n";
	}
	return 0;
}
