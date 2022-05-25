#include <bits/stdc++.h>
using namespace std;
// NITIN
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the n" << endl;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    int i = 0;
    bool flag = 0;
    // Now check palindrome
    while (i != n)
    {
        if (arr[i] == arr[(n - 1) - i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag==1)
    {
        cout<<"ITs a plaindrome";
    }
 else
 {
     cout<<" Its not a plaindrome";
 }
    


    return 0;
}
