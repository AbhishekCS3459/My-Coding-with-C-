#include<bits/stdc++.h>
using namespace std;
int main(){
int n1,n2,n3;
cout<<"Enter the values of n1,n2,n3"<<endl;
cin>>n1>>n2>>n3;
int M1[n1][n2];
cout<<"Enter the elements of matrix M1"<<endl;
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n2; j++)
  {
    cin>>M1[i][j];
  }
  
}
cout<<"The M1 matrix is:"<<endl;
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n2; j++)
  {
    cout<<M1[i][j]<<" ";
  }
  cout<<endl;
}

int M2[n2][n3];
cout<<"Enter the values of element of the matrix M2"<<endl;
for (int i = 0; i < n2; i++)
{
  for (int j = 0; j < n3; j++)
  {
    cin>>M2[i][j];
  }
  
}

cout<<"The M2 Matrix:"<<endl;
for (int i = 0; i < n2; i++)
{
  for (int j = 0; j < n3; j++)
  {
    cout<<M2[i][j]<<" ";
  }
  cout<<endl;
}

int ans[n1][n3];
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n3; j++)
  {
    ans[i][j]=0;        //Here we are assingig all the elements of the answer matrix to 0
  }
  
}
for (int i = 0; i < n1; i++)
{
  for (int j = 0; j < n3; j++)
  {
    for (int k = 0; k < n2; k++)
    {
      ans[i][j]+=M1[i][k]*M2[k][j];
    }
    
  }
  
}
cout<<"The multiplied matrix is :"<<endl;
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n3; j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

















  return 0;
}