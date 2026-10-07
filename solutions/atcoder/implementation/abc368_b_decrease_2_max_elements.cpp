// Decrease 2 max elements | https://atcoder.jp/contests/abc368/tasks/abc368_b
// Time: O((N+sum A) log N); extra space: O(N).
#include <iostream>
#include <queue>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::priority_queue<int>values;
    while(n--) {
        int x;
        std::cin>>x;
        values.push(x);
    }
    int operations=0;
    while(true) {
        int a=values.top();
        values.pop();
        int b=values.top();
        values.pop();
        if(b==0)break;
        values.push(a-1);
        values.push(b-1);
        ++operations;
    }
    std::cout<<operations<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
