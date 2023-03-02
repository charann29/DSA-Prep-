

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,ll>mappy1,mappy2;
    ll ans=0;
    for(auto x: s){
        if(isupper(x)) mappy1[x]++;
        else mappy2[x]++;
    }
    for(auto x: mappy1){
        char c=tolower(x.first);
        while(mappy2.find(c)!=mappy2.end() and mappy2[c]>0 and mappy1[x.first]>0) {
            ans++;
            mappy2[c]--;
            mappy1[x.first]--;
        }
        while(mappy1[x.first]>=2 and k>0){
            k--;
            ans++;
            mappy1[x.first]-=2;
        }
    }
    
    for(auto x: mappy2){
        while(mappy2[x.first]>=2 and k>0){
            k--;
            ans++;
            mappy2[x.first]-=2;
        }
    }
    
    cout<<ans<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}