<<<<<<< HEAD
#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];}
        map<int,int> cnt;
        int prefsum=0;
for(int i=0;i<n;i++){
    prefsum+= a[i];
    cnt[prefsum]++;
}
int ans =0;
map<int,int> :: iterator it;
for(it= cnt.begin();it!=cnt.end();it++){
    int c=it->second;
    ans+=(c*(c-1))/2;
    if(it->first == 0)
    ans+=it->second;
}
cout<<ans<<endl;
return 0;
    
=======
#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];}
        map<int,int> cnt;
        int prefsum=0;
for(int i=0;i<n;i++){
    prefsum+= a[i];
    cnt[prefsum]++;
}
int ans =0;
map<int,int> :: iterator it;
for(it= cnt.begin();it!=cnt.end();it++){
    int c=it->second;
    ans+=(c*(c-1))/2;
    if(it->first == 0)
    ans+=it->second;
}
cout<<ans<<endl;
return 0;
    
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}