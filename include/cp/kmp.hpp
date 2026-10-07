#pragma once
#include <cstddef>
#include <numeric>
#include <string>
#include <vector>

namespace cp {
inline std::vector<std::size_t> prefix_function(const std::string& pattern) {
    std::vector<std::size_t> prefix(pattern.size());
    for (std::size_t i = 1; i < pattern.size(); ++i) {
        std::size_t matched = prefix[i - 1];
        while (matched > 0 && pattern[i] != pattern[matched]) matched = prefix[matched - 1];
        if (pattern[i] == pattern[matched]) ++matched;
        prefix[i] = matched;
    }
    return prefix;
}

// Returns all zero-based starts, including overlaps. Empty pattern matches every boundary.
// O(text.size() + pattern.size()) time, excluding allocation of the returned matches.
inline std::vector<std::size_t> kmp_find_all(const std::string& text, const std::string& pattern) {
    std::vector<std::size_t> starts;
    if (pattern.empty()) {
        starts.resize(text.size() + 1);
        std::iota(starts.begin(), starts.end(), std::size_t{0});
        return starts;
    }
    const auto prefix = prefix_function(pattern);
    std::size_t matched = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        while (matched > 0 && text[i] != pattern[matched]) matched = prefix[matched - 1];
        if (text[i] == pattern[matched]) ++matched;
        if (matched == pattern.size()) {
            starts.push_back(i + 1 - pattern.size());
            matched = prefix[matched - 1];
        }
    }
    return starts;
}
}  // namespace cp
