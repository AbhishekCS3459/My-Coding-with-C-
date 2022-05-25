#include<bits/stdc++.h>
using namespace std;
class Hero
{
private:
    int health;
public:
char level;
void print(){
    cout<<level;
} 
int gethealth(){
    return health;
}
char getlevel(){
    return level;
}
void sethealth(int h){
    health=h;
}
void setlevel(char ch){
    level=ch;
}
};
int main(){
Hero ramesh;
ramesh.sethealth(70);
cout<<"Ramesh health is :"<<ramesh.gethealth()<<endl;
ramesh.setlevel('A');
cout<<"Ramesh level is :"<<ramesh.getlevel()<<endl;

return 0;
}
