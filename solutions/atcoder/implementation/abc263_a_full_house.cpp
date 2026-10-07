// Full House | https://atcoder.jp/contests/abc263/tasks/abc263_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int>a(5);for(int&x:a)std::cin>>x;std::sort(a.begin(),a.end());bool first=a[0]==a[1]&&a[2]==a[4]&&a[1]!=a[2];bool second=a[0]==a[2]&&a[3]==a[4]&&a[2]!=a[3];std::cout<<(first||second?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
