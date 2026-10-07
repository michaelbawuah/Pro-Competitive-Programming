#include "../include/cp/dsu.hpp"
#include "../include/cp/fenwick.hpp"
#include "../include/cp/kmp.hpp"
#include "../include/cp/segment_tree.hpp"
#include <algorithm>
#include <functional>
#include <iostream>
#include <limits>
#include <numeric>
#include <random>
#include <stdexcept>
#include <string>
#include <vector>

int checks = 0;
void require(bool ok) {
    ++checks;
    if (!ok) throw std::runtime_error("Library property failed at check " + std::to_string(checks));
}

int main() {
    std::mt19937 random(2110);
    cp::DSU empty(0);
    require(empty.components() == 0);
    cp::Fenwick<long long> empty_bit(0);
    require(empty_bit.sum(0, 0) == 0);
    auto minimum = [](long long a, long long b) { return std::min(a, b); };
    constexpr long long inf = std::numeric_limits<long long>::max();
    cp::SegmentTree<long long, decltype(minimum)> empty_tree(0, inf, minimum);
    require(empty_tree.fold(0, 0) == inf);
    for (int n : {1, 2, 7, 31, 64}) {
        cp::DSU dsu(n);
        std::vector<int> component(n);
        std::iota(component.begin(), component.end(), 0);
        cp::Fenwick<long long> bit(n);
        cp::SegmentTree<long long, decltype(minimum)> tree(n, inf, minimum);
        std::vector<long long> values(n);
        for (int i = 0; i < n; ++i) tree.set(i, 0);
        for (int step = 0; step < 1000; ++step) {
            int a = static_cast<int>(random() % n), b = static_cast<int>(random() % n);
            bool different = component[a] != component[b];
            require(dsu.unite(a, b) == different);
            int old = component[b], replacement = component[a];
            for (auto& label : component) if (label == old) label = replacement;
            require(dsu.same(a, b));
            require(dsu.size(a) == std::count(component.begin(), component.end(), component[a]));
            auto unique = component;
            std::sort(unique.begin(), unique.end());
            require(dsu.components() == std::distance(unique.begin(), std::unique(unique.begin(), unique.end())));
            long long value = static_cast<long long>(random() % 2000001) - 1000000;
            bit.add(a, value - values[a]);
            values[a] = value;
            tree.set(a, value);
            int left = static_cast<int>(random() % (n + 1));
            int right = static_cast<int>(random() % (n + 1));
            if (left > right) std::swap(left, right);
            require(bit.sum(left, right) == std::accumulate(values.begin() + left, values.begin() + right, 0LL));
            long long expected = left == right ? inf : *std::min_element(values.begin() + left, values.begin() + right);
            require(tree.fold(left, right) == expected);
        }
    }
    // Concatenation is not commutative: this catches reversed right-hand aggregation.
    cp::SegmentTree<std::string, std::plus<std::string>> words(7, "", std::plus<std::string>{});
    for (int i = 0; i < 7; ++i) words.set(i, std::string(1, static_cast<char>('a' + i)));
    for (int l = 0; l <= 7; ++l) for (int r = l; r <= 7; ++r) {
        require(words.fold(l, r) == std::string("abcdefg").substr(l, r - l));
    }
    words.set(3, "XY");
    require(words.fold(2, 6) == "cXYef");
    for (int trial = 0; trial < 2000; ++trial) {
        std::string text(random() % 35, 'a'), pattern(random() % 9, 'a');
        for (auto& c : text) c = static_cast<char>('a' + random() % 3);
        for (auto& c : pattern) c = static_cast<char>('a' + random() % 3);
        std::vector<std::size_t> expected;
        for (std::size_t i = 0; i + pattern.size() <= text.size(); ++i) {
            if (text.compare(i, pattern.size(), pattern) == 0) expected.push_back(i);
        }
        require(cp::kmp_find_all(text, pattern) == expected);
    }
    std::cout << "PASS library: " << checks << " deterministic property checks\n";
}
