#include<iostream>
using namespace std;
int main()
 
 {
int no,a=0;
cout<<"Enter any num : ";
cin>>no;
while(no>0)
{
no=no/10;
a++;
}
cout<<"\n"<<a;
return 0;
}
