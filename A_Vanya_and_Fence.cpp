#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>v(n);
  for(int &x : v)scanf("%d",&x);
  int count =0;
  for(auto val : v){
    if(val>k)count+=2;
    else count+=1;
  }
  cout<<count<<endl;
    return 0;
}