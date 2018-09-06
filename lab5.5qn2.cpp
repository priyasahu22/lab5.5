 #include<iostream>
 using namespace std;   
 //printing square space pattern:

 int main()
 {  
  int n;
  cout<<"\n PATTERN PROGRAMMING: ";
  cout<<"\nEnter the number till where u want to print:";
  cin>>n;
  
  for(int i=0;i<n;i++)
 {
//for printing other than first and last column
    if(i>0&&i<n-1)

{ 
 for(int j=0;j<n;j++)
{
  if(j==0||j==n-1)
 {cout<<"*";}
else
{
  
   cout<<" ";
 
}
 } 
  }
//for printing first and last column
else
{
 for(int j=0;j<n;j++)
 {
   
    cout<<"*"; 

 }
}
cout<<endl;
}

 return 0;
 }

  
