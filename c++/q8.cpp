#include<iostream>
#include <iomanip>
using namespace std;
using std::setw;

struct student 
{
	int roll;
	char name[20];
	int mark[3];


};

student read();
void disp(student s);
main()
{
	int i;
	struct student s[5];
	
	for(i=0;i<3;i++)
	{
		cout<<"=====================enter a "<<i+1<<" student record ================= \n";
		s[i]=read();
	}
	    
	cout<<std::right;
	cout<<setw(10)<<"ROLL NO.";
	cout<<setw(20)<<" NAME ";
	cout<<setw(7)<<" PHY";
	cout<<setw(7)<<"CHI";
	cout<<setw(9)<<"MATHS";
	cout<<setw(15)<<"PRESENTAGE \n";
	
	for(i=0;i<3;i++)
	    disp(s[i]);
	    
	
	
	return 0;
}

student read()
{
	struct student s;
	int t=0,i;
    cout<<"enter a roll no. : ";
    cin>>s.roll;
     cout<<"enter a roll no. : ";
    cin>>s.name;
    for(i=0;i<3;i++)
    {
    	 cout<<"enter a "<< i+1<< " subject marks (out of 100 ) : ";
         cin>>s.mark[i];
         
	}
    
    
    return s;
	
}

void disp(student s)
{
	float pre;
	float t=3;
	
	pre=((s.mark[0]+s.mark[1]+s.mark[2])/t);
	cout<<std::right;
	
	cout<<setw(10)<<s.roll;
	cout<<setw(20)<<s.name;
	cout<<setw(7)<<s.mark[0];
	cout<<setw(7)<<s.mark[1];
	cout<<setw(9)<<s.mark[2];
	cout<<setw(14.6)<<pre<<"\n";
}
