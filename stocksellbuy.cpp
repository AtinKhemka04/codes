<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int minimum=arr[0];
    int profit=0;
    for(int i=0;i<n;i++){
           minimum=min(minimum,arr[i]);
           profit=max(profit,(arr[i]-minimum));
    }
    cout<<"max profit:"<<profit<<endl;
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int minimum=arr[0];
    int profit=0;
    for(int i=0;i<n;i++){
           minimum=min(minimum,arr[i]);
           profit=max(profit,(arr[i]-minimum));
    }
    cout<<"max profit:"<<profit<<endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}