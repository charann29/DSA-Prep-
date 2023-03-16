#include <bits/stdc++.h>
using namespace std;

#define hashmap unordered_map
#define hashset unordered_set

#define YES std::cout << "Yes" << std::endl;
#define NO std::cout << "No" << std::endl;

#define ll long long

bool dfs(vector<int> a, int curr, int sum, int target) {
    sum += a[curr];
    if (sum == target) return true;
    for (int i = curr + 1; i < a.size(); i++) {
        if (dfs(a, i, sum, target)) return true;
    }
    sum -= a[curr];
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool res = false;
        for (int i = 0; i < n; i++) res = res || dfs(a, i, 0, m);
        if (res) YES
        else NO
    }

	return 0;
}
