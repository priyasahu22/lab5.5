#include<iostream>
using namespace std;
//  printing triangle pattern

int main()
{
  int n;
 cout<<"\n PROGRAMMING PATTERN:  ";
 cout<<"\n Enter till where u want the row:";
 cin>>n;
 //for row
for(int i=0;i<n;i++)
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
