#include<iostream>

using namespace std;

float interest(int p,float ti, float r=1.5);

main()
{
	int p;
	float r,i,t,ti;
	char c;
	
	cout<<"enter a principal amount : ";
	cin>>p;
	cout<<"enter a time period (in year) : ";
	cin>>ti;
	
	do{
		cout<<" you want to use default rate=1.5  (y/n) = ";
		cin>>c;
		
		switch(c)
		{
			 case 'y':
		case 'Y': i=interest(p,ti);
				  break;
		case 'n':
		case 'N': cout<<"enter a interest rate (in year) : ";
				   cin>>r;
				  i=interest(p,ti,r);
				  break;
		default : cout<<" please enter only  'y' or 'n' \n\n";
		}
					
	}while((c!='n'&&c!='N')&&(c!='y'&&c!='Y'));
	
	t=p+i;
	cout<<"totel interest  is : "<< i <<"\n totel amount is : "<< t;
	
	return 0;
}
float interest(int p,float ti, float r
)
{
	return (p*ti*r)/100;
}
