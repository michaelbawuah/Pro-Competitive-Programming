// Orthogonality | https://atcoder.jp/contests/abc188/tasks/abc188_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;long long sum=0;for(int x:a){int y;std::cin>>y;sum+=1LL*x*y;}std::cout<<(sum==0?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
