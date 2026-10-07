// Tiny Arithmetic Sequence | https://atcoder.jp/contests/abc201/tasks/abc201_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int>a(3);for(int&x:a)std::cin>>x;std::sort(a.begin(),a.end());std::cout<<(a[0]+a[2]==2*a[1]?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
