// Counting Arrays | https://atcoder.jp/contests/abc226/tasks/abc226_b
// Time: O(L log n), L = total input length; extra space: O(L).
#include <iostream>
#include <set>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::set<std::vector<int>>sequences;
    while(n--) {
        int length;
        std::cin>>length;
        std::vector<int>a(length);
        for(int&x:a)std::cin>>x;
        sequences.insert(a);
    }
    std::cout<<sequences.size()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
