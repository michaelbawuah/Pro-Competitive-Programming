// Playing Cards Validation | https://atcoder.jp/contests/abc277/tasks/abc277_b
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <set>
#include <string>

void solve() {
    int n;
    std::cin>>n;
    std::string suits="HDCS",ranks="A23456789TJQK";
    std::set<std::string>seen;
    bool ok=true;
    while(n--) {
        std::string card;
        std::cin>>card;
        ok=ok&&suits.find(card[0])!=std::string::npos&&ranks.find(card[1])!=std::string::npos;
        if(!seen.insert(card).second)ok=false;
    }
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
