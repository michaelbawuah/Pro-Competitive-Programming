// Do Not Be Distracted! | https://codeforces.com/problemset/problem/1520/A
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::string tasks; std::cin >> n >> tasks;
        std::vector<bool> seen(26); char previous='?'; bool valid=true;
        for (char task:tasks) if (task!=previous) { if (seen[task-'A']) valid=false; seen[task-'A']=true; previous=task; }
        std::cout << (valid ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
