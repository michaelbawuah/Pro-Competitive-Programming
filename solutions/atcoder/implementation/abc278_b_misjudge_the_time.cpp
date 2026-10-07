// Misjudge the Time | https://atcoder.jp/contests/abc278/tasks/abc278_b
// Time: O(24*60); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,m;std::cin>>h>>m;while(true){int swapped_h=h/10*10+m/10,swapped_m=h%10*10+m%10;if(swapped_h<24&&swapped_m<60){std::cout<<h<<' '<<m<<'\n';break;}m=(m+1)%60;if(m==0)h=(h+1)%24;}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
