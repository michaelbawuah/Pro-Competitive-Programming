// Rectangle Cutting | https://cses.fi/problemset/task/1744/
// Time: O(a b (a + b)); extra space: O(a b).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int height, width;
    std::cin >> height >> width;
    std::vector<std::vector<int>> cuts(height + 1, std::vector<int>(width + 1));
    for (int h = 1; h <= height; ++h) {
        for (int w = 1; w <= width; ++w) {
            if (h == w) continue;
            cuts[h][w] = h * w;
            for (int split = 1; split < h; ++split)
                cuts[h][w] = std::min(cuts[h][w], 1 + cuts[split][w] + cuts[h - split][w]);
            for (int split = 1; split < w; ++split)
                cuts[h][w] = std::min(cuts[h][w], 1 + cuts[h][split] + cuts[h][w - split]);
        }
    }
    std::cout << cuts[height][width] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
