#include<iostream>
using namespace std;
//for printing right side triangle pattern:
int main()
{
  int n;
 cout<<"\n PROGRAMMING PATTERN:  ";
 cout<<"\n Enter till where u want the row:";
 cin>>n;
//for printing the all spaces:

 
for(int i=0;i<n;i++)
{ 
 
  for(int j=i;j<=n;j++)
{ 
  
  cout<<" ";

}
//for printing the all star:
  for(int j=1;j<=i;j++)
  {
  cout<<"*";
}



cout<<endl;
}
  
 


return 0;
}
