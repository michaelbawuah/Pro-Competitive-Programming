// Piano 3 | https://atcoder.jp/contests/abc369/tasks/abc369_b
// Time: O(n); extra space: O(1).
#include <cstdlib>
#include <iostream>



void solve() {
    int n,last_left=-1,last_right=-1,total=0;std::cin>>n;while(n--){int key;char hand;std::cin>>key>>hand;int&last=hand=='L'?last_left:last_right;if(last!=-1)total+=std::abs(key-last);last=key;}std::cout<<total<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
