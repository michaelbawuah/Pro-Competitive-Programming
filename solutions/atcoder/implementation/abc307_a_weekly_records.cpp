// Weekly Records | https://atcoder.jp/contests/abc307/tasks/abc307_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    for(int week=0;week<n;++week) {
        int sum=0;
        for(int day=0;day<7;++day) {
            int x;
            std::cin>>x;
            sum+=x;
        }
        std::cout<<sum<<(week+1==n?'\n':' ');
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
