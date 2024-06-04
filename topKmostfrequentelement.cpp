#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;
#define pii pair<int,int>
#define vii vector<pii>
#define vi vector<int>
#define setBits(x) builtin_popcount(x)
int main(){
int n,k;
cin>>n>>k;
vi a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<int,int> freq;
for(int i=0;i<n;i++){
    int presentsize=freq.size();
    if(freq[a[i]]==0 && presentsize==k){
        break;
    }
    freq[a[i]]++;
}
vii ans;
map<int,int> :: iterator it;
for(it=freq.begin();it!=freq.end();it++){
    if(it->second!=0){
        ans.pb(it->second,it->first);
    }
}
sort(ans.begin(),ans.end(),greater<pii>());
vii :: iterator it1;
for(it1=ans.begin();it1!=ans.end();it1++){
    cout<<it1->second<<" "<<it1->first<<endl;
}
return 0;
}