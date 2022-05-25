#include <bits/stdc++.h>
using namespace std;
int binnarysearch(int arr[], int key, int n)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the value of key" << endl;
    cin >> key;
    cout << binnarysearch(arr, n, key) << endl;

    return 0;
}
