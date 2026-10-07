// The Middle Day | https://atcoder.jp/contests/abc315/tasks/abc315_b
// Time: O(M); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int m,sum=0;std::cin>>m;std::vector<int>d(m);for(int&x:d){std::cin>>x;sum+=x;}int day=(sum+1)/2,month=0;while(day>d[month]){day-=d[month];++month;}std::cout<<month+1<<' '<<day<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
