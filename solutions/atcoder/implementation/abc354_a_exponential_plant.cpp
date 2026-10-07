// Exponential Plant | https://atcoder.jp/contests/abc354/tasks/abc354_a
// Time: O(log H); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long h,height=0,growth=1;std::cin>>h;int day=0;while(height<=h){height+=growth;growth*=2;++day;}std::cout<<day<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
