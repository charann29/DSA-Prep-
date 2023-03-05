#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	void solved();
	while(t--)
	{
	 solved();
	}
	return 0;
}

void solved(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag =0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){cout<<1<<endl;flag =1;break;}
    }
    if(!flag)cout<<2<<endl;

}