#include<iostream>
using namespace std;
int main()
  
{
int i,n, first=0, second=1, next; 
  
cout<<"Enter number of terms for Series: ";
cin>>n;
cout<<"Fibonacci series are: \n";
for(i=0; i<n; i++)
{
cout<<"\n"<<first;
next = first + second;
first = second;
second = next;
}
return 0;
}
