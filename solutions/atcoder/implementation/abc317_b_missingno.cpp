// MissingNo. | https://atcoder.jp/contests/abc317/tasks/abc317_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;std::sort(a.begin(),a.end());for(int i=1;i<n;++i)if(a[i]>a[i-1]+1)std::cout<<a[i-1]+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
