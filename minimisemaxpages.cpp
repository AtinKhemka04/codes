#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int min){
    int stdrqrd=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            stdrqrd++;
            sum=arr[i];
            if(stdrqrd >m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int allocatepages(int arr[], int n, int m)
{  if (n < m)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
  
    int start = 0, end = sum, mid, ans = INT_MAX;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
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
    int m;
    cin>>m;
    cout<<"Minimum No. of Max pages:"<<allocatepages(arr,n,m)<<endl;
    return 0;
}