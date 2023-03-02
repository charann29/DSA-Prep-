#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    priority_queue<int> second_priority_queue;
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(v[i]>0) second_priority_queue.push(v[i]);
        if(v[i]==0){
            if(!second_priority_queue.empty()){
                ans+=second_priority_queue.top();
                second_priority_queue.pop();
            }
            
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