 #include<bits/stdc++.h>
 using namespace std;
 int main(int argc, char const *argv[])
 {
     int arr[]={32,34,64};
     // here it shows that arr is itself a pointer to arr[0]
     cout<<*arr<<endl;   // derefrencing the arr will give the value inside the first element
     cout<<arr<<endl; // arr will provide the address of the first element of the array
    int *ptr=arr; // here arr already stores the address of the 0th element of the array
     for (int i = 0; i <=3; i++)
     {
         cout<<*ptr<<endl;
         *ptr++;
     }
        for (int i = 0; i <=3; i++)
     {
         // here is arr is a indexing arr and it can go to next index after
         cout<<*(arr+i)<<endl;
         // *arr++; it is invalid as arr is a constant pointer and we cant change it 
     }
     
     
     return 0;
 }
 