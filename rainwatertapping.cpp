<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int rainwater(int arr[],int n){
    int left[n];
    int right[n];
    int ans=0;
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        ans+=min(left[i],right[i])-arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<< "water trapped="<<rainwater(a,n);
return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int rainwater(int arr[],int n){
    int left[n];
    int right[n];
    int ans=0;
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        ans+=min(left[i],right[i])-arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<< "water trapped="<<rainwater(a,n);
return 0;
}
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
