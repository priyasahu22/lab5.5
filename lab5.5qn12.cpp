#include<iostream>
using namespace std;
//for printing opposite traingle pattern

int main()
{
  int n;
 cout<<"\n PROGRAMMING PATTERN:  ";
 cout<<"\n Enter till where u want the row:";
 cin>>n;
//for row 
for(int i=n;i>0;i--)
{
//for column
  for(int j=0;j<i;j++)
{
  cout<<"*";
}
cout<<endl;
}
return 0;
}
