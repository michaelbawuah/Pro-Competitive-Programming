// Climbing Takahashi | https://atcoder.jp/contests/abc235/tasks/abc235_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,height;std::cin>>n>>height;bool moving=true;for(int i=1;i<n;++i){int next;std::cin>>next;if(moving&&next>height)height=next;else moving=false;}std::cout<<height<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
