#include<bits/stdc++.h>
using namespace std;
// here we can use typedef so that we can write ep subham instead struct employee subham
// Here ep  is used to call   
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
  
}ep;



int main(){
struct employee harry;
harry.eid= 1;
harry.favchar='c';
harry.salary=12000000;

ep abhi;
abhi.eid=2;
abhi.favchar='a';
abhi.salary=12234000;

ep subham;
subham.eid=3;
subham.favchar='z';
subham.salary=232100;
cout<<harry.salary<<endl;
cout<<abhi.salary<<endl;
cout<<subham.salary<<endl;
return 0;
}
