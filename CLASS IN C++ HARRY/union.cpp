// Union is c++
#include<bits/stdc++.h>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
// Enter the code here
union money m1;
m1.rice=23;
cout<<m1.rice;
m1.car='c';
cout<<m1.car; 
// Here if we write m1.rice it will provide the garbage value 
cout<<m1.rice;
// This shows that only one value is stored in union as for exa it will be either rice either car

// if we print the car value then the rice value and the  car value is cleared 
cout<<m1.pounds;


return 0;
}
