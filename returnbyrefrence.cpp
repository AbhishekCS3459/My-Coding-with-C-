#include<bits/stdc++.h>
using namespace std;
// void swapreference(int *ptra,int *ptrb){
// int temp=*ptra;
// *ptra=*ptrb;
// *ptrb=temp;

// }
// here we are accepting the address of x and y as &a and &b  
void swapreferenceVar(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
int main(int argc, char const *argv[])
{
    int x=9,y=8;
     cout<<"The value before swaping is:"<<"x="<<x<<"y="<<y<<endl;
     // here we were sending the address of x and y as &x and &y
    //  swapreference(&x,&y); this will swap using reference using pointer reference

    // Now we will swap using reference variables
    swapreferenceVar(x,y);  // here we are directly passing value to the function
     cout<<"The value after the swap reference is:"<<"x="<<x<<"y="<<y<<endl;
    return 0;
}
