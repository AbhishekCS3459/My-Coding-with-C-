#include<bits/stdc++.h>
using namespace std;
void swappointer(int *ptrx,int *ptry){
    int temp=*ptrx;
    *ptrx=*ptry;
    *ptry=temp;

}
int main(int argc, char const *argv[])
{
    int a=9;
    int b=8;
    cout<<"The value of a and b before swap is "<<a<<" "<<b<<endl;
    int *pointerofa=&a;
    int *pointerofb=&b;
     swappointer(pointerofa,pointerofb);
    cout<<"The value after the swaping is:"<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}
