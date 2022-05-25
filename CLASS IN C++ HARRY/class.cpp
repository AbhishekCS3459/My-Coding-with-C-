#include<bits/stdc++.h>
using namespace std;
class Employee{

private:
int a,b,c;   // These are private variables
public:
int d,e;
void setData(int a1,int b1,int c1);   /* Here we are declaring the function inside the class employee.We can either initialise immediately or we can do later .*/
void getData(){
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    cout<<"The value of c is:"<<c<<endl;
    cout<<"The value of d is:"<<d<<endl;
    cout<<"The value of e is:"<<e<<endl;

}
};
void Employee:: setData(int a1,int b1,int c1)  /* Here we are initiallising the function setData */ 
{
    a=a1;
    b=b1;
    c=c1;
}
int main(){
// Assessing the class elements 
Employee abhi;
abhi.d=32;
abhi.e=34;
/* Here likewise abhi.d and abhi.e if we try to declare abhi.a it will show error as it is a variable inside the private of the class */
// abhi.a=35;
abhi.setData(1,3,5);
abhi.getData();

// here if we try to access directly the variable a we can't do it as it is private



return 0;
}
