// Popular Vote | https://atcoder.jp/contests/abc161/tasks/abc161_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m,sum=0;
    std::cin>>n>>m;
    std::vector<int>a(n);
    for(int&x:a) {
        std::cin>>x;
        sum+=x;
    }
    int count=0;
    for(int x:a)count+=4*m*x>=sum;
    std::cout<<(count>=m?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
