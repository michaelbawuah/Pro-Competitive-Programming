// Adjacency Matrix | https://atcoder.jp/contests/abc343/tasks/abc343_b
// Time: O(n^2); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    for(int i=0;i<n;++i) {
        bool first=true;
        for(int j=0;j<n;++j) {
            int edge;
            std::cin>>edge;
            if(edge) {
                if(!first)std::cout<<' ';
                std::cout<<j+1;
                first=false;
            }
        }
        std::cout<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
