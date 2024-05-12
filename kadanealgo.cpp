#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n){
    int max=0;
    int curr=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(max<curr)
        max=curr;
        if(curr<0)
        curr=0;
        
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=maxsum(arr,n);
    cout<<"max sum subarray="<< ans<<endl;
    return 0;

}