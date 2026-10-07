// 11/11 | https://atcoder.jp/contests/abc328/tasks/abc328_b
// Time: O(total days * digit count); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,answer=0;
    std::cin>>n;
    for(int month=1;month<=n;++month) {
        int days;
        std::cin>>days;
        for(int day=1;day<=days;++day) {
            std::string date=std::to_string(month)+std::to_string(day);
            if(std::all_of(date.begin(),date.end(),[&](char c){return c==date[0];}))++answer;
        }
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
