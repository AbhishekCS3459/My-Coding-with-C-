// Given an nXm matrix,Write an algorithm to find that the given value exist in the matrix or not
//Integers in each row and column are sorted in ascending form left to right.
//Integers in each column are in sorted in ascending from top to bottom.
// It is given that the rows and column of the 2-D matrix are already sorted

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int row,column;
  cout<<"Enter the value of row and column"<<endl;
  cin>>row>>column;
  int arr[row][column];
  for (int i = 0; i < row; i++)
  {
      for (int j = 0; j < column; j++)
      {
          cin>>arr[i][j];
      }
      
  }
  int sr=0,sc=column-1;
  int key;
  cout<<"Enter the value of key"<<endl;
  cin>>key;
  while (sr<row &&sc>=0)
  {
        if (arr[sr][sc]==key)
      {

          cout<<"The element is found at i="<<sr<<"and j="<<sc<<endl;
         return 1;
         
      }
      if (arr[sr][sc]>key)
      {
          sc--;
      
      }
      else 
      {
          sr++;
      }
  
      
  }
  
    return 0;
}














