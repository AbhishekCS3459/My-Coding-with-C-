// WAP A PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING FUNCTION
#include<iostream>
using namespace std;
int factorial(int num){
    if (num==0|| num==1)
    {
        return 1;
    }
    else
    {
        return (num *(factorial(num-1)));
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
