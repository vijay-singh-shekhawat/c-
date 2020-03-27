#include <iostream>
using namespace std;

void my_swap(int &a, int &b) {
   a=a+b;
   b=a-b;
   a=a-b;
   
}
int main() {
   int a, b;
   cout<< " enter a first no : ";
   cin>>a;
   cout<< " enter a second no : ";
   cin>>b;
   cout << " value before swap : (a,b) = (" << a << ", " << b << ")\n";
   my_swap(a, b);
   cout << " value after swap : (a,b) = (" << a << ", " << b << ")\n";
   return 0;
}
