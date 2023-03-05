#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count,i =1;
        vector<int>v(n),p(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        while((count=(i*(i+1))/2 )<=k){
            i++;
        }

        while(i-- ){
            int mini=INT_MAX;
            for(int i =0;i<n;i++){
                v[i]-=k;
                
            }
            for(int i =0;i<n;i++){
                if(v[i]>0) mini = min(mini,p[i]);
            }
            k-=mini;
        }
        bool flag =1;
        for(auto val : v){
            if(val>0){cout<<"NO"<<endl;flag =0;break;}

        }
        if(flag==1)cout<<"YES"<<endl;
    }
}





6
847587685747 4593787 9 73386 77493689 795279587