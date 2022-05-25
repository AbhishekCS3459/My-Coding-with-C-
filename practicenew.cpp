// swaping two variable using pointers
#include<bits/stdc++.h>
using namespace std;
void swaprefrence(int *ptra,int *ptrb){
    int temp=*ptra;
 *ptra=*ptrb;
 *ptrb=temp;
}
int main(int argc, char const *argv[])
{
int a=9,b=8;
cout<<"The value of a and b before swaping is:"<<endl;
swaprefrence(&a,&b); // here we are sending a and b address to swap it
cout<<"a="<<a<<"b="<<b;
    return 0;
}
