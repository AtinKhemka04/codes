<<<<<<< HEAD
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
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    cin>>i;
    sort(a.begin(),a.end());
    long long mn=0,mx=0;
    for(int i=0;i<n/2;i++){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;

}
=======
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
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    cin>>i;
    sort(a.begin(),a.end());
    long long mn=0,mx=0;
    for(int i=0;i<n/2;i++){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;

}
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
\\ 2135 1002 1400