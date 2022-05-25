#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // Appending two strings means let suppose two string be s1 and s2
    // The word inside string s1 is fami and the word inside s2 is lies
    // Appending means the final output be families

string s1="famil";
string s2="ies";
    // Method 1 append s1 in s2
// s1.append(s2);
// cout<<s1<<endl<<s2;

// Method 2
// s1=s1+s2;
cout<<s1+s2<<endl;
// 3rd charracter of s1
cout<<s1[2];
    return 0;
}
