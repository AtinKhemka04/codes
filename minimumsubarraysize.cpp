<<<<<<< HEAD
#include<iostream>
using namespace std;
int smallestsubarraywithsum(int arr[],int n,int x){
    int sum=0,minlength=n+1,start=0,end=0;
    while (end<n)
    {
        while (sum<=x && end<n)
        {
            sum+=arr[end++];
        }
        while (sum>x && start<n)
        {
           if(end-start <minlength){
               minlength=end-start;
           }
           sum -=arr[start++];
        }
        
        
    }
    return minlength;
}
int main(){
    int arr[]={1,4,45,6,10,19};
    int x=511;
    int n=6;
    int minlength=smallestsubarraywithsum(arr,n,x);
    if(minlength==n+1){
        cout<<"no such subarray exists"<<endl;
    }
    else{
        cout<<"smallest length subarray is:"<<minlength<<endl;
    }
    return 0;
=======
#include<iostream>
using namespace std;
int smallestsubarraywithsum(int arr[],int n,int x){
    int sum=0,minlength=n+1,start=0,end=0;
    while (end<n)
    {
        while (sum<=x && end<n)
        {
            sum+=arr[end++];
        }
        while (sum>x && start<n)
        {
           if(end-start <minlength){
               minlength=end-start;
           }
           sum -=arr[start++];
        }
        
        
    }
    return minlength;
}
int main(){
    int arr[]={1,4,45,6,10,19};
    int x=511;
    int n=6;
    int minlength=smallestsubarraywithsum(arr,n,x);
    if(minlength==n+1){
        cout<<"no such subarray exists"<<endl;
    }
    else{
        cout<<"smallest length subarray is:"<<minlength<<endl;
    }
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}