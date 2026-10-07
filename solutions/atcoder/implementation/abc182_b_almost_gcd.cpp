// Almost GCD | https://atcoder.jp/contests/abc182/tasks/abc182_b
// Time: O(1000 n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    int best=-1,answer=2;
    for(int d=2;d<=1000;++d) {
        int count=0;
        for(int x:a)count+=x%d==0;
        if(count>best) {
            best=count;
            answer=d;
        }
    }
    std::cout<<answer<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
