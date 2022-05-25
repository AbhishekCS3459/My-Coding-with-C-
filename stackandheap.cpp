#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=10;  // here the memory is allocated in the form of heap
    int *p=new int();  // allocate the memory in heap
    *p=10; // p is stored in stack and pointing towards the address allocated to store a int variable allocated in heap
    delete(p); // This is used to delete the allocated memory but the pointer is still pointing to the address allocated to the p in heap
    p = new int[4];
    delete[]p;
    p=null;
    
    


    return 0;
}
