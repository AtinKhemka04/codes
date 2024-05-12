#include <bits/stdc++.h>
using namespace std;

 int binarysearch(int arr[],int l,int h,int val)
{
    int mid = l + (h - l) / 2;
    if (arr[mid] == val)
    {  
        return mid;
    }
     if (arr[mid] > val)
        return binarysearch(arr, l, mid-1, val);
    else
        return  binarysearch(arr, mid + 1, h, val);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    int val;
    cout << "enter data to be searched for:";
    cin >> val;
   int ans= binarysearch(arr, 0, n - 1, val);

cout<<"Element found at index:"<<ans<<endl;
    return 0;
}