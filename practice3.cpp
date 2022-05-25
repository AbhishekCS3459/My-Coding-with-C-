#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
int a=9;
cout<<a<<endl;
int *b=&a;
cout<<b<<endl<<&a<<endl<<*b<<endl;
*b=10;// Modifing the vairable using pointer
cout<<*b;
// pointer to pointer
int **ptrb=&b;
cout<<"The address of b is "<<ptrb<<endl;
cout<<"The value at b(address of a) is "<<*ptrb<<endl;
cout<<"The value of a using ptrb is "<<**ptrb<<endl;

    return 0;
}
