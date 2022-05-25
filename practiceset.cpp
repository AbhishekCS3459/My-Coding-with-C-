#include <bits/stdc++.h>
using namespace std;
void getmax(int *arr[], int n)
{

    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, *arr[i]);
        minNo=min(minNo,*arr[i];)
    }

}

int main(int argc, char const *argv[])
{
    // Find min and max of array
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max="<<getmax(arr, n) << endl;
    cout << "Min="<<getmin(arr, n) << endl;
    return 0;
}
