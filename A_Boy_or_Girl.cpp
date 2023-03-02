#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    set<char> r;
        for( auto m : s){
        r.insert(m);
    }
    if(r.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
