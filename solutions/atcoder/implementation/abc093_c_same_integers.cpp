// Same Integers | https://atcoder.jp/contests/abc093/tasks/arc094_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b,c;std::cin>>a>>b>>c;int target=std::max({a,b,c}),sum=a+b+c;while((3*target-sum)%2)++target;std::cout<<(3*target-sum)/2<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
