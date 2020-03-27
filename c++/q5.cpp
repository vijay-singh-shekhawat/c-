#include<iostream>
#include<conio.h>
#define pi 3.14
using namespace std; 

float rectangle();
float square();
float circle();


main()
{
	int c; 
	float a;
    do
	{
		cout<<"\t please select any options \n \n ";
		cout<<"\t 1.rectangle . \n ";
		cout<<"\t 2.square \n ";
		cout<<"\t 3.circle \n ";
		cout<<"\t 4.exit \n ";
		cout<<"\t -----------------  \n\n";
		
		cout<<" \t Select Options :  ";
		cin>>c;
		
		switch(c)
		{
			
			case 1: a=rectangle();
					cout<<" area of recatangle is : "<< a <<"\n";
					getch();
					break;
			case 2:  a=square();
					cout<<" area of recatangle is : "<< a <<"\n";
					getch();
					break;
			case 3:  a=circle();
					cout<<" area of recatangle is : "<< a <<"\n";
					getch();
					break;
					
			case 4: printf("\t\t thank you for using this program \n");
			        printf("\t\t --------------------------------\n ");
					break;
					
			default :
			        printf(" ERROR : Pleace enter a currect option  \n press any key to retry....  \n");
					getch(); 	
		}
	}while(c!=4);
	
	getch();
	return 0;
	
}
float rectangle()
{
	float a,b;
	cout<< " enter a hight of rectangle  : ";
	cin>>a;
	cout<< " enter a widht of rectangle  : ";
	cin>>b;
	
	return a*b;
}
float square()
{
	float a;
	cout<< " enter a length of any side of square  : ";
	cin>>a;
	
	return a*a;
}
float circle()
{
	float a;
	cout<< " enter a raiden of circle : ";
	cin>>a;
	
	return pi*a*a;
}
