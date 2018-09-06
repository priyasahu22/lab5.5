#include<iostream>
using namespace std;
//printing hollow triangle pattern

int main()
{
  int n;
 cout<<"\n PROGRAMMING PATTERN:  ";
 cout<<"\n Enter till where u want the row:";
 cin>>n;
 
for(int i=0;i<n;i++)
{

//for printing other rows having hollow elements:
if(i>=3&&i<n-1)
{
  for(int j=0;j<i;j++)
{
   if(j==0||j==i-1)
{
  cout<<"*";

}
else
{ 
  
  cout<<" ";
}
}
}
else //printing rest which does not contain hollow elements:
{  
   for(int j=0;j<i;j++)
{
  cout<<"*";
}
}
cout<<endl;
}
return 0;
}
