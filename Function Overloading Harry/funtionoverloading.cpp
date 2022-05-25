#include<bits/stdc++.h>
using namespace std;
int volume(int a){
    cout<<"Volume of cube function is called"<<endl;
    return a*a*a;
}
int volume(int l,int b,int h){
    cout<<"Volume of cuboid is called"<<endl;
    return l*b*h;
}
int volume(int r, int h){
    cout<<"Volume of cylinder is called"<<endl;
    return 3.14*r*r*h;
}
int main(){
// Enter the code here
cout<<"The volume of cuboid of 3,7 and 6  is"<<volume(3,7,6)<<endl;
cout<<"The volume of cylinder of radius 3 and height 6 is"<<volume(3,6)<<endl;
cout<<"The volume of cube of side 3 is"<<volume(3)<<endl;
return 0;
}
