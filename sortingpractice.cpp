#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // Given an array of size n sort it with all the sorting techniques
    int arr[6]={6,5,3,4,1,0};
    // Insertion Sort
    for(int i =0;i<6;i++){
        for (int j = i+1; j<=6; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    cout<<"Sorted array:"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
