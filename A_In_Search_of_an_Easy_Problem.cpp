#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum =0;
  cin>>n;
  for(int i =0;i<n;i++){
    int x;
    cin>>x;
    sum+=x;
    if(x==1){cout<<"HARD"<<endl;break;}
  }
  if(sum==0)cout<<"EASY"<<endl;
    return 0;
}