# Pro Competitive Programming

C++17 solutions to competitive programming problems, with algorithm notes and test cases.

**835 reference solutions** across CSES, Codeforces, and AtCoder. Each solution compiles independently and includes a link to the original problem, an explanation, and local tests.

| Platform | Solutions | Browse |
| --- | ---: | --- |
| CSES | 96 | [Problem tables](#cses) · [Source files](solutions/cses) |
| Codeforces | 114 | [Problem tables](#codeforces) · [Source files](solutions/codeforces) |
| AtCoder | 625 | [Problem tables](#atcoder) · [Source files](solutions/atcoder) |
| **Total** | **835** | [Complete index with time and space complexity](docs/problems.md) |

[Algorithm library](include/cp) · [C++ notes](docs/cpp.md) · [Practice route](docs/roadmap.md) · [Run locally](#run-locally) · [Verification](docs/verification.md)

Problem names link to the original judge. **C++17** opens the implementation; **Notes** explains the approach and complexity. Expand a section to browse its problems.

## CSES

Solutions from the [CSES Problem Set](https://cses.fi/problemset/), grouped by topic.

<details open>
<summary><strong>Introductory Problems</strong> · 18 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1068` | [Weird Algorithm](https://cses.fi/problemset/task/1068/) | simulation, integers | [C++17](solutions/cses/introductory/1068_weird_algorithm.cpp) · [Notes](notes/cses/1068_weird_algorithm.md) |
| `1083` | [Missing Number](https://cses.fi/problemset/task/1083/) | arithmetic, integers | [C++17](solutions/cses/introductory/1083_missing_number.cpp) · [Notes](notes/cses/1083_missing_number.md) |
| `1069` | [Repetitions](https://cses.fi/problemset/task/1069/) | strings, scan | [C++17](solutions/cses/introductory/1069_repetitions.cpp) · [Notes](notes/cses/1069_repetitions.md) |
| `1094` | [Increasing Array](https://cses.fi/problemset/task/1094/) | greedy, scan | [C++17](solutions/cses/introductory/1094_increasing_array.cpp) · [Notes](notes/cses/1094_increasing_array.md) |
| `1617` | [Bit Strings](https://cses.fi/problemset/task/1617/) | modular arithmetic, binary exponentiation | [C++17](solutions/cses/introductory/1617_bit_strings.cpp) · [Notes](notes/cses/1617_bit_strings.md) |
| `1618` | [Trailing Zeros](https://cses.fi/problemset/task/1618/) | number theory | [C++17](solutions/cses/introductory/1618_trailing_zeros.cpp) · [Notes](notes/cses/1618_trailing_zeros.md) |
| `1070` | [Permutations](https://cses.fi/problemset/task/1070/) | construction, parity | [C++17](solutions/cses/introductory/1070_permutations.cpp) · [Notes](notes/cses/1070_permutations.md) |
| `1071` | [Number Spiral](https://cses.fi/problemset/task/1071/) | arithmetic, pattern | [C++17](solutions/cses/introductory/1071_number_spiral.cpp) · [Notes](notes/cses/1071_number_spiral.md) |
| `1072` | [Two Knights](https://cses.fi/problemset/task/1072/) | combinatorics | [C++17](solutions/cses/introductory/1072_two_knights.cpp) · [Notes](notes/cses/1072_two_knights.md) |
| `1092` | [Two Sets](https://cses.fi/problemset/task/1092/) | construction, greedy | [C++17](solutions/cses/introductory/1092_two_sets.cpp) · [Notes](notes/cses/1092_two_sets.md) |
| `1755` | [Palindrome Reorder](https://cses.fi/problemset/task/1755/) | strings, construction, counting | [C++17](solutions/cses/introductory/1755_palindrome_reorder.cpp) · [Notes](notes/cses/1755_palindrome_reorder.md) |
| `1754` | [Coin Piles](https://cses.fi/problemset/task/1754/) | arithmetic, invariants | [C++17](solutions/cses/introductory/1754_coin_piles.cpp) · [Notes](notes/cses/1754_coin_piles.md) |
| `2205` | [Gray Code](https://cses.fi/problemset/task/2205/) | bit operations, construction | [C++17](solutions/cses/introductory/2205_gray_code.cpp) · [Notes](notes/cses/2205_gray_code.md) |
| `2165` | [Tower of Hanoi](https://cses.fi/problemset/task/2165/) | recursion, construction | [C++17](solutions/cses/introductory/2165_tower_of_hanoi.cpp) · [Notes](notes/cses/2165_tower_of_hanoi.md) |
| `1622` | [Creating Strings](https://cses.fi/problemset/task/1622/) | permutations, STL | [C++17](solutions/cses/introductory/1622_creating_strings.cpp) · [Notes](notes/cses/1622_creating_strings.md) |
| `1623` | [Apple Division](https://cses.fi/problemset/task/1623/) | backtracking, subset enumeration | [C++17](solutions/cses/introductory/1623_apple_division.cpp) · [Notes](notes/cses/1623_apple_division.md) |
| `1624` | [Chessboard and Queens](https://cses.fi/problemset/task/1624/) | backtracking, constraints | [C++17](solutions/cses/introductory/1624_chessboard_and_queens.cpp) · [Notes](notes/cses/1624_chessboard_and_queens.md) |
| `2431` | [Digit Queries](https://cses.fi/problemset/task/2431/) | arithmetic, digit blocks | [C++17](solutions/cses/introductory/2431_digit_queries.cpp) · [Notes](notes/cses/2431_digit_queries.md) |

</details>

<details>
<summary><strong>Sorting and Searching</strong> · 25 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1621` | [Distinct Numbers](https://cses.fi/problemset/task/1621/) | sorting, STL | [C++17](solutions/cses/sorting_searching/1621_distinct_numbers.cpp) · [Notes](notes/cses/1621_distinct_numbers.md) |
| `1084` | [Apartments](https://cses.fi/problemset/task/1084/) | sorting, two pointers, greedy | [C++17](solutions/cses/sorting_searching/1084_apartments.cpp) · [Notes](notes/cses/1084_apartments.md) |
| `1090` | [Ferris Wheel](https://cses.fi/problemset/task/1090/) | greedy, two pointers | [C++17](solutions/cses/sorting_searching/1090_ferris_wheel.cpp) · [Notes](notes/cses/1090_ferris_wheel.md) |
| `1629` | [Movie Festival](https://cses.fi/problemset/task/1629/) | greedy, interval scheduling | [C++17](solutions/cses/sorting_searching/1629_movie_festival.cpp) · [Notes](notes/cses/1629_movie_festival.md) |
| `1643` | [Maximum Subarray Sum](https://cses.fi/problemset/task/1643/) | dynamic programming, Kadane | [C++17](solutions/cses/sorting_searching/1643_maximum_subarray_sum.cpp) · [Notes](notes/cses/1643_maximum_subarray_sum.md) |
| `1620` | [Factory Machines](https://cses.fi/problemset/task/1620/) | binary search, monotone predicate | [C++17](solutions/cses/sorting_searching/1620_factory_machines.cpp) · [Notes](notes/cses/1620_factory_machines.md) |
| `1141` | [Playlist](https://cses.fi/problemset/task/1141/) | sliding window, map | [C++17](solutions/cses/sorting_searching/1141_playlist.cpp) · [Notes](notes/cses/1141_playlist.md) |
| `1661` | [Subarray Sums II](https://cses.fi/problemset/task/1661/) | prefix sums, map | [C++17](solutions/cses/sorting_searching/1661_subarray_sums_ii.cpp) · [Notes](notes/cses/1661_subarray_sums_ii.md) |
| `1091` | [Concert Tickets](https://cses.fi/problemset/task/1091/) | multiset, binary search | [C++17](solutions/cses/sorting_searching/1091_concert_tickets.cpp) · [Notes](notes/cses/1091_concert_tickets.md) |
| `1619` | [Restaurant Customers](https://cses.fi/problemset/task/1619/) | sweep line, sorting | [C++17](solutions/cses/sorting_searching/1619_restaurant_customers.cpp) · [Notes](notes/cses/1619_restaurant_customers.md) |
| `1074` | [Stick Lengths](https://cses.fi/problemset/task/1074/) | sorting, median | [C++17](solutions/cses/sorting_searching/1074_stick_lengths.cpp) · [Notes](notes/cses/1074_stick_lengths.md) |
| `2183` | [Missing Coin Sum](https://cses.fi/problemset/task/2183/) | greedy, coverage invariant | [C++17](solutions/cses/sorting_searching/2183_missing_coin_sum.cpp) · [Notes](notes/cses/2183_missing_coin_sum.md) |
| `2216` | [Collecting Numbers](https://cses.fi/problemset/task/2216/) | inverse permutation, scan | [C++17](solutions/cses/sorting_searching/2216_collecting_numbers.cpp) · [Notes](notes/cses/2216_collecting_numbers.md) |
| `1073` | [Towers](https://cses.fi/problemset/task/1073/) | binary search, greedy | [C++17](solutions/cses/sorting_searching/1073_towers.cpp) · [Notes](notes/cses/1073_towers.md) |
| `1163` | [Traffic Lights](https://cses.fi/problemset/task/1163/) | ordered set, multiset, intervals | [C++17](solutions/cses/sorting_searching/1163_traffic_lights.cpp) · [Notes](notes/cses/1163_traffic_lights.md) |
| `1630` | [Tasks and Deadlines](https://cses.fi/problemset/task/1630/) | greedy, scheduling | [C++17](solutions/cses/sorting_searching/1630_tasks_and_deadlines.cpp) · [Notes](notes/cses/1630_tasks_and_deadlines.md) |
| `1631` | [Reading Books](https://cses.fi/problemset/task/1631/) | greedy, lower bounds | [C++17](solutions/cses/sorting_searching/1631_reading_books.cpp) · [Notes](notes/cses/1631_reading_books.md) |
| `1645` | [Nearest Smaller Values](https://cses.fi/problemset/task/1645/) | monotonic stack | [C++17](solutions/cses/sorting_searching/1645_nearest_smaller_values.cpp) · [Notes](notes/cses/1645_nearest_smaller_values.md) |
| `1660` | [Subarray Sums I](https://cses.fi/problemset/task/1660/) | sliding window | [C++17](solutions/cses/sliding_window/1660_subarray_sums_i.cpp) · [Notes](notes/cses/1660_subarray_sums_i.md) |
| `1662` | [Subarray Divisibility](https://cses.fi/problemset/task/1662/) | prefix sums | [C++17](solutions/cses/prefix_sums/1662_subarray_divisibility.cpp) · [Notes](notes/cses/1662_subarray_divisibility.md) |
| `2428` | [Distinct Values Subarrays II](https://cses.fi/problemset/task/2428/) | sliding window | [C++17](solutions/cses/sliding_window/2428_distinct_values_subarrays_ii.cpp) · [Notes](notes/cses/2428_distinct_values_subarrays_ii.md) |
| `1085` | [Array Division](https://cses.fi/problemset/task/1085/) | binary search | [C++17](solutions/cses/binary_search/1085_array_division.cpp) · [Notes](notes/cses/1085_array_division.md) |
| `1644` | [Maximum Subarray Sum II](https://cses.fi/problemset/task/1644/) | prefix sums | [C++17](solutions/cses/prefix_sums/1644_maximum_subarray_sum_ii.cpp) · [Notes](notes/cses/1644_maximum_subarray_sum_ii.md) |
| `1632` | [Movie Festival II](https://cses.fi/problemset/task/1632/) | greedy | [C++17](solutions/cses/greedy/1632_movie_festival_ii.cpp) · [Notes](notes/cses/1632_movie_festival_ii.md) |
| `1652` | [Forest Queries](https://cses.fi/problemset/task/1652/) | prefix sums | [C++17](solutions/cses/prefix_sums/1652_forest_queries.cpp) · [Notes](notes/cses/1652_forest_queries.md) |

</details>

<details>
<summary><strong>Dynamic Programming</strong> · 18 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1633` | [Dice Combinations](https://cses.fi/problemset/task/1633/) | dynamic programming, counting | [C++17](solutions/cses/dynamic_programming/1633_dice_combinations.cpp) · [Notes](notes/cses/1633_dice_combinations.md) |
| `1634` | [Minimizing Coins](https://cses.fi/problemset/task/1634/) | dynamic programming, unbounded knapsack | [C++17](solutions/cses/dynamic_programming/1634_minimizing_coins.cpp) · [Notes](notes/cses/1634_minimizing_coins.md) |
| `1636` | [Coin Combinations II](https://cses.fi/problemset/task/1636/) | dynamic programming, counting | [C++17](solutions/cses/dynamic_programming/1636_coin_combinations_ii.cpp) · [Notes](notes/cses/1636_coin_combinations_ii.md) |
| `1158` | [Book Shop](https://cses.fi/problemset/task/1158/) | dynamic programming, 0/1 knapsack | [C++17](solutions/cses/dynamic_programming/1158_book_shop.cpp) · [Notes](notes/cses/1158_book_shop.md) |
| `1639` | [Edit Distance](https://cses.fi/problemset/task/1639/) | dynamic programming, strings | [C++17](solutions/cses/dynamic_programming/1639_edit_distance.cpp) · [Notes](notes/cses/1639_edit_distance.md) |
| `1145` | [Increasing Subsequence](https://cses.fi/problemset/task/1145/) | binary search, dynamic programming | [C++17](solutions/cses/dynamic_programming/1145_increasing_subsequence.cpp) · [Notes](notes/cses/1145_increasing_subsequence.md) |
| `1635` | [Coin Combinations I](https://cses.fi/problemset/task/1635/) | dynamic programming, counting | [C++17](solutions/cses/dynamic_programming/1635_coin_combinations_i.cpp) · [Notes](notes/cses/1635_coin_combinations_i.md) |
| `1637` | [Removing Digits](https://cses.fi/problemset/task/1637/) | dynamic programming, digits | [C++17](solutions/cses/dynamic_programming/1637_removing_digits.cpp) · [Notes](notes/cses/1637_removing_digits.md) |
| `1638` | [Grid Paths I](https://cses.fi/problemset/task/1638/) | dynamic programming, grid | [C++17](solutions/cses/dynamic_programming/1638_grid_paths_i.cpp) · [Notes](notes/cses/1638_grid_paths_i.md) |
| `1746` | [Array Description](https://cses.fi/problemset/task/1746/) | dynamic programming, counting | [C++17](solutions/cses/dynamic_programming/1746_array_description.cpp) · [Notes](notes/cses/1746_array_description.md) |
| `1744` | [Rectangle Cutting](https://cses.fi/problemset/task/1744/) | dynamic programming | [C++17](solutions/cses/dynamic_programming/1744_rectangle_cutting.cpp) · [Notes](notes/cses/1744_rectangle_cutting.md) |
| `1745` | [Money Sums](https://cses.fi/problemset/task/1745/) | dynamic programming, subset sum | [C++17](solutions/cses/dynamic_programming/1745_money_sums.cpp) · [Notes](notes/cses/1745_money_sums.md) |
| `1093` | [Two Sets II](https://cses.fi/problemset/task/1093/) | dynamic programming, subset sum, counting | [C++17](solutions/cses/dynamic_programming/1093_two_sets_ii.cpp) · [Notes](notes/cses/1093_two_sets_ii.md) |
| `1140` | [Projects](https://cses.fi/problemset/task/1140/) | dynamic programming, sorting, binary search | [C++17](solutions/cses/dynamic_programming/1140_projects.cpp) · [Notes](notes/cses/1140_projects.md) |
| `2413` | [Counting Towers](https://cses.fi/problemset/task/2413/) | dynamic programming | [C++17](solutions/cses/dynamic_programming/2413_counting_towers.cpp) · [Notes](notes/cses/2413_counting_towers.md) |
| `1097` | [Removal Game](https://cses.fi/problemset/task/1097/) | dynamic programming | [C++17](solutions/cses/dynamic_programming/1097_removal_game.cpp) · [Notes](notes/cses/1097_removal_game.md) |
| `1653` | [Elevator Rides](https://cses.fi/problemset/task/1653/) | bitmask DP | [C++17](solutions/cses/bitmask_dp/1653_elevator_rides.cpp) · [Notes](notes/cses/1653_elevator_rides.md) |
| `2181` | [Counting Tilings](https://cses.fi/problemset/task/2181/) | profile DP | [C++17](solutions/cses/profile_dp/2181_counting_tilings.cpp) · [Notes](notes/cses/2181_counting_tilings.md) |

</details>

<details>
<summary><strong>Graph Algorithms</strong> · 10 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1192` | [Counting Rooms](https://cses.fi/problemset/task/1192/) | graphs, flood fill, iterative DFS | [C++17](solutions/cses/graphs/1192_counting_rooms.cpp) · [Notes](notes/cses/1192_counting_rooms.md) |
| `1668` | [Building Teams](https://cses.fi/problemset/task/1668/) | graphs, BFS, bipartite | [C++17](solutions/cses/graphs/1668_building_teams.cpp) · [Notes](notes/cses/1668_building_teams.md) |
| `1671` | [Shortest Routes I](https://cses.fi/problemset/task/1671/) | graphs, Dijkstra, priority queue | [C++17](solutions/cses/graphs/1671_shortest_routes_i.cpp) · [Notes](notes/cses/1671_shortest_routes_i.md) |
| `1675` | [Road Reparation](https://cses.fi/problemset/task/1675/) | graphs, Kruskal, DSU | [C++17](solutions/cses/graphs/1675_road_reparation.cpp) · [Notes](notes/cses/1675_road_reparation.md) |
| `1679` | [Course Schedule](https://cses.fi/problemset/task/1679/) | graphs, topological sort | [C++17](solutions/cses/graphs/1679_course_schedule.cpp) · [Notes](notes/cses/1679_course_schedule.md) |
| `1672` | [Shortest Routes II](https://cses.fi/problemset/task/1672/) | graphs, shortest path, Floyd–Warshall | [C++17](solutions/cses/graphs/1672_shortest_routes_ii.cpp) · [Notes](notes/cses/1672_shortest_routes_ii.md) |
| `1195` | [Flight Discount](https://cses.fi/problemset/task/1195/) | graphs, shortest path, Dijkstra, state expansion | [C++17](solutions/cses/graphs/1195_flight_discount.cpp) · [Notes](notes/cses/1195_flight_discount.md) |
| `1676` | [Road Construction](https://cses.fi/problemset/task/1676/) | graphs, disjoint set | [C++17](solutions/cses/graphs/1676_road_construction.cpp) · [Notes](notes/cses/1676_road_construction.md) |
| `1681` | [Game Routes](https://cses.fi/problemset/task/1681/) | graphs, dynamic programming, topological sort | [C++17](solutions/cses/graphs/1681_game_routes.cpp) · [Notes](notes/cses/1681_game_routes.md) |
| `1193` | [Labyrinth](https://cses.fi/problemset/task/1193/) | graphs, BFS, grid, path reconstruction | [C++17](solutions/cses/graphs/1193_labyrinth.cpp) · [Notes](notes/cses/1193_labyrinth.md) |

</details>

<details>
<summary><strong>Range Queries</strong> · 10 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1646` | [Static Range Sum Queries](https://cses.fi/problemset/task/1646/) | prefix sums, range queries | [C++17](solutions/cses/range_queries/1646_static_range_sum_queries.cpp) · [Notes](notes/cses/1646_static_range_sum_queries.md) |
| `1648` | [Dynamic Range Sum Queries](https://cses.fi/problemset/task/1648/) | Fenwick tree, range queries | [C++17](solutions/cses/range_queries/1648_dynamic_range_sum_queries.cpp) · [Notes](notes/cses/1648_dynamic_range_sum_queries.md) |
| `1649` | [Dynamic Range Minimum Queries](https://cses.fi/problemset/task/1649/) | segment tree, range queries | [C++17](solutions/cses/range_queries/1649_dynamic_range_minimum_queries.cpp) · [Notes](notes/cses/1649_dynamic_range_minimum_queries.md) |
| `1650` | [Range Xor Queries](https://cses.fi/problemset/task/1650/) | prefix XOR, range queries | [C++17](solutions/cses/range_queries/1650_range_xor_queries.cpp) · [Notes](notes/cses/1650_range_xor_queries.md) |
| `1651` | [Range Update Queries](https://cses.fi/problemset/task/1651/) | Fenwick tree, difference array, range queries | [C++17](solutions/cses/range_queries/1651_range_update_queries.cpp) · [Notes](notes/cses/1651_range_update_queries.md) |
| `1144` | [Salary Queries](https://cses.fi/problemset/task/1144/) | Fenwick tree | [C++17](solutions/cses/fenwick/1144_salary_queries.cpp) · [Notes](notes/cses/1144_salary_queries.md) |
| `1647` | [Static Range Minimum Queries](https://cses.fi/problemset/task/1647/) | sparse table | [C++17](solutions/cses/sparse_table/1647_static_range_minimum_queries.cpp) · [Notes](notes/cses/1647_static_range_minimum_queries.md) |
| `1143` | [Hotel Queries](https://cses.fi/problemset/task/1143/) | segment tree | [C++17](solutions/cses/segment_tree/1143_hotel_queries.cpp) · [Notes](notes/cses/1143_hotel_queries.md) |
| `1749` | [List Removals](https://cses.fi/problemset/task/1749/) | segment tree | [C++17](solutions/cses/segment_tree/1749_list_removals.cpp) · [Notes](notes/cses/1749_list_removals.md) |
| `1137` | [Subtree Queries](https://cses.fi/problemset/task/1137/) | Fenwick tree | [C++17](solutions/cses/fenwick/1137_subtree_queries.cpp) · [Notes](notes/cses/1137_subtree_queries.md) |

</details>

<details>
<summary><strong>Tree Algorithms</strong> · 7 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1674` | [Subordinates](https://cses.fi/problemset/task/1674/) | trees, subtree, iterative traversal | [C++17](solutions/cses/trees/1674_subordinates.cpp) · [Notes](notes/cses/1674_subordinates.md) |
| `1131` | [Tree Diameter](https://cses.fi/problemset/task/1131/) | trees, BFS, diameter | [C++17](solutions/cses/trees/1131_tree_diameter.cpp) · [Notes](notes/cses/1131_tree_diameter.md) |
| `1132` | [Tree Distances I](https://cses.fi/problemset/task/1132/) | trees, BFS, diameter | [C++17](solutions/cses/trees/1132_tree_distances_i.cpp) · [Notes](notes/cses/1132_tree_distances_i.md) |
| `1687` | [Company Queries I](https://cses.fi/problemset/task/1687/) | trees, binary lifting | [C++17](solutions/cses/trees/1687_company_queries_i.cpp) · [Notes](notes/cses/1687_company_queries_i.md) |
| `1133` | [Tree Distances II](https://cses.fi/problemset/task/1133/) | trees | [C++17](solutions/cses/trees/1133_tree_distances_ii.cpp) · [Notes](notes/cses/1133_tree_distances_ii.md) |
| `1135` | [Distance Queries](https://cses.fi/problemset/task/1135/) | trees | [C++17](solutions/cses/trees/1135_distance_queries.cpp) · [Notes](notes/cses/1135_distance_queries.md) |
| `1688` | [Company Queries II](https://cses.fi/problemset/task/1688/) | trees | [C++17](solutions/cses/trees/1688_company_queries_ii.cpp) · [Notes](notes/cses/1688_company_queries_ii.md) |

</details>

<details>
<summary><strong>Mathematics</strong> · 5 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1095` | [Exponentiation](https://cses.fi/problemset/task/1095/) | mathematics, modular arithmetic, binary exponentiation | [C++17](solutions/cses/mathematics/1095_exponentiation.cpp) · [Notes](notes/cses/1095_exponentiation.md) |
| `1713` | [Counting Divisors](https://cses.fi/problemset/task/1713/) | mathematics, divisors, sieve | [C++17](solutions/cses/mathematics/1713_counting_divisors.cpp) · [Notes](notes/cses/1713_counting_divisors.md) |
| `1081` | [Common Divisors](https://cses.fi/problemset/task/1081/) | mathematics, divisors, sieve | [C++17](solutions/cses/mathematics/1081_common_divisors.cpp) · [Notes](notes/cses/1081_common_divisors.md) |
| `1712` | [Exponentiation II](https://cses.fi/problemset/task/1712/) | mathematics, modular arithmetic, binary exponentiation, Fermat | [C++17](solutions/cses/mathematics/1712_exponentiation_ii.cpp) · [Notes](notes/cses/1712_exponentiation_ii.md) |
| `1722` | [Fibonacci Numbers](https://cses.fi/problemset/task/1722/) | number theory | [C++17](solutions/cses/number_theory/1722_fibonacci_numbers.cpp) · [Notes](notes/cses/1722_fibonacci_numbers.md) |

</details>

<details>
<summary><strong>String Algorithms</strong> · 3 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `1753` | [String Matching](https://cses.fi/problemset/task/1753/) | strings, KMP, prefix function | [C++17](solutions/cses/strings/1753_string_matching.cpp) · [Notes](notes/cses/1753_string_matching.md) |
| `1732` | [Finding Borders](https://cses.fi/problemset/task/1732/) | strings, prefix function, KMP | [C++17](solutions/cses/strings/1732_finding_borders.cpp) · [Notes](notes/cses/1732_finding_borders.md) |
| `1733` | [Finding Periods](https://cses.fi/problemset/task/1733/) | strings, Z-function, periods | [C++17](solutions/cses/strings/1733_finding_periods.cpp) · [Notes](notes/cses/1733_finding_periods.md) |

</details>

## Codeforces

Solutions from the [Codeforces problemset](https://codeforces.com/problemset), ordered by contest number and problem letter.

<details>
<summary><strong>Codeforces Problems</strong> · 114 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `4A` | [Watermelon](https://codeforces.com/problemset/problem/4/A) | arithmetic, conditions | [C++17](solutions/codeforces/implementation/4A_watermelon.cpp) · [Notes](notes/codeforces/4A_watermelon.md) |
| `25A` | [IQ test](https://codeforces.com/problemset/problem/25/A) | counting | [C++17](solutions/codeforces/counting/25A_iq_test.cpp) · [Notes](notes/codeforces/25A_iq_test.md) |
| `41A` | [Translation](https://codeforces.com/problemset/problem/41/A) | strings | [C++17](solutions/codeforces/strings/41A_translation.cpp) · [Notes](notes/codeforces/41A_translation.md) |
| `50A` | [Domino Piling](https://codeforces.com/problemset/problem/50/A) | mathematics, constructive | [C++17](solutions/codeforces/mathematics/50A_domino_piling.cpp) · [Notes](notes/codeforces/50A_domino_piling.md) |
| `59A` | [Word](https://codeforces.com/problemset/problem/59/A) | strings, counting | [C++17](solutions/codeforces/strings/59A_word.cpp) · [Notes](notes/codeforces/59A_word.md) |
| `61A` | [Ultra-Fast Mathematician](https://codeforces.com/problemset/problem/61/A) | strings | [C++17](solutions/codeforces/strings/61A_ultra_fast_mathematician.cpp) · [Notes](notes/codeforces/61A_ultra_fast_mathematician.md) |
| `69A` | [Young Physicist](https://codeforces.com/problemset/problem/69/A) | mathematics | [C++17](solutions/codeforces/mathematics/69A_young_physicist.cpp) · [Notes](notes/codeforces/69A_young_physicist.md) |
| `71A` | [Way Too Long Words](https://codeforces.com/problemset/problem/71/A) | strings, implementation | [C++17](solutions/codeforces/implementation/71A_way_too_long_words.cpp) · [Notes](notes/codeforces/71A_way_too_long_words.md) |
| `96A` | [Football](https://codeforces.com/problemset/problem/96/A) | strings | [C++17](solutions/codeforces/strings/96A_football.cpp) · [Notes](notes/codeforces/96A_football.md) |
| `110A` | [Nearly Lucky Number](https://codeforces.com/problemset/problem/110/A) | strings | [C++17](solutions/codeforces/strings/110A_nearly_lucky_number.cpp) · [Notes](notes/codeforces/110A_nearly_lucky_number.md) |
| `112A` | [Petya and Strings](https://codeforces.com/problemset/problem/112/A) | strings, implementation | [C++17](solutions/codeforces/strings/112A_petya_and_strings.cpp) · [Notes](notes/codeforces/112A_petya_and_strings.md) |
| `116A` | [Tram](https://codeforces.com/problemset/problem/116/A) | implementation, prefix sum | [C++17](solutions/codeforces/implementation/116A_tram.cpp) · [Notes](notes/codeforces/116A_tram.md) |
| `122A` | [Lucky Division](https://codeforces.com/problemset/problem/122/A) | enumeration | [C++17](solutions/codeforces/enumeration/122A_lucky_division.cpp) · [Notes](notes/codeforces/122A_lucky_division.md) |
| `133A` | [HQ9+](https://codeforces.com/problemset/problem/133/A) | strings | [C++17](solutions/codeforces/strings/133A_hq9.cpp) · [Notes](notes/codeforces/133A_hq9.md) |
| `136A` | [Presents](https://codeforces.com/problemset/problem/136/A) | arrays | [C++17](solutions/codeforces/arrays/136A_presents.cpp) · [Notes](notes/codeforces/136A_presents.md) |
| `144A` | [Arrival of the General](https://codeforces.com/problemset/problem/144/A) | greedy | [C++17](solutions/codeforces/greedy/144A_arrival_of_the_general.cpp) · [Notes](notes/codeforces/144A_arrival_of_the_general.md) |
| `148A` | [Insomnia cure](https://codeforces.com/problemset/problem/148/A) | enumeration | [C++17](solutions/codeforces/enumeration/148A_insomnia_cure.cpp) · [Notes](notes/codeforces/148A_insomnia_cure.md) |
| `151A` | [Soft Drinking](https://codeforces.com/problemset/problem/151/A) | mathematics | [C++17](solutions/codeforces/mathematics/151A_soft_drinking.cpp) · [Notes](notes/codeforces/151A_soft_drinking.md) |
| `155A` | [I_love_%username%](https://codeforces.com/problemset/problem/155/A) | arrays | [C++17](solutions/codeforces/arrays/155A_i_love_username.cpp) · [Notes](notes/codeforces/155A_i_love_username.md) |
| `158A` | [Next Round](https://codeforces.com/problemset/problem/158/A) | arrays, conditions | [C++17](solutions/codeforces/implementation/158A_next_round.cpp) · [Notes](notes/codeforces/158A_next_round.md) |
| `160A` | [Twins](https://codeforces.com/problemset/problem/160/A) | greedy | [C++17](solutions/codeforces/greedy/160A_twins.cpp) · [Notes](notes/codeforces/160A_twins.md) |
| `200B` | [Drinks](https://codeforces.com/problemset/problem/200/B) | mathematics | [C++17](solutions/codeforces/mathematics/200B_drinks.cpp) · [Notes](notes/codeforces/200B_drinks.md) |
| `228A` | [Is your horseshoe on the other hoof?](https://codeforces.com/problemset/problem/228/A) | counting | [C++17](solutions/codeforces/counting/228A_is_your_horseshoe_on_the_other_hoof.cpp) · [Notes](notes/codeforces/228A_is_your_horseshoe_on_the_other_hoof.md) |
| `230A` | [Dragons](https://codeforces.com/problemset/problem/230/A) | greedy | [C++17](solutions/codeforces/greedy/230A_dragons.cpp) · [Notes](notes/codeforces/230A_dragons.md) |
| `231A` | [Team](https://codeforces.com/problemset/problem/231/A) | counting, implementation | [C++17](solutions/codeforces/implementation/231A_team.cpp) · [Notes](notes/codeforces/231A_team.md) |
| `236A` | [Boy or Girl](https://codeforces.com/problemset/problem/236/A) | strings | [C++17](solutions/codeforces/strings/236A_boy_or_girl.cpp) · [Notes](notes/codeforces/236A_boy_or_girl.md) |
| `266A` | [Stones on the Table](https://codeforces.com/problemset/problem/266/A) | strings | [C++17](solutions/codeforces/strings/266A_stones_on_the_table.cpp) · [Notes](notes/codeforces/266A_stones_on_the_table.md) |
| `266B` | [Queue at the School](https://codeforces.com/problemset/problem/266/B) | simulation | [C++17](solutions/codeforces/simulation/266B_queue_at_the_school.cpp) · [Notes](notes/codeforces/266B_queue_at_the_school.md) |
| `268A` | [Games](https://codeforces.com/problemset/problem/268/A) | enumeration | [C++17](solutions/codeforces/enumeration/268A_games.cpp) · [Notes](notes/codeforces/268A_games.md) |
| `271A` | [Beautiful Year](https://codeforces.com/problemset/problem/271/A) | enumeration | [C++17](solutions/codeforces/enumeration/271A_beautiful_year.cpp) · [Notes](notes/codeforces/271A_beautiful_year.md) |
| `281A` | [Word Capitalization](https://codeforces.com/problemset/problem/281/A) | strings, implementation | [C++17](solutions/codeforces/strings/281A_word_capitalization.cpp) · [Notes](notes/codeforces/281A_word_capitalization.md) |
| `282A` | [Bit++](https://codeforces.com/problemset/problem/282/A) | implementation, strings | [C++17](solutions/codeforces/implementation/282A_bit_plus_plus.cpp) · [Notes](notes/codeforces/282A_bit_plus_plus.md) |
| `318A` | [Even Odds](https://codeforces.com/problemset/problem/318/A) | mathematics | [C++17](solutions/codeforces/mathematics/318A_even_odds.cpp) · [Notes](notes/codeforces/318A_even_odds.md) |
| `337A` | [Puzzles](https://codeforces.com/problemset/problem/337/A) | sorting | [C++17](solutions/codeforces/sorting/337A_puzzles.cpp) · [Notes](notes/codeforces/337A_puzzles.md) |
| `339A` | [Helpful Maths](https://codeforces.com/problemset/problem/339/A) | strings, sorting | [C++17](solutions/codeforces/strings/339A_helpful_maths.cpp) · [Notes](notes/codeforces/339A_helpful_maths.md) |
| `344A` | [Magnets](https://codeforces.com/problemset/problem/344/A) | simulation | [C++17](solutions/codeforces/simulation/344A_magnets.cpp) · [Notes](notes/codeforces/344A_magnets.md) |
| `405A` | [Gravity Flip](https://codeforces.com/problemset/problem/405/A) | sorting | [C++17](solutions/codeforces/sorting/405A_gravity_flip.cpp) · [Notes](notes/codeforces/405A_gravity_flip.md) |
| `432A` | [Choosing Teams](https://codeforces.com/problemset/problem/432/A) | counting | [C++17](solutions/codeforces/counting/432A_choosing_teams.cpp) · [Notes](notes/codeforces/432A_choosing_teams.md) |
| `443A` | [Anton and Letters](https://codeforces.com/problemset/problem/443/A) | strings | [C++17](solutions/codeforces/strings/443A_anton_and_letters.cpp) · [Notes](notes/codeforces/443A_anton_and_letters.md) |
| `467A` | [George and Accommodation](https://codeforces.com/problemset/problem/467/A) | counting | [C++17](solutions/codeforces/counting/467A_george_and_accommodation.cpp) · [Notes](notes/codeforces/467A_george_and_accommodation.md) |
| `469A` | [I Wanna Be the Guy](https://codeforces.com/problemset/problem/469/A) | sets | [C++17](solutions/codeforces/sets/469A_i_wanna_be_the_guy.cpp) · [Notes](notes/codeforces/469A_i_wanna_be_the_guy.md) |
| `472A` | [Design Tutorial: Learn from Math](https://codeforces.com/problemset/problem/472/A) | constructive | [C++17](solutions/codeforces/constructive/472A_design_tutorial_learn_from_math.cpp) · [Notes](notes/codeforces/472A_design_tutorial_learn_from_math.md) |
| `486A` | [Calculating Function](https://codeforces.com/problemset/problem/486/A) | mathematics | [C++17](solutions/codeforces/mathematics/486A_calculating_function.cpp) · [Notes](notes/codeforces/486A_calculating_function.md) |
| `492A` | [Vanya and Cubes](https://codeforces.com/problemset/problem/492/A) | simulation | [C++17](solutions/codeforces/simulation/492A_vanya_and_cubes.cpp) · [Notes](notes/codeforces/492A_vanya_and_cubes.md) |
| `520A` | [Pangram](https://codeforces.com/problemset/problem/520/A) | strings | [C++17](solutions/codeforces/strings/520A_pangram.cpp) · [Notes](notes/codeforces/520A_pangram.md) |
| `546A` | [Soldier and Bananas](https://codeforces.com/problemset/problem/546/A) | mathematics, arithmetic series | [C++17](solutions/codeforces/mathematics/546A_soldier_and_bananas.cpp) · [Notes](notes/codeforces/546A_soldier_and_bananas.md) |
| `581A` | [Vasya the Hipster](https://codeforces.com/problemset/problem/581/A) | mathematics | [C++17](solutions/codeforces/mathematics/581A_vasya_the_hipster.cpp) · [Notes](notes/codeforces/581A_vasya_the_hipster.md) |
| `617A` | [Elephant](https://codeforces.com/problemset/problem/617/A) | mathematics, greedy | [C++17](solutions/codeforces/mathematics/617A_elephant.cpp) · [Notes](notes/codeforces/617A_elephant.md) |
| `677A` | [Vanya and Fence](https://codeforces.com/problemset/problem/677/A) | implementation | [C++17](solutions/codeforces/implementation/677A_vanya_and_fence.cpp) · [Notes](notes/codeforces/677A_vanya_and_fence.md) |
| `703A` | [Mishka and Game](https://codeforces.com/problemset/problem/703/A) | simulation | [C++17](solutions/codeforces/simulation/703A_mishka_and_game.cpp) · [Notes](notes/codeforces/703A_mishka_and_game.md) |
| `705A` | [Hulk](https://codeforces.com/problemset/problem/705/A) | strings | [C++17](solutions/codeforces/strings/705A_hulk.cpp) · [Notes](notes/codeforces/705A_hulk.md) |
| `731A` | [Night at the Museum](https://codeforces.com/problemset/problem/731/A) | greedy | [C++17](solutions/codeforces/greedy/731A_night_at_the_museum.cpp) · [Notes](notes/codeforces/731A_night_at_the_museum.md) |
| `732A` | [Buy a Shovel](https://codeforces.com/problemset/problem/732/A) | enumeration | [C++17](solutions/codeforces/enumeration/732A_buy_a_shovel.cpp) · [Notes](notes/codeforces/732A_buy_a_shovel.md) |
| `734A` | [Anton and Danik](https://codeforces.com/problemset/problem/734/A) | counting | [C++17](solutions/codeforces/counting/734A_anton_and_danik.cpp) · [Notes](notes/codeforces/734A_anton_and_danik.md) |
| `758A` | [Holiday Of Equality](https://codeforces.com/problemset/problem/758/A) | greedy | [C++17](solutions/codeforces/greedy/758A_holiday_of_equality.cpp) · [Notes](notes/codeforces/758A_holiday_of_equality.md) |
| `791A` | [Bear and Big Brother](https://codeforces.com/problemset/problem/791/A) | simulation | [C++17](solutions/codeforces/simulation/791A_bear_and_big_brother.cpp) · [Notes](notes/codeforces/791A_bear_and_big_brother.md) |
| `977A` | [Wrong Subtraction](https://codeforces.com/problemset/problem/977/A) | implementation, digits | [C++17](solutions/codeforces/implementation/977A_wrong_subtraction.cpp) · [Notes](notes/codeforces/977A_wrong_subtraction.md) |
| `996A` | [Hit the Lottery](https://codeforces.com/problemset/problem/996/A) | greedy | [C++17](solutions/codeforces/greedy/996A_hit_the_lottery.cpp) · [Notes](notes/codeforces/996A_hit_the_lottery.md) |
| `1030A` | [In Search of an Easy Problem](https://codeforces.com/problemset/problem/1030/A) | implementation | [C++17](solutions/codeforces/implementation/1030A_in_search_of_an_easy_problem.cpp) · [Notes](notes/codeforces/1030A_in_search_of_an_easy_problem.md) |
| `1097A` | [Gennady and a Card Game](https://codeforces.com/problemset/problem/1097/A) | strings | [C++17](solutions/codeforces/strings/1097A_gennady_and_a_card_game.cpp) · [Notes](notes/codeforces/1097A_gennady_and_a_card_game.md) |
| `1154A` | [Restoring Three Numbers](https://codeforces.com/problemset/problem/1154/A) | mathematics | [C++17](solutions/codeforces/mathematics/1154A_restoring_three_numbers.cpp) · [Notes](notes/codeforces/1154A_restoring_three_numbers.md) |
| `1294A` | [Collecting Coins](https://codeforces.com/problemset/problem/1294/A) | mathematics | [C++17](solutions/codeforces/mathematics/1294A_collecting_coins.cpp) · [Notes](notes/codeforces/1294A_collecting_coins.md) |
| `1328A` | [Divisibility Problem](https://codeforces.com/problemset/problem/1328/A) | mathematics | [C++17](solutions/codeforces/mathematics/1328A_divisibility_problem.cpp) · [Notes](notes/codeforces/1328A_divisibility_problem.md) |
| `1343A` | [Candies](https://codeforces.com/problemset/problem/1343/A) | mathematics | [C++17](solutions/codeforces/mathematics/1343A_candies.cpp) · [Notes](notes/codeforces/1343A_candies.md) |
| `1343B` | [Balanced Array](https://codeforces.com/problemset/problem/1343/B) | constructive | [C++17](solutions/codeforces/constructive/1343B_balanced_array.cpp) · [Notes](notes/codeforces/1343B_balanced_array.md) |
| `1352A` | [Sum of Round Numbers](https://codeforces.com/problemset/problem/1352/A) | mathematics | [C++17](solutions/codeforces/mathematics/1352A_sum_of_round_numbers.cpp) · [Notes](notes/codeforces/1352A_sum_of_round_numbers.md) |
| `1353A` | [Most Unstable Array](https://codeforces.com/problemset/problem/1353/A) | mathematics | [C++17](solutions/codeforces/mathematics/1353A_most_unstable_array.cpp) · [Notes](notes/codeforces/1353A_most_unstable_array.md) |
| `1353B` | [Two Arrays And Swaps](https://codeforces.com/problemset/problem/1353/B) | greedy | [C++17](solutions/codeforces/greedy/1353B_two_arrays_and_swaps.cpp) · [Notes](notes/codeforces/1353B_two_arrays_and_swaps.md) |
| `1360A` | [Minimal Square](https://codeforces.com/problemset/problem/1360/A) | geometry | [C++17](solutions/codeforces/geometry/1360A_minimal_square.cpp) · [Notes](notes/codeforces/1360A_minimal_square.md) |
| `1360B` | [Honest Coach](https://codeforces.com/problemset/problem/1360/B) | sorting | [C++17](solutions/codeforces/sorting/1360B_honest_coach.cpp) · [Notes](notes/codeforces/1360B_honest_coach.md) |
| `1367A` | [Short Substrings](https://codeforces.com/problemset/problem/1367/A) | strings | [C++17](solutions/codeforces/strings/1367A_short_substrings.cpp) · [Notes](notes/codeforces/1367A_short_substrings.md) |
| `1367B` | [Even Array](https://codeforces.com/problemset/problem/1367/B) | greedy | [C++17](solutions/codeforces/greedy/1367B_even_array.cpp) · [Notes](notes/codeforces/1367B_even_array.md) |
| `1367C` | [Social Distance](https://codeforces.com/problemset/problem/1367/C) | greedy | [C++17](solutions/codeforces/greedy/1367C_social_distance.cpp) · [Notes](notes/codeforces/1367C_social_distance.md) |
| `1374A` | [Required Remainder](https://codeforces.com/problemset/problem/1374/A) | mathematics | [C++17](solutions/codeforces/mathematics/1374A_required_remainder.cpp) · [Notes](notes/codeforces/1374A_required_remainder.md) |
| `1374B` | [Multiply by 2, divide by 6](https://codeforces.com/problemset/problem/1374/B) | number theory | [C++17](solutions/codeforces/number_theory/1374B_multiply_by_2_divide_by_6.cpp) · [Notes](notes/codeforces/1374B_multiply_by_2_divide_by_6.md) |
| `1399A` | [Remove Smallest](https://codeforces.com/problemset/problem/1399/A) | sorting | [C++17](solutions/codeforces/sorting/1399A_remove_smallest.cpp) · [Notes](notes/codeforces/1399A_remove_smallest.md) |
| `1399B` | [Gifts Fixing](https://codeforces.com/problemset/problem/1399/B) | greedy | [C++17](solutions/codeforces/greedy/1399B_gifts_fixing.cpp) · [Notes](notes/codeforces/1399B_gifts_fixing.md) |
| `1399C` | [Boats Competition](https://codeforces.com/problemset/problem/1399/C) | two pointers | [C++17](solutions/codeforces/two_pointers/1399C_boats_competition.cpp) · [Notes](notes/codeforces/1399C_boats_competition.md) |
| `1409A` | [Yet Another Two Integers Problem](https://codeforces.com/problemset/problem/1409/A) | mathematics | [C++17](solutions/codeforces/mathematics/1409A_yet_another_two_integers_problem.cpp) · [Notes](notes/codeforces/1409A_yet_another_two_integers_problem.md) |
| `1472A` | [Cards for Friends](https://codeforces.com/problemset/problem/1472/A) | mathematics | [C++17](solutions/codeforces/mathematics/1472A_cards_for_friends.cpp) · [Notes](notes/codeforces/1472A_cards_for_friends.md) |
| `1472B` | [Fair Division](https://codeforces.com/problemset/problem/1472/B) | mathematics | [C++17](solutions/codeforces/mathematics/1472B_fair_division.cpp) · [Notes](notes/codeforces/1472B_fair_division.md) |
| `1472C` | [Long Jumps](https://codeforces.com/problemset/problem/1472/C) | dynamic programming | [C++17](solutions/codeforces/dynamic_programming/1472C_long_jumps.cpp) · [Notes](notes/codeforces/1472C_long_jumps.md) |
| `1520A` | [Do Not Be Distracted!](https://codeforces.com/problemset/problem/1520/A) | strings | [C++17](solutions/codeforces/strings/1520A_do_not_be_distracted.cpp) · [Notes](notes/codeforces/1520A_do_not_be_distracted.md) |
| `1520B` | [Ordinary Numbers](https://codeforces.com/problemset/problem/1520/B) | enumeration | [C++17](solutions/codeforces/enumeration/1520B_ordinary_numbers.cpp) · [Notes](notes/codeforces/1520B_ordinary_numbers.md) |
| `1520D` | [Same Differences](https://codeforces.com/problemset/problem/1520/D) | counting | [C++17](solutions/codeforces/counting/1520D_same_differences.cpp) · [Notes](notes/codeforces/1520D_same_differences.md) |
| `1535A` | [Fair Playoff](https://codeforces.com/problemset/problem/1535/A) | mathematics | [C++17](solutions/codeforces/mathematics/1535A_fair_playoff.cpp) · [Notes](notes/codeforces/1535A_fair_playoff.md) |
| `1542A` | [Odd Set](https://codeforces.com/problemset/problem/1542/A) | counting | [C++17](solutions/codeforces/counting/1542A_odd_set.cpp) · [Notes](notes/codeforces/1542A_odd_set.md) |
| `1547A` | [Shortest Path with Obstacle](https://codeforces.com/problemset/problem/1547/A) | geometry | [C++17](solutions/codeforces/geometry/1547A_shortest_path_with_obstacle.cpp) · [Notes](notes/codeforces/1547A_shortest_path_with_obstacle.md) |
| `1547B` | [Alphabetical Strings](https://codeforces.com/problemset/problem/1547/B) | strings | [C++17](solutions/codeforces/strings/1547B_alphabetical_strings.cpp) · [Notes](notes/codeforces/1547B_alphabetical_strings.md) |
| `1560A` | [Dislike of Threes](https://codeforces.com/problemset/problem/1560/A) | enumeration | [C++17](solutions/codeforces/enumeration/1560A_dislike_of_threes.cpp) · [Notes](notes/codeforces/1560A_dislike_of_threes.md) |
| `1560B` | [Who's Opposite?](https://codeforces.com/problemset/problem/1560/B) | mathematics | [C++17](solutions/codeforces/mathematics/1560B_who_s_opposite.cpp) · [Notes](notes/codeforces/1560B_who_s_opposite.md) |
| `1560C` | [Infinity Table](https://codeforces.com/problemset/problem/1560/C) | mathematics | [C++17](solutions/codeforces/mathematics/1560C_infinity_table.cpp) · [Notes](notes/codeforces/1560C_infinity_table.md) |
| `1582A` | [Luntik and Concerts](https://codeforces.com/problemset/problem/1582/A) | mathematics | [C++17](solutions/codeforces/mathematics/1582A_luntik_and_concerts.cpp) · [Notes](notes/codeforces/1582A_luntik_and_concerts.md) |
| `1582B` | [Luntik and Subsequences](https://codeforces.com/problemset/problem/1582/B) | counting | [C++17](solutions/codeforces/counting/1582B_luntik_and_subsequences.cpp) · [Notes](notes/codeforces/1582B_luntik_and_subsequences.md) |
| `1593A` | [Elections](https://codeforces.com/problemset/problem/1593/A) | mathematics | [C++17](solutions/codeforces/mathematics/1593A_elections.cpp) · [Notes](notes/codeforces/1593A_elections.md) |
| `1607A` | [Linear Keyboard](https://codeforces.com/problemset/problem/1607/A) | strings | [C++17](solutions/codeforces/strings/1607A_linear_keyboard.cpp) · [Notes](notes/codeforces/1607A_linear_keyboard.md) |
| `1607B` | [Odd Grasshopper](https://codeforces.com/problemset/problem/1607/B) | mathematics | [C++17](solutions/codeforces/mathematics/1607B_odd_grasshopper.cpp) · [Notes](notes/codeforces/1607B_odd_grasshopper.md) |
| `1619A` | [Square String?](https://codeforces.com/problemset/problem/1619/A) | strings | [C++17](solutions/codeforces/strings/1619A_square_string.cpp) · [Notes](notes/codeforces/1619A_square_string.md) |
| `1624A` | [Plus One on the Subset](https://codeforces.com/problemset/problem/1624/A) | greedy | [C++17](solutions/codeforces/greedy/1624A_plus_one_on_the_subset.cpp) · [Notes](notes/codeforces/1624A_plus_one_on_the_subset.md) |
| `1624B` | [Make AP](https://codeforces.com/problemset/problem/1624/B) | mathematics | [C++17](solutions/codeforces/mathematics/1624B_make_ap.cpp) · [Notes](notes/codeforces/1624B_make_ap.md) |
| `1633A` | [Div. 7](https://codeforces.com/problemset/problem/1633/A) | constructive | [C++17](solutions/codeforces/constructive/1633A_div_7.cpp) · [Notes](notes/codeforces/1633A_div_7.md) |
| `1669A` | [Division?](https://codeforces.com/problemset/problem/1669/A) | implementation | [C++17](solutions/codeforces/implementation/1669A_division.cpp) · [Notes](notes/codeforces/1669A_division.md) |
| `1669B` | [Triple](https://codeforces.com/problemset/problem/1669/B) | counting | [C++17](solutions/codeforces/counting/1669B_triple.cpp) · [Notes](notes/codeforces/1669B_triple.md) |
| `1669C` | [Odd/Even Increments](https://codeforces.com/problemset/problem/1669/C) | invariants | [C++17](solutions/codeforces/invariants/1669C_odd_even_increments.cpp) · [Notes](notes/codeforces/1669C_odd_even_increments.md) |
| `1676A` | [Lucky?](https://codeforces.com/problemset/problem/1676/A) | strings | [C++17](solutions/codeforces/strings/1676A_lucky.cpp) · [Notes](notes/codeforces/1676A_lucky.md) |
| `1676B` | [Equal Candies](https://codeforces.com/problemset/problem/1676/B) | greedy | [C++17](solutions/codeforces/greedy/1676B_equal_candies.cpp) · [Notes](notes/codeforces/1676B_equal_candies.md) |
| `1676C` | [Most Similar Words](https://codeforces.com/problemset/problem/1676/C) | enumeration | [C++17](solutions/codeforces/enumeration/1676C_most_similar_words.cpp) · [Notes](notes/codeforces/1676C_most_similar_words.md) |
| `1676D` | [X-Sum](https://codeforces.com/problemset/problem/1676/D) | prefix sums | [C++17](solutions/codeforces/prefix_sums/1676D_x_sum.cpp) · [Notes](notes/codeforces/1676D_x_sum.md) |
| `1692A` | [Marathon](https://codeforces.com/problemset/problem/1692/A) | counting | [C++17](solutions/codeforces/counting/1692A_marathon.cpp) · [Notes](notes/codeforces/1692A_marathon.md) |
| `1692B` | [All Distinct](https://codeforces.com/problemset/problem/1692/B) | greedy | [C++17](solutions/codeforces/greedy/1692B_all_distinct.cpp) · [Notes](notes/codeforces/1692B_all_distinct.md) |
| `1692C` | [Where's the Bishop?](https://codeforces.com/problemset/problem/1692/C) | grid | [C++17](solutions/codeforces/grid/1692C_where_s_the_bishop.cpp) · [Notes](notes/codeforces/1692C_where_s_the_bishop.md) |
| `1703A` | [YES or YES?](https://codeforces.com/problemset/problem/1703/A) | strings | [C++17](solutions/codeforces/strings/1703A_yes_or_yes.cpp) · [Notes](notes/codeforces/1703A_yes_or_yes.md) |
| `1703B` | [ICPC Balloons](https://codeforces.com/problemset/problem/1703/B) | counting | [C++17](solutions/codeforces/counting/1703B_icpc_balloons.cpp) · [Notes](notes/codeforces/1703B_icpc_balloons.md) |
| `1703C` | [Cypher](https://codeforces.com/problemset/problem/1703/C) | simulation | [C++17](solutions/codeforces/simulation/1703C_cypher.cpp) · [Notes](notes/codeforces/1703C_cypher.md) |

</details>

## AtCoder

Solutions from [AtCoder](https://atcoder.jp/), grouped by contest series. ABC sections use contest-number ranges for easier navigation.

<details>
<summary><strong>Educational DP Contest</strong> · 10 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `DP A` | [Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a) | dynamic programming, shortest path in DAG | [C++17](solutions/atcoder/educational_dp/dp_a_frog_1.cpp) · [Notes](notes/atcoder/dp_a_frog_1.md) |
| `DP B` | [Frog 2](https://atcoder.jp/contests/dp/tasks/dp_b) | dynamic programming, bounded transitions | [C++17](solutions/atcoder/educational_dp/dp_b_frog_2.cpp) · [Notes](notes/atcoder/dp_b_frog_2.md) |
| `DP C` | [Vacation](https://atcoder.jp/contests/dp/tasks/dp_c) | dynamic programming, state compression | [C++17](solutions/atcoder/educational_dp/dp_c_vacation.cpp) · [Notes](notes/atcoder/dp_c_vacation.md) |
| `DP D` | [Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d) | dynamic programming, knapsack | [C++17](solutions/atcoder/dynamic_programming/dp_d_knapsack_1.cpp) · [Notes](notes/atcoder/dp_d_knapsack_1.md) |
| `DP E` | [Knapsack 2](https://atcoder.jp/contests/dp/tasks/dp_e) | dynamic programming, knapsack | [C++17](solutions/atcoder/dynamic_programming/dp_e_knapsack_2.cpp) · [Notes](notes/atcoder/dp_e_knapsack_2.md) |
| `DP F` | [LCS](https://atcoder.jp/contests/dp/tasks/dp_f) | dynamic programming, strings, reconstruction | [C++17](solutions/atcoder/dynamic_programming/dp_f_lcs.cpp) · [Notes](notes/atcoder/dp_f_lcs.md) |
| `DP G` | [Longest Path](https://atcoder.jp/contests/dp/tasks/dp_g) | dynamic programming, graphs, topological sort | [C++17](solutions/atcoder/dynamic_programming/dp_g_longest_path.cpp) · [Notes](notes/atcoder/dp_g_longest_path.md) |
| `DP H` | [Grid 1](https://atcoder.jp/contests/dp/tasks/dp_h) | dynamic programming, grid | [C++17](solutions/atcoder/dynamic_programming/dp_h_grid_1.cpp) · [Notes](notes/atcoder/dp_h_grid_1.md) |
| `DP I` | [Coins](https://atcoder.jp/contests/dp/tasks/dp_i) | dynamic programming, probability | [C++17](solutions/atcoder/dynamic_programming/dp_i_coins.cpp) · [Notes](notes/atcoder/dp_i_coins.md) |
| `DP K` | [Stones](https://atcoder.jp/contests/dp/tasks/dp_k) | dynamic programming, game theory | [C++17](solutions/atcoder/dynamic_programming/dp_k_stones.cpp) · [Notes](notes/atcoder/dp_k_stones.md) |

</details>

<details>
<summary><strong>AtCoder Beginner Contest 001–099</strong> · 15 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `ABC049 C` | [Daydream](https://atcoder.jp/contests/abc049/tasks/arc065_a) | dynamic programming | [C++17](solutions/atcoder/dynamic_programming/abc049_c_daydream.cpp) · [Notes](notes/atcoder/abc049_c_daydream.md) |
| `ABC081 A` | [Placing Marbles](https://atcoder.jp/contests/abc081/tasks/abc081_a) | implementation | [C++17](solutions/atcoder/implementation/abc081_a_placing_marbles.cpp) · [Notes](notes/atcoder/abc081_a_placing_marbles.md) |
| `ABC081 B` | [Shift only](https://atcoder.jp/contests/abc081/tasks/abc081_b) | implementation | [C++17](solutions/atcoder/implementation/abc081_b_shift_only.cpp) · [Notes](notes/atcoder/abc081_b_shift_only.md) |
| `ABC083 B` | [Some Sums](https://atcoder.jp/contests/abc083/tasks/abc083_b) | implementation | [C++17](solutions/atcoder/implementation/abc083_b_some_sums.cpp) · [Notes](notes/atcoder/abc083_b_some_sums.md) |
| `ABC085 B` | [Kagami Mochi](https://atcoder.jp/contests/abc085/tasks/abc085_b) | implementation | [C++17](solutions/atcoder/implementation/abc085_b_kagami_mochi.cpp) · [Notes](notes/atcoder/abc085_b_kagami_mochi.md) |
| `ABC086 A` | [Product](https://atcoder.jp/contests/abc086/tasks/abc086_a) | implementation | [C++17](solutions/atcoder/implementation/abc086_a_product.cpp) · [Notes](notes/atcoder/abc086_a_product.md) |
| `ABC086 C` | [Traveling](https://atcoder.jp/contests/abc086/tasks/arc089_a) | implementation | [C++17](solutions/atcoder/implementation/abc086_c_traveling.cpp) · [Notes](notes/atcoder/abc086_c_traveling.md) |
| `ABC087 B` | [Coins](https://atcoder.jp/contests/abc087/tasks/abc087_b) | implementation | [C++17](solutions/atcoder/implementation/abc087_b_coins.cpp) · [Notes](notes/atcoder/abc087_b_coins.md) |
| `ABC087 C` | [Candies](https://atcoder.jp/contests/abc087/tasks/arc090_a) | prefix sums | [C++17](solutions/atcoder/prefix_sums/abc087_c_candies.cpp) · [Notes](notes/atcoder/abc087_c_candies.md) |
| `ABC088 B` | [Card Game for Two](https://atcoder.jp/contests/abc088/tasks/abc088_b) | implementation | [C++17](solutions/atcoder/implementation/abc088_b_card_game_for_two.cpp) · [Notes](notes/atcoder/abc088_b_card_game_for_two.md) |
| `ABC088 C` | [Takahashi's Information](https://atcoder.jp/contests/abc088/tasks/abc088_c) | implementation | [C++17](solutions/atcoder/implementation/abc088_c_takahashi_s_information.cpp) · [Notes](notes/atcoder/abc088_c_takahashi_s_information.md) |
| `ABC093 C` | [Same Integers](https://atcoder.jp/contests/abc093/tasks/arc094_a) | implementation | [C++17](solutions/atcoder/implementation/abc093_c_same_integers.cpp) · [Notes](notes/atcoder/abc093_c_same_integers.md) |
| `ABC095 C` | [Half and Half](https://atcoder.jp/contests/abc095/tasks/arc096_a) | implementation | [C++17](solutions/atcoder/implementation/abc095_c_half_and_half.cpp) · [Notes](notes/atcoder/abc095_c_half_and_half.md) |
| `ABC098 C` | [Attention](https://atcoder.jp/contests/abc098/tasks/arc098_a) | prefix sums | [C++17](solutions/atcoder/prefix_sums/abc098_c_attention.cpp) · [Notes](notes/atcoder/abc098_c_attention.md) |
| `ABC099 C` | [Strange Bank](https://atcoder.jp/contests/abc099/tasks/abc099_c) | dynamic programming | [C++17](solutions/atcoder/dynamic_programming/abc099_c_strange_bank.cpp) · [Notes](notes/atcoder/abc099_c_strange_bank.md) |

</details>

<details>
<summary><strong>AtCoder Beginner Contest 100–199</strong> · 258 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `ABC100 A` | [Happy Birthday!](https://atcoder.jp/contests/abc100/tasks/abc100_a) | implementation | [C++17](solutions/atcoder/implementation/abc100_a_happy_birthday.cpp) · [Notes](notes/atcoder/abc100_a_happy_birthday.md) |
| `ABC100 B` | [Ringo's Favorite Numbers](https://atcoder.jp/contests/abc100/tasks/abc100_b) | implementation | [C++17](solutions/atcoder/implementation/abc100_b_ringo_s_favorite_numbers.cpp) · [Notes](notes/atcoder/abc100_b_ringo_s_favorite_numbers.md) |
| `ABC100 C` | [*3 or /2](https://atcoder.jp/contests/abc100/tasks/abc100_c) | implementation | [C++17](solutions/atcoder/implementation/abc100_c_3_or_2.cpp) · [Notes](notes/atcoder/abc100_c_3_or_2.md) |
| `ABC101 A` | [Eating Symbols Easy](https://atcoder.jp/contests/abc101/tasks/abc101_a) | implementation | [C++17](solutions/atcoder/implementation/abc101_a_eating_symbols_easy.cpp) · [Notes](notes/atcoder/abc101_a_eating_symbols_easy.md) |
| `ABC101 B` | [Digit Sums](https://atcoder.jp/contests/abc101/tasks/abc101_b) | implementation | [C++17](solutions/atcoder/implementation/abc101_b_digit_sums.cpp) · [Notes](notes/atcoder/abc101_b_digit_sums.md) |
| `ABC102 A` | [Multiple of 2 and N](https://atcoder.jp/contests/abc102/tasks/abc102_a) | implementation | [C++17](solutions/atcoder/implementation/abc102_a_multiple_of_2_and_n.cpp) · [Notes](notes/atcoder/abc102_a_multiple_of_2_and_n.md) |
| `ABC102 B` | [Maximum Difference](https://atcoder.jp/contests/abc102/tasks/abc102_b) | implementation | [C++17](solutions/atcoder/implementation/abc102_b_maximum_difference.cpp) · [Notes](notes/atcoder/abc102_b_maximum_difference.md) |
| `ABC102 C` | [Linear Approximation](https://atcoder.jp/contests/abc102/tasks/arc100_a) | sorting | [C++17](solutions/atcoder/sorting/abc102_c_linear_approximation.cpp) · [Notes](notes/atcoder/abc102_c_linear_approximation.md) |
| `ABC103 A` | [Task Scheduling Problem](https://atcoder.jp/contests/abc103/tasks/abc103_a) | implementation | [C++17](solutions/atcoder/implementation/abc103_a_task_scheduling_problem.cpp) · [Notes](notes/atcoder/abc103_a_task_scheduling_problem.md) |
| `ABC103 B` | [String Rotation](https://atcoder.jp/contests/abc103/tasks/abc103_b) | implementation | [C++17](solutions/atcoder/implementation/abc103_b_string_rotation.cpp) · [Notes](notes/atcoder/abc103_b_string_rotation.md) |
| `ABC103 C` | [Modulo Summation](https://atcoder.jp/contests/abc103/tasks/abc103_c) | implementation | [C++17](solutions/atcoder/implementation/abc103_c_modulo_summation.cpp) · [Notes](notes/atcoder/abc103_c_modulo_summation.md) |
| `ABC104 A` | [Rated for Me](https://atcoder.jp/contests/abc104/tasks/abc104_a) | implementation | [C++17](solutions/atcoder/implementation/abc104_a_rated_for_me.cpp) · [Notes](notes/atcoder/abc104_a_rated_for_me.md) |
| `ABC104 B` | [AcCepted](https://atcoder.jp/contests/abc104/tasks/abc104_b) | implementation | [C++17](solutions/atcoder/implementation/abc104_b_accepted.cpp) · [Notes](notes/atcoder/abc104_b_accepted.md) |
| `ABC104 C` | [All Green](https://atcoder.jp/contests/abc104/tasks/abc104_c) | bitmasks | [C++17](solutions/atcoder/bitmasks/abc104_c_all_green.cpp) · [Notes](notes/atcoder/abc104_c_all_green.md) |
| `ABC105 A` | [AtCoder Crackers](https://atcoder.jp/contests/abc105/tasks/abc105_a) | implementation | [C++17](solutions/atcoder/implementation/abc105_a_atcoder_crackers.cpp) · [Notes](notes/atcoder/abc105_a_atcoder_crackers.md) |
| `ABC105 B` | [Cakes and Donuts](https://atcoder.jp/contests/abc105/tasks/abc105_b) | implementation | [C++17](solutions/atcoder/implementation/abc105_b_cakes_and_donuts.cpp) · [Notes](notes/atcoder/abc105_b_cakes_and_donuts.md) |
| `ABC106 A` | [Garden](https://atcoder.jp/contests/abc106/tasks/abc106_a) | implementation | [C++17](solutions/atcoder/implementation/abc106_a_garden.cpp) · [Notes](notes/atcoder/abc106_a_garden.md) |
| `ABC106 B` | [105](https://atcoder.jp/contests/abc106/tasks/abc106_b) | implementation | [C++17](solutions/atcoder/implementation/abc106_b_105.cpp) · [Notes](notes/atcoder/abc106_b_105.md) |
| `ABC106 C` | [To Infinity](https://atcoder.jp/contests/abc106/tasks/abc106_c) | implementation | [C++17](solutions/atcoder/implementation/abc106_c_to_infinity.cpp) · [Notes](notes/atcoder/abc106_c_to_infinity.md) |
| `ABC107 A` | [Train](https://atcoder.jp/contests/abc107/tasks/abc107_a) | implementation | [C++17](solutions/atcoder/implementation/abc107_a_train.cpp) · [Notes](notes/atcoder/abc107_a_train.md) |
| `ABC107 B` | [Grid Compression](https://atcoder.jp/contests/abc107/tasks/abc107_b) | implementation | [C++17](solutions/atcoder/implementation/abc107_b_grid_compression.cpp) · [Notes](notes/atcoder/abc107_b_grid_compression.md) |
| `ABC107 C` | [Candles](https://atcoder.jp/contests/abc107/tasks/arc101_a) | sliding window | [C++17](solutions/atcoder/sliding_window/abc107_c_candles.cpp) · [Notes](notes/atcoder/abc107_c_candles.md) |
| `ABC108 A` | [Pair](https://atcoder.jp/contests/abc108/tasks/abc108_a) | implementation | [C++17](solutions/atcoder/implementation/abc108_a_pair.cpp) · [Notes](notes/atcoder/abc108_a_pair.md) |
| `ABC108 B` | [Ruined Square](https://atcoder.jp/contests/abc108/tasks/abc108_b) | implementation | [C++17](solutions/atcoder/implementation/abc108_b_ruined_square.cpp) · [Notes](notes/atcoder/abc108_b_ruined_square.md) |
| `ABC108 C` | [Triangular Relationship](https://atcoder.jp/contests/abc108/tasks/arc102_a) | implementation | [C++17](solutions/atcoder/implementation/abc108_c_triangular_relationship.cpp) · [Notes](notes/atcoder/abc108_c_triangular_relationship.md) |
| `ABC109 A` | [ABC333](https://atcoder.jp/contests/abc109/tasks/abc109_a) | implementation | [C++17](solutions/atcoder/implementation/abc109_a_abc333.cpp) · [Notes](notes/atcoder/abc109_a_abc333.md) |
| `ABC109 B` | [Shiritori](https://atcoder.jp/contests/abc109/tasks/abc109_b) | implementation | [C++17](solutions/atcoder/implementation/abc109_b_shiritori.cpp) · [Notes](notes/atcoder/abc109_b_shiritori.md) |
| `ABC110 A` | [Maximize the Formula](https://atcoder.jp/contests/abc110/tasks/abc110_a) | implementation | [C++17](solutions/atcoder/implementation/abc110_a_maximize_the_formula.cpp) · [Notes](notes/atcoder/abc110_a_maximize_the_formula.md) |
| `ABC110 B` | [1 Dimensional World's Tale](https://atcoder.jp/contests/abc110/tasks/abc110_b) | implementation | [C++17](solutions/atcoder/implementation/abc110_b_1_dimensional_world_s_tale.cpp) · [Notes](notes/atcoder/abc110_b_1_dimensional_world_s_tale.md) |
| `ABC111 A` | [AtCoder Beginner Contest 999](https://atcoder.jp/contests/abc111/tasks/abc111_a) | implementation | [C++17](solutions/atcoder/implementation/abc111_a_atcoder_beginner_contest_999.cpp) · [Notes](notes/atcoder/abc111_a_atcoder_beginner_contest_999.md) |
| `ABC111 B` | [AtCoder Beginner Contest 111](https://atcoder.jp/contests/abc111/tasks/abc111_b) | implementation | [C++17](solutions/atcoder/implementation/abc111_b_atcoder_beginner_contest_111.cpp) · [Notes](notes/atcoder/abc111_b_atcoder_beginner_contest_111.md) |
| `ABC111 C` | [/\/\/\/](https://atcoder.jp/contests/abc111/tasks/arc103_a) | implementation | [C++17](solutions/atcoder/implementation/abc111_c_.cpp) · [Notes](notes/atcoder/abc111_c_.md) |
| `ABC112 A` | [Programming Education](https://atcoder.jp/contests/abc112/tasks/abc112_a) | implementation | [C++17](solutions/atcoder/implementation/abc112_a_programming_education.cpp) · [Notes](notes/atcoder/abc112_a_programming_education.md) |
| `ABC112 B` | [Time Limit Exceeded](https://atcoder.jp/contests/abc112/tasks/abc112_b) | implementation | [C++17](solutions/atcoder/implementation/abc112_b_time_limit_exceeded.cpp) · [Notes](notes/atcoder/abc112_b_time_limit_exceeded.md) |
| `ABC113 A` | [Discount Fare](https://atcoder.jp/contests/abc113/tasks/abc113_a) | implementation | [C++17](solutions/atcoder/implementation/abc113_a_discount_fare.cpp) · [Notes](notes/atcoder/abc113_a_discount_fare.md) |
| `ABC113 B` | [Palace](https://atcoder.jp/contests/abc113/tasks/abc113_b) | implementation | [C++17](solutions/atcoder/implementation/abc113_b_palace.cpp) · [Notes](notes/atcoder/abc113_b_palace.md) |
| `ABC113 C` | [ID](https://atcoder.jp/contests/abc113/tasks/abc113_c) | sorting | [C++17](solutions/atcoder/sorting/abc113_c_id.cpp) · [Notes](notes/atcoder/abc113_c_id.md) |
| `ABC114 A` | [753](https://atcoder.jp/contests/abc114/tasks/abc114_a) | implementation | [C++17](solutions/atcoder/implementation/abc114_a_753.cpp) · [Notes](notes/atcoder/abc114_a_753.md) |
| `ABC114 B` | [754](https://atcoder.jp/contests/abc114/tasks/abc114_b) | implementation | [C++17](solutions/atcoder/implementation/abc114_b_754.cpp) · [Notes](notes/atcoder/abc114_b_754.md) |
| `ABC114 C` | [755](https://atcoder.jp/contests/abc114/tasks/abc114_c) | recursion | [C++17](solutions/atcoder/recursion/abc114_c_755.cpp) · [Notes](notes/atcoder/abc114_c_755.md) |
| `ABC115 A` | [Christmas Eve Eve Eve](https://atcoder.jp/contests/abc115/tasks/abc115_a) | implementation | [C++17](solutions/atcoder/implementation/abc115_a_christmas_eve_eve_eve.cpp) · [Notes](notes/atcoder/abc115_a_christmas_eve_eve_eve.md) |
| `ABC115 B` | [Christmas Eve Eve](https://atcoder.jp/contests/abc115/tasks/abc115_b) | implementation | [C++17](solutions/atcoder/implementation/abc115_b_christmas_eve_eve.cpp) · [Notes](notes/atcoder/abc115_b_christmas_eve_eve.md) |
| `ABC115 C` | [Christmas Eve](https://atcoder.jp/contests/abc115/tasks/abc115_c) | sorting | [C++17](solutions/atcoder/sorting/abc115_c_christmas_eve.cpp) · [Notes](notes/atcoder/abc115_c_christmas_eve.md) |
| `ABC116 A` | [Right Triangle](https://atcoder.jp/contests/abc116/tasks/abc116_a) | implementation | [C++17](solutions/atcoder/implementation/abc116_a_right_triangle.cpp) · [Notes](notes/atcoder/abc116_a_right_triangle.md) |
| `ABC116 B` | [Collatz Problem](https://atcoder.jp/contests/abc116/tasks/abc116_b) | implementation | [C++17](solutions/atcoder/implementation/abc116_b_collatz_problem.cpp) · [Notes](notes/atcoder/abc116_b_collatz_problem.md) |
| `ABC116 C` | [Grand Garden](https://atcoder.jp/contests/abc116/tasks/abc116_c) | greedy | [C++17](solutions/atcoder/greedy/abc116_c_grand_garden.cpp) · [Notes](notes/atcoder/abc116_c_grand_garden.md) |
| `ABC117 A` | [Entrance Examination](https://atcoder.jp/contests/abc117/tasks/abc117_a) | implementation | [C++17](solutions/atcoder/implementation/abc117_a_entrance_examination.cpp) · [Notes](notes/atcoder/abc117_a_entrance_examination.md) |
| `ABC117 B` | [Polygon](https://atcoder.jp/contests/abc117/tasks/abc117_b) | implementation | [C++17](solutions/atcoder/implementation/abc117_b_polygon.cpp) · [Notes](notes/atcoder/abc117_b_polygon.md) |
| `ABC117 C` | [Streamline](https://atcoder.jp/contests/abc117/tasks/abc117_c) | greedy | [C++17](solutions/atcoder/greedy/abc117_c_streamline.cpp) · [Notes](notes/atcoder/abc117_c_streamline.md) |
| `ABC118 A` | [B +/- A](https://atcoder.jp/contests/abc118/tasks/abc118_a) | implementation | [C++17](solutions/atcoder/implementation/abc118_a_b_a.cpp) · [Notes](notes/atcoder/abc118_a_b_a.md) |
| `ABC118 B` | [Foods Loved by Everyone](https://atcoder.jp/contests/abc118/tasks/abc118_b) | implementation | [C++17](solutions/atcoder/implementation/abc118_b_foods_loved_by_everyone.cpp) · [Notes](notes/atcoder/abc118_b_foods_loved_by_everyone.md) |
| `ABC118 C` | [Monsters Battle Royale](https://atcoder.jp/contests/abc118/tasks/abc118_c) | number theory | [C++17](solutions/atcoder/number_theory/abc118_c_monsters_battle_royale.cpp) · [Notes](notes/atcoder/abc118_c_monsters_battle_royale.md) |
| `ABC119 A` | [Still TBD](https://atcoder.jp/contests/abc119/tasks/abc119_a) | implementation | [C++17](solutions/atcoder/implementation/abc119_a_still_tbd.cpp) · [Notes](notes/atcoder/abc119_a_still_tbd.md) |
| `ABC119 B` | [Digital Gifts](https://atcoder.jp/contests/abc119/tasks/abc119_b) | implementation | [C++17](solutions/atcoder/implementation/abc119_b_digital_gifts.cpp) · [Notes](notes/atcoder/abc119_b_digital_gifts.md) |
| `ABC119 C` | [Synthetic Kadomatsu](https://atcoder.jp/contests/abc119/tasks/abc119_c) | enumeration | [C++17](solutions/atcoder/enumeration/abc119_c_synthetic_kadomatsu.cpp) · [Notes](notes/atcoder/abc119_c_synthetic_kadomatsu.md) |
| `ABC120 A` | [Favorite Sound](https://atcoder.jp/contests/abc120/tasks/abc120_a) | implementation | [C++17](solutions/atcoder/implementation/abc120_a_favorite_sound.cpp) · [Notes](notes/atcoder/abc120_a_favorite_sound.md) |
| `ABC120 B` | [K-th Common Divisor](https://atcoder.jp/contests/abc120/tasks/abc120_b) | implementation | [C++17](solutions/atcoder/implementation/abc120_b_k_th_common_divisor.cpp) · [Notes](notes/atcoder/abc120_b_k_th_common_divisor.md) |
| `ABC120 C` | [Unification](https://atcoder.jp/contests/abc120/tasks/abc120_c) | implementation | [C++17](solutions/atcoder/implementation/abc120_c_unification.cpp) · [Notes](notes/atcoder/abc120_c_unification.md) |
| `ABC121 A` | [White Cells](https://atcoder.jp/contests/abc121/tasks/abc121_a) | implementation | [C++17](solutions/atcoder/implementation/abc121_a_white_cells.cpp) · [Notes](notes/atcoder/abc121_a_white_cells.md) |
| `ABC121 B` | [Can you solve this?](https://atcoder.jp/contests/abc121/tasks/abc121_b) | implementation | [C++17](solutions/atcoder/implementation/abc121_b_can_you_solve_this.cpp) · [Notes](notes/atcoder/abc121_b_can_you_solve_this.md) |
| `ABC121 C` | [Energy Drink Collector](https://atcoder.jp/contests/abc121/tasks/abc121_c) | greedy | [C++17](solutions/atcoder/greedy/abc121_c_energy_drink_collector.cpp) · [Notes](notes/atcoder/abc121_c_energy_drink_collector.md) |
| `ABC122 A` | [Double Helix](https://atcoder.jp/contests/abc122/tasks/abc122_a) | implementation | [C++17](solutions/atcoder/implementation/abc122_a_double_helix.cpp) · [Notes](notes/atcoder/abc122_a_double_helix.md) |
| `ABC122 B` | [ATCoder](https://atcoder.jp/contests/abc122/tasks/abc122_b) | implementation | [C++17](solutions/atcoder/implementation/abc122_b_atcoder.cpp) · [Notes](notes/atcoder/abc122_b_atcoder.md) |
| `ABC122 C` | [GeT AC](https://atcoder.jp/contests/abc122/tasks/abc122_c) | prefix sums | [C++17](solutions/atcoder/prefix_sums/abc122_c_get_ac.cpp) · [Notes](notes/atcoder/abc122_c_get_ac.md) |
| `ABC123 A` | [Five Antennas](https://atcoder.jp/contests/abc123/tasks/abc123_a) | implementation | [C++17](solutions/atcoder/implementation/abc123_a_five_antennas.cpp) · [Notes](notes/atcoder/abc123_a_five_antennas.md) |
| `ABC123 B` | [Five Dishes](https://atcoder.jp/contests/abc123/tasks/abc123_b) | implementation | [C++17](solutions/atcoder/implementation/abc123_b_five_dishes.cpp) · [Notes](notes/atcoder/abc123_b_five_dishes.md) |
| `ABC123 C` | [Five Transportations](https://atcoder.jp/contests/abc123/tasks/abc123_c) | implementation | [C++17](solutions/atcoder/implementation/abc123_c_five_transportations.cpp) · [Notes](notes/atcoder/abc123_c_five_transportations.md) |
| `ABC124 A` | [Buttons](https://atcoder.jp/contests/abc124/tasks/abc124_a) | implementation | [C++17](solutions/atcoder/implementation/abc124_a_buttons.cpp) · [Notes](notes/atcoder/abc124_a_buttons.md) |
| `ABC124 B` | [Great Ocean View](https://atcoder.jp/contests/abc124/tasks/abc124_b) | implementation | [C++17](solutions/atcoder/implementation/abc124_b_great_ocean_view.cpp) · [Notes](notes/atcoder/abc124_b_great_ocean_view.md) |
| `ABC124 C` | [Coloring Colorfully](https://atcoder.jp/contests/abc124/tasks/abc124_c) | implementation | [C++17](solutions/atcoder/implementation/abc124_c_coloring_colorfully.cpp) · [Notes](notes/atcoder/abc124_c_coloring_colorfully.md) |
| `ABC125 A` | [Biscuit Generator](https://atcoder.jp/contests/abc125/tasks/abc125_a) | implementation | [C++17](solutions/atcoder/implementation/abc125_a_biscuit_generator.cpp) · [Notes](notes/atcoder/abc125_a_biscuit_generator.md) |
| `ABC125 B` | [Resale](https://atcoder.jp/contests/abc125/tasks/abc125_b) | implementation | [C++17](solutions/atcoder/implementation/abc125_b_resale.cpp) · [Notes](notes/atcoder/abc125_b_resale.md) |
| `ABC125 C` | [GCD on Blackboard](https://atcoder.jp/contests/abc125/tasks/abc125_c) | prefix sums | [C++17](solutions/atcoder/prefix_sums/abc125_c_gcd_on_blackboard.cpp) · [Notes](notes/atcoder/abc125_c_gcd_on_blackboard.md) |
| `ABC126 A` | [Changing a Character](https://atcoder.jp/contests/abc126/tasks/abc126_a) | implementation | [C++17](solutions/atcoder/implementation/abc126_a_changing_a_character.cpp) · [Notes](notes/atcoder/abc126_a_changing_a_character.md) |
| `ABC126 B` | [YYMM or MMYY](https://atcoder.jp/contests/abc126/tasks/abc126_b) | implementation | [C++17](solutions/atcoder/implementation/abc126_b_yymm_or_mmyy.cpp) · [Notes](notes/atcoder/abc126_b_yymm_or_mmyy.md) |
| `ABC126 C` | [Dice and Coin](https://atcoder.jp/contests/abc126/tasks/abc126_c) | probability | [C++17](solutions/atcoder/probability/abc126_c_dice_and_coin.cpp) · [Notes](notes/atcoder/abc126_c_dice_and_coin.md) |
| `ABC127 A` | [Ferris Wheel](https://atcoder.jp/contests/abc127/tasks/abc127_a) | implementation | [C++17](solutions/atcoder/implementation/abc127_a_ferris_wheel.cpp) · [Notes](notes/atcoder/abc127_a_ferris_wheel.md) |
| `ABC127 B` | [Algae](https://atcoder.jp/contests/abc127/tasks/abc127_b) | implementation | [C++17](solutions/atcoder/implementation/abc127_b_algae.cpp) · [Notes](notes/atcoder/abc127_b_algae.md) |
| `ABC127 C` | [Prison](https://atcoder.jp/contests/abc127/tasks/abc127_c) | implementation | [C++17](solutions/atcoder/implementation/abc127_c_prison.cpp) · [Notes](notes/atcoder/abc127_c_prison.md) |
| `ABC128 A` | [Apple Pie](https://atcoder.jp/contests/abc128/tasks/abc128_a) | implementation | [C++17](solutions/atcoder/implementation/abc128_a_apple_pie.cpp) · [Notes](notes/atcoder/abc128_a_apple_pie.md) |
| `ABC128 B` | [Guidebook](https://atcoder.jp/contests/abc128/tasks/abc128_b) | implementation | [C++17](solutions/atcoder/implementation/abc128_b_guidebook.cpp) · [Notes](notes/atcoder/abc128_b_guidebook.md) |
| `ABC128 C` | [Switches](https://atcoder.jp/contests/abc128/tasks/abc128_c) | bitmasks | [C++17](solutions/atcoder/bitmasks/abc128_c_switches.cpp) · [Notes](notes/atcoder/abc128_c_switches.md) |
| `ABC129 A` | [Airplane](https://atcoder.jp/contests/abc129/tasks/abc129_a) | implementation | [C++17](solutions/atcoder/implementation/abc129_a_airplane.cpp) · [Notes](notes/atcoder/abc129_a_airplane.md) |
| `ABC129 B` | [Balance](https://atcoder.jp/contests/abc129/tasks/abc129_b) | implementation | [C++17](solutions/atcoder/implementation/abc129_b_balance.cpp) · [Notes](notes/atcoder/abc129_b_balance.md) |
| `ABC129 C` | [Typical Stairs](https://atcoder.jp/contests/abc129/tasks/abc129_c) | dynamic programming | [C++17](solutions/atcoder/dynamic_programming/abc129_c_typical_stairs.cpp) · [Notes](notes/atcoder/abc129_c_typical_stairs.md) |
| `ABC130 A` | [Rounding](https://atcoder.jp/contests/abc130/tasks/abc130_a) | implementation | [C++17](solutions/atcoder/implementation/abc130_a_rounding.cpp) · [Notes](notes/atcoder/abc130_a_rounding.md) |
| `ABC130 B` | [Bounding](https://atcoder.jp/contests/abc130/tasks/abc130_b) | implementation | [C++17](solutions/atcoder/implementation/abc130_b_bounding.cpp) · [Notes](notes/atcoder/abc130_b_bounding.md) |
| `ABC131 A` | [Security](https://atcoder.jp/contests/abc131/tasks/abc131_a) | implementation | [C++17](solutions/atcoder/implementation/abc131_a_security.cpp) · [Notes](notes/atcoder/abc131_a_security.md) |
| `ABC131 B` | [Bite Eating](https://atcoder.jp/contests/abc131/tasks/abc131_b) | implementation | [C++17](solutions/atcoder/implementation/abc131_b_bite_eating.cpp) · [Notes](notes/atcoder/abc131_b_bite_eating.md) |
| `ABC131 C` | [Anti-Division](https://atcoder.jp/contests/abc131/tasks/abc131_c) | number theory | [C++17](solutions/atcoder/number_theory/abc131_c_anti_division.cpp) · [Notes](notes/atcoder/abc131_c_anti_division.md) |
| `ABC132 A` | [Fifty-Fifty](https://atcoder.jp/contests/abc132/tasks/abc132_a) | implementation | [C++17](solutions/atcoder/implementation/abc132_a_fifty_fifty.cpp) · [Notes](notes/atcoder/abc132_a_fifty_fifty.md) |
| `ABC132 B` | [Ordinary Number](https://atcoder.jp/contests/abc132/tasks/abc132_b) | implementation | [C++17](solutions/atcoder/implementation/abc132_b_ordinary_number.cpp) · [Notes](notes/atcoder/abc132_b_ordinary_number.md) |
| `ABC132 C` | [Divide the Problems](https://atcoder.jp/contests/abc132/tasks/abc132_c) | sorting | [C++17](solutions/atcoder/sorting/abc132_c_divide_the_problems.cpp) · [Notes](notes/atcoder/abc132_c_divide_the_problems.md) |
| `ABC133 A` | [T or T](https://atcoder.jp/contests/abc133/tasks/abc133_a) | implementation | [C++17](solutions/atcoder/implementation/abc133_a_t_or_t.cpp) · [Notes](notes/atcoder/abc133_a_t_or_t.md) |
| `ABC133 B` | [Good Distance](https://atcoder.jp/contests/abc133/tasks/abc133_b) | implementation | [C++17](solutions/atcoder/implementation/abc133_b_good_distance.cpp) · [Notes](notes/atcoder/abc133_b_good_distance.md) |
| `ABC133 C` | [Remainder Minimization 2019](https://atcoder.jp/contests/abc133/tasks/abc133_c) | implementation | [C++17](solutions/atcoder/implementation/abc133_c_remainder_minimization_2019.cpp) · [Notes](notes/atcoder/abc133_c_remainder_minimization_2019.md) |
| `ABC134 A` | [Dodecagon](https://atcoder.jp/contests/abc134/tasks/abc134_a) | implementation | [C++17](solutions/atcoder/implementation/abc134_a_dodecagon.cpp) · [Notes](notes/atcoder/abc134_a_dodecagon.md) |
| `ABC134 B` | [Golden Apple](https://atcoder.jp/contests/abc134/tasks/abc134_b) | implementation | [C++17](solutions/atcoder/implementation/abc134_b_golden_apple.cpp) · [Notes](notes/atcoder/abc134_b_golden_apple.md) |
| `ABC134 C` | [Exception Handling](https://atcoder.jp/contests/abc134/tasks/abc134_c) | sorting | [C++17](solutions/atcoder/sorting/abc134_c_exception_handling.cpp) · [Notes](notes/atcoder/abc134_c_exception_handling.md) |
| `ABC135 A` | [Harmony](https://atcoder.jp/contests/abc135/tasks/abc135_a) | implementation | [C++17](solutions/atcoder/implementation/abc135_a_harmony.cpp) · [Notes](notes/atcoder/abc135_a_harmony.md) |
| `ABC135 B` | [0 or 1 Swap](https://atcoder.jp/contests/abc135/tasks/abc135_b) | implementation | [C++17](solutions/atcoder/implementation/abc135_b_0_or_1_swap.cpp) · [Notes](notes/atcoder/abc135_b_0_or_1_swap.md) |
| `ABC135 C` | [City Savers](https://atcoder.jp/contests/abc135/tasks/abc135_c) | greedy | [C++17](solutions/atcoder/greedy/abc135_c_city_savers.cpp) · [Notes](notes/atcoder/abc135_c_city_savers.md) |
| `ABC136 A` | [Transfer](https://atcoder.jp/contests/abc136/tasks/abc136_a) | implementation | [C++17](solutions/atcoder/implementation/abc136_a_transfer.cpp) · [Notes](notes/atcoder/abc136_a_transfer.md) |
| `ABC136 B` | [Uneven Numbers](https://atcoder.jp/contests/abc136/tasks/abc136_b) | implementation | [C++17](solutions/atcoder/implementation/abc136_b_uneven_numbers.cpp) · [Notes](notes/atcoder/abc136_b_uneven_numbers.md) |
| `ABC136 C` | [Build Stairs](https://atcoder.jp/contests/abc136/tasks/abc136_c) | greedy | [C++17](solutions/atcoder/greedy/abc136_c_build_stairs.cpp) · [Notes](notes/atcoder/abc136_c_build_stairs.md) |
| `ABC137 A` | [+-x](https://atcoder.jp/contests/abc137/tasks/abc137_a) | implementation | [C++17](solutions/atcoder/implementation/abc137_a_x.cpp) · [Notes](notes/atcoder/abc137_a_x.md) |
| `ABC137 B` | [One Clue](https://atcoder.jp/contests/abc137/tasks/abc137_b) | implementation | [C++17](solutions/atcoder/implementation/abc137_b_one_clue.cpp) · [Notes](notes/atcoder/abc137_b_one_clue.md) |
| `ABC137 C` | [Green Bin](https://atcoder.jp/contests/abc137/tasks/abc137_c) | counting | [C++17](solutions/atcoder/counting/abc137_c_green_bin.cpp) · [Notes](notes/atcoder/abc137_c_green_bin.md) |
| `ABC138 A` | [Red or Not](https://atcoder.jp/contests/abc138/tasks/abc138_a) | implementation | [C++17](solutions/atcoder/implementation/abc138_a_red_or_not.cpp) · [Notes](notes/atcoder/abc138_a_red_or_not.md) |
| `ABC138 B` | [Resistors in Parallel](https://atcoder.jp/contests/abc138/tasks/abc138_b) | implementation | [C++17](solutions/atcoder/implementation/abc138_b_resistors_in_parallel.cpp) · [Notes](notes/atcoder/abc138_b_resistors_in_parallel.md) |
| `ABC139 A` | [Tenki](https://atcoder.jp/contests/abc139/tasks/abc139_a) | implementation | [C++17](solutions/atcoder/implementation/abc139_a_tenki.cpp) · [Notes](notes/atcoder/abc139_a_tenki.md) |
| `ABC139 B` | [Power Socket](https://atcoder.jp/contests/abc139/tasks/abc139_b) | implementation | [C++17](solutions/atcoder/implementation/abc139_b_power_socket.cpp) · [Notes](notes/atcoder/abc139_b_power_socket.md) |
| `ABC139 C` | [Lower](https://atcoder.jp/contests/abc139/tasks/abc139_c) | implementation | [C++17](solutions/atcoder/implementation/abc139_c_lower.cpp) · [Notes](notes/atcoder/abc139_c_lower.md) |
| `ABC140 A` | [Password](https://atcoder.jp/contests/abc140/tasks/abc140_a) | implementation | [C++17](solutions/atcoder/implementation/abc140_a_password.cpp) · [Notes](notes/atcoder/abc140_a_password.md) |
| `ABC140 B` | [Buffet](https://atcoder.jp/contests/abc140/tasks/abc140_b) | implementation | [C++17](solutions/atcoder/implementation/abc140_b_buffet.cpp) · [Notes](notes/atcoder/abc140_b_buffet.md) |
| `ABC140 C` | [Maximal Value](https://atcoder.jp/contests/abc140/tasks/abc140_c) | implementation | [C++17](solutions/atcoder/implementation/abc140_c_maximal_value.cpp) · [Notes](notes/atcoder/abc140_c_maximal_value.md) |
| `ABC141 A` | [Weather Prediction](https://atcoder.jp/contests/abc141/tasks/abc141_a) | implementation | [C++17](solutions/atcoder/implementation/abc141_a_weather_prediction.cpp) · [Notes](notes/atcoder/abc141_a_weather_prediction.md) |
| `ABC141 B` | [Tap Dance](https://atcoder.jp/contests/abc141/tasks/abc141_b) | implementation | [C++17](solutions/atcoder/implementation/abc141_b_tap_dance.cpp) · [Notes](notes/atcoder/abc141_b_tap_dance.md) |
| `ABC141 C` | [Attack Survival](https://atcoder.jp/contests/abc141/tasks/abc141_c) | implementation | [C++17](solutions/atcoder/implementation/abc141_c_attack_survival.cpp) · [Notes](notes/atcoder/abc141_c_attack_survival.md) |
| `ABC142 A` | [Odds of Oddness](https://atcoder.jp/contests/abc142/tasks/abc142_a) | implementation | [C++17](solutions/atcoder/implementation/abc142_a_odds_of_oddness.cpp) · [Notes](notes/atcoder/abc142_a_odds_of_oddness.md) |
| `ABC142 B` | [Roller Coaster](https://atcoder.jp/contests/abc142/tasks/abc142_b) | implementation | [C++17](solutions/atcoder/implementation/abc142_b_roller_coaster.cpp) · [Notes](notes/atcoder/abc142_b_roller_coaster.md) |
| `ABC142 C` | [Go to School](https://atcoder.jp/contests/abc142/tasks/abc142_c) | implementation | [C++17](solutions/atcoder/implementation/abc142_c_go_to_school.cpp) · [Notes](notes/atcoder/abc142_c_go_to_school.md) |
| `ABC143 A` | [Curtain](https://atcoder.jp/contests/abc143/tasks/abc143_a) | implementation | [C++17](solutions/atcoder/implementation/abc143_a_curtain.cpp) · [Notes](notes/atcoder/abc143_a_curtain.md) |
| `ABC143 B` | [TAKOYAKI FESTIVAL 2019](https://atcoder.jp/contests/abc143/tasks/abc143_b) | implementation | [C++17](solutions/atcoder/implementation/abc143_b_takoyaki_festival_2019.cpp) · [Notes](notes/atcoder/abc143_b_takoyaki_festival_2019.md) |
| `ABC143 C` | [Slimes](https://atcoder.jp/contests/abc143/tasks/abc143_c) | implementation | [C++17](solutions/atcoder/implementation/abc143_c_slimes.cpp) · [Notes](notes/atcoder/abc143_c_slimes.md) |
| `ABC144 A` | [9x9](https://atcoder.jp/contests/abc144/tasks/abc144_a) | implementation | [C++17](solutions/atcoder/implementation/abc144_a_9x9.cpp) · [Notes](notes/atcoder/abc144_a_9x9.md) |
| `ABC144 B` | [81](https://atcoder.jp/contests/abc144/tasks/abc144_b) | implementation | [C++17](solutions/atcoder/implementation/abc144_b_81.cpp) · [Notes](notes/atcoder/abc144_b_81.md) |
| `ABC144 C` | [Walk on Multiplication Table](https://atcoder.jp/contests/abc144/tasks/abc144_c) | number theory | [C++17](solutions/atcoder/number_theory/abc144_c_walk_on_multiplication_table.cpp) · [Notes](notes/atcoder/abc144_c_walk_on_multiplication_table.md) |
| `ABC145 A` | [Circle](https://atcoder.jp/contests/abc145/tasks/abc145_a) | implementation | [C++17](solutions/atcoder/implementation/abc145_a_circle.cpp) · [Notes](notes/atcoder/abc145_a_circle.md) |
| `ABC145 B` | [Echo](https://atcoder.jp/contests/abc145/tasks/abc145_b) | implementation | [C++17](solutions/atcoder/implementation/abc145_b_echo.cpp) · [Notes](notes/atcoder/abc145_b_echo.md) |
| `ABC146 A` | [Can't Wait for Holiday](https://atcoder.jp/contests/abc146/tasks/abc146_a) | implementation | [C++17](solutions/atcoder/implementation/abc146_a_can_t_wait_for_holiday.cpp) · [Notes](notes/atcoder/abc146_a_can_t_wait_for_holiday.md) |
| `ABC146 B` | [ROT N](https://atcoder.jp/contests/abc146/tasks/abc146_b) | implementation | [C++17](solutions/atcoder/implementation/abc146_b_rot_n.cpp) · [Notes](notes/atcoder/abc146_b_rot_n.md) |
| `ABC146 C` | [Buy an Integer](https://atcoder.jp/contests/abc146/tasks/abc146_c) | binary search | [C++17](solutions/atcoder/binary_search/abc146_c_buy_an_integer.cpp) · [Notes](notes/atcoder/abc146_c_buy_an_integer.md) |
| `ABC147 A` | [Blackjack](https://atcoder.jp/contests/abc147/tasks/abc147_a) | implementation | [C++17](solutions/atcoder/implementation/abc147_a_blackjack.cpp) · [Notes](notes/atcoder/abc147_a_blackjack.md) |
| `ABC147 B` | [Palindrome-philia](https://atcoder.jp/contests/abc147/tasks/abc147_b) | implementation | [C++17](solutions/atcoder/implementation/abc147_b_palindrome_philia.cpp) · [Notes](notes/atcoder/abc147_b_palindrome_philia.md) |
| `ABC147 C` | [HonestOrUnkind2](https://atcoder.jp/contests/abc147/tasks/abc147_c) | bitmasks | [C++17](solutions/atcoder/bitmasks/abc147_c_honestorunkind2.cpp) · [Notes](notes/atcoder/abc147_c_honestorunkind2.md) |
| `ABC148 A` | [Round One](https://atcoder.jp/contests/abc148/tasks/abc148_a) | implementation | [C++17](solutions/atcoder/implementation/abc148_a_round_one.cpp) · [Notes](notes/atcoder/abc148_a_round_one.md) |
| `ABC148 B` | [Strings with the Same Length](https://atcoder.jp/contests/abc148/tasks/abc148_b) | implementation | [C++17](solutions/atcoder/implementation/abc148_b_strings_with_the_same_length.cpp) · [Notes](notes/atcoder/abc148_b_strings_with_the_same_length.md) |
| `ABC148 C` | [Snack](https://atcoder.jp/contests/abc148/tasks/abc148_c) | number theory | [C++17](solutions/atcoder/number_theory/abc148_c_snack.cpp) · [Notes](notes/atcoder/abc148_c_snack.md) |
| `ABC149 A` | [Strings](https://atcoder.jp/contests/abc149/tasks/abc149_a) | implementation | [C++17](solutions/atcoder/implementation/abc149_a_strings.cpp) · [Notes](notes/atcoder/abc149_a_strings.md) |
| `ABC149 B` | [Greedy Takahashi](https://atcoder.jp/contests/abc149/tasks/abc149_b) | implementation | [C++17](solutions/atcoder/implementation/abc149_b_greedy_takahashi.cpp) · [Notes](notes/atcoder/abc149_b_greedy_takahashi.md) |
| `ABC149 C` | [Next Prime](https://atcoder.jp/contests/abc149/tasks/abc149_c) | number theory | [C++17](solutions/atcoder/number_theory/abc149_c_next_prime.cpp) · [Notes](notes/atcoder/abc149_c_next_prime.md) |
| `ABC150 A` | [500 Yen Coins](https://atcoder.jp/contests/abc150/tasks/abc150_a) | implementation | [C++17](solutions/atcoder/implementation/abc150_a_500_yen_coins.cpp) · [Notes](notes/atcoder/abc150_a_500_yen_coins.md) |
| `ABC150 B` | [Count ABC](https://atcoder.jp/contests/abc150/tasks/abc150_b) | implementation | [C++17](solutions/atcoder/implementation/abc150_b_count_abc.cpp) · [Notes](notes/atcoder/abc150_b_count_abc.md) |
| `ABC150 C` | [Count Order](https://atcoder.jp/contests/abc150/tasks/abc150_c) | enumeration | [C++17](solutions/atcoder/enumeration/abc150_c_count_order.cpp) · [Notes](notes/atcoder/abc150_c_count_order.md) |
| `ABC151 A` | [Next Alphabet](https://atcoder.jp/contests/abc151/tasks/abc151_a) | implementation | [C++17](solutions/atcoder/implementation/abc151_a_next_alphabet.cpp) · [Notes](notes/atcoder/abc151_a_next_alphabet.md) |
| `ABC151 B` | [Achieve the Goal](https://atcoder.jp/contests/abc151/tasks/abc151_b) | implementation | [C++17](solutions/atcoder/implementation/abc151_b_achieve_the_goal.cpp) · [Notes](notes/atcoder/abc151_b_achieve_the_goal.md) |
| `ABC151 C` | [Welcome to AtCoder](https://atcoder.jp/contests/abc151/tasks/abc151_c) | implementation | [C++17](solutions/atcoder/implementation/abc151_c_welcome_to_atcoder.cpp) · [Notes](notes/atcoder/abc151_c_welcome_to_atcoder.md) |
| `ABC152 A` | [AC or WA](https://atcoder.jp/contests/abc152/tasks/abc152_a) | implementation | [C++17](solutions/atcoder/implementation/abc152_a_ac_or_wa.cpp) · [Notes](notes/atcoder/abc152_a_ac_or_wa.md) |
| `ABC152 B` | [Comparing Strings](https://atcoder.jp/contests/abc152/tasks/abc152_b) | implementation | [C++17](solutions/atcoder/implementation/abc152_b_comparing_strings.cpp) · [Notes](notes/atcoder/abc152_b_comparing_strings.md) |
| `ABC152 C` | [Low Elements](https://atcoder.jp/contests/abc152/tasks/abc152_c) | implementation | [C++17](solutions/atcoder/implementation/abc152_c_low_elements.cpp) · [Notes](notes/atcoder/abc152_c_low_elements.md) |
| `ABC153 A` | [Serval vs Monster](https://atcoder.jp/contests/abc153/tasks/abc153_a) | implementation | [C++17](solutions/atcoder/implementation/abc153_a_serval_vs_monster.cpp) · [Notes](notes/atcoder/abc153_a_serval_vs_monster.md) |
| `ABC153 B` | [Common Raccoon vs Monster](https://atcoder.jp/contests/abc153/tasks/abc153_b) | implementation | [C++17](solutions/atcoder/implementation/abc153_b_common_raccoon_vs_monster.cpp) · [Notes](notes/atcoder/abc153_b_common_raccoon_vs_monster.md) |
| `ABC153 C` | [Fennec vs Monster](https://atcoder.jp/contests/abc153/tasks/abc153_c) | greedy | [C++17](solutions/atcoder/greedy/abc153_c_fennec_vs_monster.cpp) · [Notes](notes/atcoder/abc153_c_fennec_vs_monster.md) |
| `ABC154 A` | [Remaining Balls](https://atcoder.jp/contests/abc154/tasks/abc154_a) | implementation | [C++17](solutions/atcoder/implementation/abc154_a_remaining_balls.cpp) · [Notes](notes/atcoder/abc154_a_remaining_balls.md) |
| `ABC154 B` | [I miss you...](https://atcoder.jp/contests/abc154/tasks/abc154_b) | implementation | [C++17](solutions/atcoder/implementation/abc154_b_i_miss_you.cpp) · [Notes](notes/atcoder/abc154_b_i_miss_you.md) |
| `ABC154 C` | [Distinct or Not](https://atcoder.jp/contests/abc154/tasks/abc154_c) | implementation | [C++17](solutions/atcoder/implementation/abc154_c_distinct_or_not.cpp) · [Notes](notes/atcoder/abc154_c_distinct_or_not.md) |
| `ABC155 A` | [Poor](https://atcoder.jp/contests/abc155/tasks/abc155_a) | implementation | [C++17](solutions/atcoder/implementation/abc155_a_poor.cpp) · [Notes](notes/atcoder/abc155_a_poor.md) |
| `ABC155 B` | [Papers, Please](https://atcoder.jp/contests/abc155/tasks/abc155_b) | implementation | [C++17](solutions/atcoder/implementation/abc155_b_papers_please.cpp) · [Notes](notes/atcoder/abc155_b_papers_please.md) |
| `ABC155 C` | [Poll](https://atcoder.jp/contests/abc155/tasks/abc155_c) | counting | [C++17](solutions/atcoder/counting/abc155_c_poll.cpp) · [Notes](notes/atcoder/abc155_c_poll.md) |
| `ABC156 A` | [Beginner](https://atcoder.jp/contests/abc156/tasks/abc156_a) | implementation | [C++17](solutions/atcoder/implementation/abc156_a_beginner.cpp) · [Notes](notes/atcoder/abc156_a_beginner.md) |
| `ABC156 B` | [Digits](https://atcoder.jp/contests/abc156/tasks/abc156_b) | implementation | [C++17](solutions/atcoder/implementation/abc156_b_digits.cpp) · [Notes](notes/atcoder/abc156_b_digits.md) |
| `ABC156 C` | [Rally](https://atcoder.jp/contests/abc156/tasks/abc156_c) | implementation | [C++17](solutions/atcoder/implementation/abc156_c_rally.cpp) · [Notes](notes/atcoder/abc156_c_rally.md) |
| `ABC157 A` | [Duplex Printing](https://atcoder.jp/contests/abc157/tasks/abc157_a) | implementation | [C++17](solutions/atcoder/implementation/abc157_a_duplex_printing.cpp) · [Notes](notes/atcoder/abc157_a_duplex_printing.md) |
| `ABC157 B` | [Bingo](https://atcoder.jp/contests/abc157/tasks/abc157_b) | implementation | [C++17](solutions/atcoder/implementation/abc157_b_bingo.cpp) · [Notes](notes/atcoder/abc157_b_bingo.md) |
| `ABC157 C` | [Guess The Number](https://atcoder.jp/contests/abc157/tasks/abc157_c) | implementation | [C++17](solutions/atcoder/implementation/abc157_c_guess_the_number.cpp) · [Notes](notes/atcoder/abc157_c_guess_the_number.md) |
| `ABC158 A` | [Station and Bus](https://atcoder.jp/contests/abc158/tasks/abc158_a) | implementation | [C++17](solutions/atcoder/implementation/abc158_a_station_and_bus.cpp) · [Notes](notes/atcoder/abc158_a_station_and_bus.md) |
| `ABC158 B` | [Count Balls](https://atcoder.jp/contests/abc158/tasks/abc158_b) | implementation | [C++17](solutions/atcoder/implementation/abc158_b_count_balls.cpp) · [Notes](notes/atcoder/abc158_b_count_balls.md) |
| `ABC158 C` | [Tax Increase](https://atcoder.jp/contests/abc158/tasks/abc158_c) | implementation | [C++17](solutions/atcoder/implementation/abc158_c_tax_increase.cpp) · [Notes](notes/atcoder/abc158_c_tax_increase.md) |
| `ABC159 A` | [The Number of Even Pairs](https://atcoder.jp/contests/abc159/tasks/abc159_a) | implementation | [C++17](solutions/atcoder/implementation/abc159_a_the_number_of_even_pairs.cpp) · [Notes](notes/atcoder/abc159_a_the_number_of_even_pairs.md) |
| `ABC159 B` | [String Palindrome](https://atcoder.jp/contests/abc159/tasks/abc159_b) | implementation | [C++17](solutions/atcoder/implementation/abc159_b_string_palindrome.cpp) · [Notes](notes/atcoder/abc159_b_string_palindrome.md) |
| `ABC160 A` | [Coffee](https://atcoder.jp/contests/abc160/tasks/abc160_a) | implementation | [C++17](solutions/atcoder/implementation/abc160_a_coffee.cpp) · [Notes](notes/atcoder/abc160_a_coffee.md) |
| `ABC160 B` | [Golden Coins](https://atcoder.jp/contests/abc160/tasks/abc160_b) | implementation | [C++17](solutions/atcoder/implementation/abc160_b_golden_coins.cpp) · [Notes](notes/atcoder/abc160_b_golden_coins.md) |
| `ABC160 C` | [Traveling Salesman around Lake](https://atcoder.jp/contests/abc160/tasks/abc160_c) | greedy | [C++17](solutions/atcoder/greedy/abc160_c_traveling_salesman_around_lake.cpp) · [Notes](notes/atcoder/abc160_c_traveling_salesman_around_lake.md) |
| `ABC161 A` | [ABC Swap](https://atcoder.jp/contests/abc161/tasks/abc161_a) | implementation | [C++17](solutions/atcoder/implementation/abc161_a_abc_swap.cpp) · [Notes](notes/atcoder/abc161_a_abc_swap.md) |
| `ABC161 B` | [Popular Vote](https://atcoder.jp/contests/abc161/tasks/abc161_b) | implementation | [C++17](solutions/atcoder/implementation/abc161_b_popular_vote.cpp) · [Notes](notes/atcoder/abc161_b_popular_vote.md) |
| `ABC161 C` | [Replacing Integer](https://atcoder.jp/contests/abc161/tasks/abc161_c) | implementation | [C++17](solutions/atcoder/implementation/abc161_c_replacing_integer.cpp) · [Notes](notes/atcoder/abc161_c_replacing_integer.md) |
| `ABC162 A` | [Lucky 7](https://atcoder.jp/contests/abc162/tasks/abc162_a) | implementation | [C++17](solutions/atcoder/implementation/abc162_a_lucky_7.cpp) · [Notes](notes/atcoder/abc162_a_lucky_7.md) |
| `ABC162 B` | [FizzBuzz Sum](https://atcoder.jp/contests/abc162/tasks/abc162_b) | implementation | [C++17](solutions/atcoder/implementation/abc162_b_fizzbuzz_sum.cpp) · [Notes](notes/atcoder/abc162_b_fizzbuzz_sum.md) |
| `ABC162 C` | [Sum of gcd of Tuples (Easy)](https://atcoder.jp/contests/abc162/tasks/abc162_c) | number theory | [C++17](solutions/atcoder/number_theory/abc162_c_sum_of_gcd_of_tuples_easy.cpp) · [Notes](notes/atcoder/abc162_c_sum_of_gcd_of_tuples_easy.md) |
| `ABC163 A` | [Circle Pond](https://atcoder.jp/contests/abc163/tasks/abc163_a) | implementation | [C++17](solutions/atcoder/implementation/abc163_a_circle_pond.cpp) · [Notes](notes/atcoder/abc163_a_circle_pond.md) |
| `ABC163 B` | [Homework](https://atcoder.jp/contests/abc163/tasks/abc163_b) | implementation | [C++17](solutions/atcoder/implementation/abc163_b_homework.cpp) · [Notes](notes/atcoder/abc163_b_homework.md) |
| `ABC163 C` | [management](https://atcoder.jp/contests/abc163/tasks/abc163_c) | implementation | [C++17](solutions/atcoder/implementation/abc163_c_management.cpp) · [Notes](notes/atcoder/abc163_c_management.md) |
| `ABC164 A` | [Sheep and Wolves](https://atcoder.jp/contests/abc164/tasks/abc164_a) | implementation | [C++17](solutions/atcoder/implementation/abc164_a_sheep_and_wolves.cpp) · [Notes](notes/atcoder/abc164_a_sheep_and_wolves.md) |
| `ABC164 B` | [Battle](https://atcoder.jp/contests/abc164/tasks/abc164_b) | implementation | [C++17](solutions/atcoder/implementation/abc164_b_battle.cpp) · [Notes](notes/atcoder/abc164_b_battle.md) |
| `ABC164 C` | [gacha](https://atcoder.jp/contests/abc164/tasks/abc164_c) | implementation | [C++17](solutions/atcoder/implementation/abc164_c_gacha.cpp) · [Notes](notes/atcoder/abc164_c_gacha.md) |
| `ABC165 A` | [We Love Golf](https://atcoder.jp/contests/abc165/tasks/abc165_a) | implementation | [C++17](solutions/atcoder/implementation/abc165_a_we_love_golf.cpp) · [Notes](notes/atcoder/abc165_a_we_love_golf.md) |
| `ABC165 B` | [1%](https://atcoder.jp/contests/abc165/tasks/abc165_b) | implementation | [C++17](solutions/atcoder/implementation/abc165_b_1.cpp) · [Notes](notes/atcoder/abc165_b_1.md) |
| `ABC165 C` | [Many Requirements](https://atcoder.jp/contests/abc165/tasks/abc165_c) | recursion | [C++17](solutions/atcoder/recursion/abc165_c_many_requirements.cpp) · [Notes](notes/atcoder/abc165_c_many_requirements.md) |
| `ABC166 A` | [A?C](https://atcoder.jp/contests/abc166/tasks/abc166_a) | implementation | [C++17](solutions/atcoder/implementation/abc166_a_a_c.cpp) · [Notes](notes/atcoder/abc166_a_a_c.md) |
| `ABC166 B` | [Trick or Treat](https://atcoder.jp/contests/abc166/tasks/abc166_b) | implementation | [C++17](solutions/atcoder/implementation/abc166_b_trick_or_treat.cpp) · [Notes](notes/atcoder/abc166_b_trick_or_treat.md) |
| `ABC166 C` | [Peaks](https://atcoder.jp/contests/abc166/tasks/abc166_c) | graphs | [C++17](solutions/atcoder/graphs/abc166_c_peaks.cpp) · [Notes](notes/atcoder/abc166_c_peaks.md) |
| `ABC167 A` | [Registration](https://atcoder.jp/contests/abc167/tasks/abc167_a) | implementation | [C++17](solutions/atcoder/implementation/abc167_a_registration.cpp) · [Notes](notes/atcoder/abc167_a_registration.md) |
| `ABC167 B` | [Easy Linear Programming](https://atcoder.jp/contests/abc167/tasks/abc167_b) | implementation | [C++17](solutions/atcoder/implementation/abc167_b_easy_linear_programming.cpp) · [Notes](notes/atcoder/abc167_b_easy_linear_programming.md) |
| `ABC168 A` | [∴ (Therefore)](https://atcoder.jp/contests/abc168/tasks/abc168_a) | implementation | [C++17](solutions/atcoder/implementation/abc168_a_therefore.cpp) · [Notes](notes/atcoder/abc168_a_therefore.md) |
| `ABC168 B` | [... (Triple Dots)](https://atcoder.jp/contests/abc168/tasks/abc168_b) | implementation | [C++17](solutions/atcoder/implementation/abc168_b_triple_dots.cpp) · [Notes](notes/atcoder/abc168_b_triple_dots.md) |
| `ABC169 A` | [Multiplication 1](https://atcoder.jp/contests/abc169/tasks/abc169_a) | implementation | [C++17](solutions/atcoder/implementation/abc169_a_multiplication_1.cpp) · [Notes](notes/atcoder/abc169_a_multiplication_1.md) |
| `ABC169 B` | [Multiplication 2](https://atcoder.jp/contests/abc169/tasks/abc169_b) | implementation | [C++17](solutions/atcoder/implementation/abc169_b_multiplication_2.cpp) · [Notes](notes/atcoder/abc169_b_multiplication_2.md) |
| `ABC170 A` | [Five Variables](https://atcoder.jp/contests/abc170/tasks/abc170_a) | implementation | [C++17](solutions/atcoder/implementation/abc170_a_five_variables.cpp) · [Notes](notes/atcoder/abc170_a_five_variables.md) |
| `ABC170 B` | [Crane and Turtle](https://atcoder.jp/contests/abc170/tasks/abc170_b) | implementation | [C++17](solutions/atcoder/implementation/abc170_b_crane_and_turtle.cpp) · [Notes](notes/atcoder/abc170_b_crane_and_turtle.md) |
| `ABC171 A` | [αlphabet](https://atcoder.jp/contests/abc171/tasks/abc171_a) | implementation | [C++17](solutions/atcoder/implementation/abc171_a_lphabet.cpp) · [Notes](notes/atcoder/abc171_a_lphabet.md) |
| `ABC171 B` | [Mix Juice](https://atcoder.jp/contests/abc171/tasks/abc171_b) | implementation | [C++17](solutions/atcoder/implementation/abc171_b_mix_juice.cpp) · [Notes](notes/atcoder/abc171_b_mix_juice.md) |
| `ABC172 A` | [Calc](https://atcoder.jp/contests/abc172/tasks/abc172_a) | implementation | [C++17](solutions/atcoder/implementation/abc172_a_calc.cpp) · [Notes](notes/atcoder/abc172_a_calc.md) |
| `ABC172 B` | [Minor Change](https://atcoder.jp/contests/abc172/tasks/abc172_b) | implementation | [C++17](solutions/atcoder/implementation/abc172_b_minor_change.cpp) · [Notes](notes/atcoder/abc172_b_minor_change.md) |
| `ABC173 A` | [Payment](https://atcoder.jp/contests/abc173/tasks/abc173_a) | implementation | [C++17](solutions/atcoder/implementation/abc173_a_payment.cpp) · [Notes](notes/atcoder/abc173_a_payment.md) |
| `ABC173 B` | [Judge Status Summary](https://atcoder.jp/contests/abc173/tasks/abc173_b) | implementation | [C++17](solutions/atcoder/implementation/abc173_b_judge_status_summary.cpp) · [Notes](notes/atcoder/abc173_b_judge_status_summary.md) |
| `ABC174 A` | [Air Conditioner](https://atcoder.jp/contests/abc174/tasks/abc174_a) | implementation | [C++17](solutions/atcoder/implementation/abc174_a_air_conditioner.cpp) · [Notes](notes/atcoder/abc174_a_air_conditioner.md) |
| `ABC174 B` | [Distance](https://atcoder.jp/contests/abc174/tasks/abc174_b) | implementation | [C++17](solutions/atcoder/implementation/abc174_b_distance.cpp) · [Notes](notes/atcoder/abc174_b_distance.md) |
| `ABC175 A` | [Rainy Season](https://atcoder.jp/contests/abc175/tasks/abc175_a) | implementation | [C++17](solutions/atcoder/implementation/abc175_a_rainy_season.cpp) · [Notes](notes/atcoder/abc175_a_rainy_season.md) |
| `ABC175 B` | [Making Triangle](https://atcoder.jp/contests/abc175/tasks/abc175_b) | implementation | [C++17](solutions/atcoder/implementation/abc175_b_making_triangle.cpp) · [Notes](notes/atcoder/abc175_b_making_triangle.md) |
| `ABC176 A` | [Takoyaki](https://atcoder.jp/contests/abc176/tasks/abc176_a) | implementation | [C++17](solutions/atcoder/implementation/abc176_a_takoyaki.cpp) · [Notes](notes/atcoder/abc176_a_takoyaki.md) |
| `ABC176 B` | [Multiple of 9](https://atcoder.jp/contests/abc176/tasks/abc176_b) | implementation | [C++17](solutions/atcoder/implementation/abc176_b_multiple_of_9.cpp) · [Notes](notes/atcoder/abc176_b_multiple_of_9.md) |
| `ABC177 A` | [Don't be late](https://atcoder.jp/contests/abc177/tasks/abc177_a) | implementation | [C++17](solutions/atcoder/implementation/abc177_a_don_t_be_late.cpp) · [Notes](notes/atcoder/abc177_a_don_t_be_late.md) |
| `ABC177 B` | [Substring](https://atcoder.jp/contests/abc177/tasks/abc177_b) | implementation | [C++17](solutions/atcoder/implementation/abc177_b_substring.cpp) · [Notes](notes/atcoder/abc177_b_substring.md) |
| `ABC178 A` | [Not](https://atcoder.jp/contests/abc178/tasks/abc178_a) | implementation | [C++17](solutions/atcoder/implementation/abc178_a_not.cpp) · [Notes](notes/atcoder/abc178_a_not.md) |
| `ABC178 B` | [Product Max](https://atcoder.jp/contests/abc178/tasks/abc178_b) | implementation | [C++17](solutions/atcoder/implementation/abc178_b_product_max.cpp) · [Notes](notes/atcoder/abc178_b_product_max.md) |
| `ABC179 A` | [Plural Form](https://atcoder.jp/contests/abc179/tasks/abc179_a) | implementation | [C++17](solutions/atcoder/implementation/abc179_a_plural_form.cpp) · [Notes](notes/atcoder/abc179_a_plural_form.md) |
| `ABC179 B` | [Go to Jail](https://atcoder.jp/contests/abc179/tasks/abc179_b) | implementation | [C++17](solutions/atcoder/implementation/abc179_b_go_to_jail.cpp) · [Notes](notes/atcoder/abc179_b_go_to_jail.md) |
| `ABC180 A` | [box](https://atcoder.jp/contests/abc180/tasks/abc180_a) | implementation | [C++17](solutions/atcoder/implementation/abc180_a_box.cpp) · [Notes](notes/atcoder/abc180_a_box.md) |
| `ABC180 B` | [Various distances](https://atcoder.jp/contests/abc180/tasks/abc180_b) | implementation | [C++17](solutions/atcoder/implementation/abc180_b_various_distances.cpp) · [Notes](notes/atcoder/abc180_b_various_distances.md) |
| `ABC181 A` | [Heavy Rotation](https://atcoder.jp/contests/abc181/tasks/abc181_a) | implementation | [C++17](solutions/atcoder/implementation/abc181_a_heavy_rotation.cpp) · [Notes](notes/atcoder/abc181_a_heavy_rotation.md) |
| `ABC181 B` | [Trapezoid Sum](https://atcoder.jp/contests/abc181/tasks/abc181_b) | implementation | [C++17](solutions/atcoder/implementation/abc181_b_trapezoid_sum.cpp) · [Notes](notes/atcoder/abc181_b_trapezoid_sum.md) |
| `ABC182 A` | [twiblr](https://atcoder.jp/contests/abc182/tasks/abc182_a) | implementation | [C++17](solutions/atcoder/implementation/abc182_a_twiblr.cpp) · [Notes](notes/atcoder/abc182_a_twiblr.md) |
| `ABC182 B` | [Almost GCD](https://atcoder.jp/contests/abc182/tasks/abc182_b) | implementation | [C++17](solutions/atcoder/implementation/abc182_b_almost_gcd.cpp) · [Notes](notes/atcoder/abc182_b_almost_gcd.md) |
| `ABC183 A` | [ReLU](https://atcoder.jp/contests/abc183/tasks/abc183_a) | implementation | [C++17](solutions/atcoder/implementation/abc183_a_relu.cpp) · [Notes](notes/atcoder/abc183_a_relu.md) |
| `ABC183 B` | [Billiards](https://atcoder.jp/contests/abc183/tasks/abc183_b) | implementation | [C++17](solutions/atcoder/implementation/abc183_b_billiards.cpp) · [Notes](notes/atcoder/abc183_b_billiards.md) |
| `ABC184 A` | [Determinant](https://atcoder.jp/contests/abc184/tasks/abc184_a) | implementation | [C++17](solutions/atcoder/implementation/abc184_a_determinant.cpp) · [Notes](notes/atcoder/abc184_a_determinant.md) |
| `ABC184 B` | [Quizzes](https://atcoder.jp/contests/abc184/tasks/abc184_b) | implementation | [C++17](solutions/atcoder/implementation/abc184_b_quizzes.cpp) · [Notes](notes/atcoder/abc184_b_quizzes.md) |
| `ABC185 A` | [ABC Preparation](https://atcoder.jp/contests/abc185/tasks/abc185_a) | implementation | [C++17](solutions/atcoder/implementation/abc185_a_abc_preparation.cpp) · [Notes](notes/atcoder/abc185_a_abc_preparation.md) |
| `ABC185 B` | [Smartphone Addiction](https://atcoder.jp/contests/abc185/tasks/abc185_b) | implementation | [C++17](solutions/atcoder/implementation/abc185_b_smartphone_addiction.cpp) · [Notes](notes/atcoder/abc185_b_smartphone_addiction.md) |
| `ABC186 A` | [Brick](https://atcoder.jp/contests/abc186/tasks/abc186_a) | implementation | [C++17](solutions/atcoder/implementation/abc186_a_brick.cpp) · [Notes](notes/atcoder/abc186_a_brick.md) |
| `ABC186 B` | [Blocks on Grid](https://atcoder.jp/contests/abc186/tasks/abc186_b) | implementation | [C++17](solutions/atcoder/implementation/abc186_b_blocks_on_grid.cpp) · [Notes](notes/atcoder/abc186_b_blocks_on_grid.md) |
| `ABC187 A` | [Large Digits](https://atcoder.jp/contests/abc187/tasks/abc187_a) | implementation | [C++17](solutions/atcoder/implementation/abc187_a_large_digits.cpp) · [Notes](notes/atcoder/abc187_a_large_digits.md) |
| `ABC187 B` | [Gentle Pairs](https://atcoder.jp/contests/abc187/tasks/abc187_b) | implementation | [C++17](solutions/atcoder/implementation/abc187_b_gentle_pairs.cpp) · [Notes](notes/atcoder/abc187_b_gentle_pairs.md) |
| `ABC188 A` | [Three-Point Shot](https://atcoder.jp/contests/abc188/tasks/abc188_a) | implementation | [C++17](solutions/atcoder/implementation/abc188_a_three_point_shot.cpp) · [Notes](notes/atcoder/abc188_a_three_point_shot.md) |
| `ABC188 B` | [Orthogonality](https://atcoder.jp/contests/abc188/tasks/abc188_b) | implementation | [C++17](solutions/atcoder/implementation/abc188_b_orthogonality.cpp) · [Notes](notes/atcoder/abc188_b_orthogonality.md) |
| `ABC189 A` | [Slot](https://atcoder.jp/contests/abc189/tasks/abc189_a) | implementation | [C++17](solutions/atcoder/implementation/abc189_a_slot.cpp) · [Notes](notes/atcoder/abc189_a_slot.md) |
| `ABC189 B` | [Alcoholic](https://atcoder.jp/contests/abc189/tasks/abc189_b) | implementation | [C++17](solutions/atcoder/implementation/abc189_b_alcoholic.cpp) · [Notes](notes/atcoder/abc189_b_alcoholic.md) |
| `ABC190 A` | [Very Very Primitive Game](https://atcoder.jp/contests/abc190/tasks/abc190_a) | implementation | [C++17](solutions/atcoder/implementation/abc190_a_very_very_primitive_game.cpp) · [Notes](notes/atcoder/abc190_a_very_very_primitive_game.md) |
| `ABC190 B` | [Magic 3](https://atcoder.jp/contests/abc190/tasks/abc190_b) | implementation | [C++17](solutions/atcoder/implementation/abc190_b_magic_3.cpp) · [Notes](notes/atcoder/abc190_b_magic_3.md) |
| `ABC191 A` | [Vanishing Pitch](https://atcoder.jp/contests/abc191/tasks/abc191_a) | implementation | [C++17](solutions/atcoder/implementation/abc191_a_vanishing_pitch.cpp) · [Notes](notes/atcoder/abc191_a_vanishing_pitch.md) |
| `ABC191 B` | [Remove It](https://atcoder.jp/contests/abc191/tasks/abc191_b) | implementation | [C++17](solutions/atcoder/implementation/abc191_b_remove_it.cpp) · [Notes](notes/atcoder/abc191_b_remove_it.md) |
| `ABC192 A` | [Star](https://atcoder.jp/contests/abc192/tasks/abc192_a) | implementation | [C++17](solutions/atcoder/implementation/abc192_a_star.cpp) · [Notes](notes/atcoder/abc192_a_star.md) |
| `ABC192 B` | [uNrEaDaBlE sTrInG](https://atcoder.jp/contests/abc192/tasks/abc192_b) | implementation | [C++17](solutions/atcoder/implementation/abc192_b_unreadable_string.cpp) · [Notes](notes/atcoder/abc192_b_unreadable_string.md) |
| `ABC193 A` | [Discount](https://atcoder.jp/contests/abc193/tasks/abc193_a) | implementation | [C++17](solutions/atcoder/implementation/abc193_a_discount.cpp) · [Notes](notes/atcoder/abc193_a_discount.md) |
| `ABC193 B` | [Play Snuke](https://atcoder.jp/contests/abc193/tasks/abc193_b) | implementation | [C++17](solutions/atcoder/implementation/abc193_b_play_snuke.cpp) · [Notes](notes/atcoder/abc193_b_play_snuke.md) |
| `ABC194 A` | [I Scream](https://atcoder.jp/contests/abc194/tasks/abc194_a) | implementation | [C++17](solutions/atcoder/implementation/abc194_a_i_scream.cpp) · [Notes](notes/atcoder/abc194_a_i_scream.md) |
| `ABC194 B` | [Job Assignment](https://atcoder.jp/contests/abc194/tasks/abc194_b) | implementation | [C++17](solutions/atcoder/implementation/abc194_b_job_assignment.cpp) · [Notes](notes/atcoder/abc194_b_job_assignment.md) |
| `ABC195 A` | [Health M Death](https://atcoder.jp/contests/abc195/tasks/abc195_a) | implementation | [C++17](solutions/atcoder/implementation/abc195_a_health_m_death.cpp) · [Notes](notes/atcoder/abc195_a_health_m_death.md) |
| `ABC195 B` | [Many Oranges](https://atcoder.jp/contests/abc195/tasks/abc195_b) | implementation | [C++17](solutions/atcoder/implementation/abc195_b_many_oranges.cpp) · [Notes](notes/atcoder/abc195_b_many_oranges.md) |
| `ABC196 A` | [Difference Max](https://atcoder.jp/contests/abc196/tasks/abc196_a) | implementation | [C++17](solutions/atcoder/implementation/abc196_a_difference_max.cpp) · [Notes](notes/atcoder/abc196_a_difference_max.md) |
| `ABC196 B` | [Round Down](https://atcoder.jp/contests/abc196/tasks/abc196_b) | implementation | [C++17](solutions/atcoder/implementation/abc196_b_round_down.cpp) · [Notes](notes/atcoder/abc196_b_round_down.md) |
| `ABC197 A` | [Rotate](https://atcoder.jp/contests/abc197/tasks/abc197_a) | implementation | [C++17](solutions/atcoder/implementation/abc197_a_rotate.cpp) · [Notes](notes/atcoder/abc197_a_rotate.md) |
| `ABC197 B` | [Visibility](https://atcoder.jp/contests/abc197/tasks/abc197_b) | implementation | [C++17](solutions/atcoder/implementation/abc197_b_visibility.cpp) · [Notes](notes/atcoder/abc197_b_visibility.md) |
| `ABC198 A` | [Div](https://atcoder.jp/contests/abc198/tasks/abc198_a) | implementation | [C++17](solutions/atcoder/implementation/abc198_a_div.cpp) · [Notes](notes/atcoder/abc198_a_div.md) |
| `ABC198 B` | [Palindrome with leading zeros](https://atcoder.jp/contests/abc198/tasks/abc198_b) | implementation | [C++17](solutions/atcoder/implementation/abc198_b_palindrome_with_leading_zeros.cpp) · [Notes](notes/atcoder/abc198_b_palindrome_with_leading_zeros.md) |
| `ABC199 A` | [Square Inequality](https://atcoder.jp/contests/abc199/tasks/abc199_a) | implementation | [C++17](solutions/atcoder/implementation/abc199_a_square_inequality.cpp) · [Notes](notes/atcoder/abc199_a_square_inequality.md) |
| `ABC199 B` | [Intersection](https://atcoder.jp/contests/abc199/tasks/abc199_b) | implementation | [C++17](solutions/atcoder/implementation/abc199_b_intersection.cpp) · [Notes](notes/atcoder/abc199_b_intersection.md) |

</details>

<details>
<summary><strong>AtCoder Beginner Contest 200–299</strong> · 200 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `ABC200 A` | [Century](https://atcoder.jp/contests/abc200/tasks/abc200_a) | implementation | [C++17](solutions/atcoder/implementation/abc200_a_century.cpp) · [Notes](notes/atcoder/abc200_a_century.md) |
| `ABC200 B` | [200th ABC-200](https://atcoder.jp/contests/abc200/tasks/abc200_b) | implementation | [C++17](solutions/atcoder/implementation/abc200_b_200th_abc_200.cpp) · [Notes](notes/atcoder/abc200_b_200th_abc_200.md) |
| `ABC201 A` | [Tiny Arithmetic Sequence](https://atcoder.jp/contests/abc201/tasks/abc201_a) | implementation | [C++17](solutions/atcoder/implementation/abc201_a_tiny_arithmetic_sequence.cpp) · [Notes](notes/atcoder/abc201_a_tiny_arithmetic_sequence.md) |
| `ABC201 B` | [Do you know the second highest mountain?](https://atcoder.jp/contests/abc201/tasks/abc201_b) | implementation | [C++17](solutions/atcoder/implementation/abc201_b_do_you_know_the_second_highest_mountain.cpp) · [Notes](notes/atcoder/abc201_b_do_you_know_the_second_highest_mountain.md) |
| `ABC202 A` | [Three Dice](https://atcoder.jp/contests/abc202/tasks/abc202_a) | implementation | [C++17](solutions/atcoder/implementation/abc202_a_three_dice.cpp) · [Notes](notes/atcoder/abc202_a_three_dice.md) |
| `ABC202 B` | [180°](https://atcoder.jp/contests/abc202/tasks/abc202_b) | implementation | [C++17](solutions/atcoder/implementation/abc202_b_180.cpp) · [Notes](notes/atcoder/abc202_b_180.md) |
| `ABC203 A` | [Chinchirorin](https://atcoder.jp/contests/abc203/tasks/abc203_a) | implementation | [C++17](solutions/atcoder/implementation/abc203_a_chinchirorin.cpp) · [Notes](notes/atcoder/abc203_a_chinchirorin.md) |
| `ABC203 B` | [AtCoder Condominium](https://atcoder.jp/contests/abc203/tasks/abc203_b) | implementation | [C++17](solutions/atcoder/implementation/abc203_b_atcoder_condominium.cpp) · [Notes](notes/atcoder/abc203_b_atcoder_condominium.md) |
| `ABC204 A` | [Rock-paper-scissors](https://atcoder.jp/contests/abc204/tasks/abc204_a) | implementation | [C++17](solutions/atcoder/implementation/abc204_a_rock_paper_scissors.cpp) · [Notes](notes/atcoder/abc204_a_rock_paper_scissors.md) |
| `ABC204 B` | [Nuts](https://atcoder.jp/contests/abc204/tasks/abc204_b) | implementation | [C++17](solutions/atcoder/implementation/abc204_b_nuts.cpp) · [Notes](notes/atcoder/abc204_b_nuts.md) |
| `ABC205 A` | [kcal](https://atcoder.jp/contests/abc205/tasks/abc205_a) | implementation | [C++17](solutions/atcoder/implementation/abc205_a_kcal.cpp) · [Notes](notes/atcoder/abc205_a_kcal.md) |
| `ABC205 B` | [Permutation Check](https://atcoder.jp/contests/abc205/tasks/abc205_b) | implementation | [C++17](solutions/atcoder/implementation/abc205_b_permutation_check.cpp) · [Notes](notes/atcoder/abc205_b_permutation_check.md) |
| `ABC206 A` | [Maxi-Buying](https://atcoder.jp/contests/abc206/tasks/abc206_a) | implementation | [C++17](solutions/atcoder/implementation/abc206_a_maxi_buying.cpp) · [Notes](notes/atcoder/abc206_a_maxi_buying.md) |
| `ABC206 B` | [Savings](https://atcoder.jp/contests/abc206/tasks/abc206_b) | implementation | [C++17](solutions/atcoder/implementation/abc206_b_savings.cpp) · [Notes](notes/atcoder/abc206_b_savings.md) |
| `ABC207 A` | [Repression](https://atcoder.jp/contests/abc207/tasks/abc207_a) | implementation | [C++17](solutions/atcoder/implementation/abc207_a_repression.cpp) · [Notes](notes/atcoder/abc207_a_repression.md) |
| `ABC207 B` | [Hydrate](https://atcoder.jp/contests/abc207/tasks/abc207_b) | implementation | [C++17](solutions/atcoder/implementation/abc207_b_hydrate.cpp) · [Notes](notes/atcoder/abc207_b_hydrate.md) |
| `ABC208 A` | [Rolling Dice](https://atcoder.jp/contests/abc208/tasks/abc208_a) | implementation | [C++17](solutions/atcoder/implementation/abc208_a_rolling_dice.cpp) · [Notes](notes/atcoder/abc208_a_rolling_dice.md) |
| `ABC208 B` | [Factorial Yen Coin](https://atcoder.jp/contests/abc208/tasks/abc208_b) | implementation | [C++17](solutions/atcoder/implementation/abc208_b_factorial_yen_coin.cpp) · [Notes](notes/atcoder/abc208_b_factorial_yen_coin.md) |
| `ABC209 A` | [Counting](https://atcoder.jp/contests/abc209/tasks/abc209_a) | implementation | [C++17](solutions/atcoder/implementation/abc209_a_counting.cpp) · [Notes](notes/atcoder/abc209_a_counting.md) |
| `ABC209 B` | [Can you buy them all?](https://atcoder.jp/contests/abc209/tasks/abc209_b) | implementation | [C++17](solutions/atcoder/implementation/abc209_b_can_you_buy_them_all.cpp) · [Notes](notes/atcoder/abc209_b_can_you_buy_them_all.md) |
| `ABC210 A` | [Cabbages](https://atcoder.jp/contests/abc210/tasks/abc210_a) | implementation | [C++17](solutions/atcoder/implementation/abc210_a_cabbages.cpp) · [Notes](notes/atcoder/abc210_a_cabbages.md) |
| `ABC210 B` | [Bouzu Mekuri](https://atcoder.jp/contests/abc210/tasks/abc210_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc210_b_bouzu_mekuri.cpp) · [Notes](notes/atcoder/abc210_b_bouzu_mekuri.md) |
| `ABC211 A` | [Blood Pressure](https://atcoder.jp/contests/abc211/tasks/abc211_a) | implementation | [C++17](solutions/atcoder/implementation/abc211_a_blood_pressure.cpp) · [Notes](notes/atcoder/abc211_a_blood_pressure.md) |
| `ABC211 B` | [Cycle Hit](https://atcoder.jp/contests/abc211/tasks/abc211_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc211_b_cycle_hit.cpp) · [Notes](notes/atcoder/abc211_b_cycle_hit.md) |
| `ABC212 A` | [Alloy](https://atcoder.jp/contests/abc212/tasks/abc212_a) | implementation | [C++17](solutions/atcoder/implementation/abc212_a_alloy.cpp) · [Notes](notes/atcoder/abc212_a_alloy.md) |
| `ABC212 B` | [Weak Password](https://atcoder.jp/contests/abc212/tasks/abc212_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc212_b_weak_password.cpp) · [Notes](notes/atcoder/abc212_b_weak_password.md) |
| `ABC213 A` | [Bitwise Exclusive Or](https://atcoder.jp/contests/abc213/tasks/abc213_a) | implementation | [C++17](solutions/atcoder/implementation/abc213_a_bitwise_exclusive_or.cpp) · [Notes](notes/atcoder/abc213_a_bitwise_exclusive_or.md) |
| `ABC213 B` | [Booby Prize](https://atcoder.jp/contests/abc213/tasks/abc213_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc213_b_booby_prize.cpp) · [Notes](notes/atcoder/abc213_b_booby_prize.md) |
| `ABC214 A` | [New Generation ABC](https://atcoder.jp/contests/abc214/tasks/abc214_a) | implementation | [C++17](solutions/atcoder/implementation/abc214_a_new_generation_abc.cpp) · [Notes](notes/atcoder/abc214_a_new_generation_abc.md) |
| `ABC214 B` | [How many?](https://atcoder.jp/contests/abc214/tasks/abc214_b) | implementation | [C++17](solutions/atcoder/implementation/abc214_b_how_many.cpp) · [Notes](notes/atcoder/abc214_b_how_many.md) |
| `ABC215 A` | [Your First Judge](https://atcoder.jp/contests/abc215/tasks/abc215_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc215_a_your_first_judge.cpp) · [Notes](notes/atcoder/abc215_a_your_first_judge.md) |
| `ABC215 B` | [log2(N)](https://atcoder.jp/contests/abc215/tasks/abc215_b) | implementation | [C++17](solutions/atcoder/implementation/abc215_b_log2_n.cpp) · [Notes](notes/atcoder/abc215_b_log2_n.md) |
| `ABC216 A` | [Signed Difficulty](https://atcoder.jp/contests/abc216/tasks/abc216_a) | implementation | [C++17](solutions/atcoder/implementation/abc216_a_signed_difficulty.cpp) · [Notes](notes/atcoder/abc216_a_signed_difficulty.md) |
| `ABC216 B` | [Same Name](https://atcoder.jp/contests/abc216/tasks/abc216_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc216_b_same_name.cpp) · [Notes](notes/atcoder/abc216_b_same_name.md) |
| `ABC217 A` | [Lexicographic Order](https://atcoder.jp/contests/abc217/tasks/abc217_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc217_a_lexicographic_order.cpp) · [Notes](notes/atcoder/abc217_a_lexicographic_order.md) |
| `ABC217 B` | [AtCoder Quiz](https://atcoder.jp/contests/abc217/tasks/abc217_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc217_b_atcoder_quiz.cpp) · [Notes](notes/atcoder/abc217_b_atcoder_quiz.md) |
| `ABC218 A` | [Weather Forecast](https://atcoder.jp/contests/abc218/tasks/abc218_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc218_a_weather_forecast.cpp) · [Notes](notes/atcoder/abc218_a_weather_forecast.md) |
| `ABC218 B` | [qwerty](https://atcoder.jp/contests/abc218/tasks/abc218_b) | implementation | [C++17](solutions/atcoder/implementation/abc218_b_qwerty.cpp) · [Notes](notes/atcoder/abc218_b_qwerty.md) |
| `ABC219 A` | [AtCoder Quiz 2](https://atcoder.jp/contests/abc219/tasks/abc219_a) | implementation | [C++17](solutions/atcoder/implementation/abc219_a_atcoder_quiz_2.cpp) · [Notes](notes/atcoder/abc219_a_atcoder_quiz_2.md) |
| `ABC219 B` | [Maritozzo](https://atcoder.jp/contests/abc219/tasks/abc219_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc219_b_maritozzo.cpp) · [Notes](notes/atcoder/abc219_b_maritozzo.md) |
| `ABC220 A` | [Find Multiple](https://atcoder.jp/contests/abc220/tasks/abc220_a) | implementation | [C++17](solutions/atcoder/implementation/abc220_a_find_multiple.cpp) · [Notes](notes/atcoder/abc220_a_find_multiple.md) |
| `ABC220 B` | [Base K](https://atcoder.jp/contests/abc220/tasks/abc220_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc220_b_base_k.cpp) · [Notes](notes/atcoder/abc220_b_base_k.md) |
| `ABC221 A` | [Seismic magnitude scales](https://atcoder.jp/contests/abc221/tasks/abc221_a) | implementation | [C++17](solutions/atcoder/implementation/abc221_a_seismic_magnitude_scales.cpp) · [Notes](notes/atcoder/abc221_a_seismic_magnitude_scales.md) |
| `ABC221 B` | [typo](https://atcoder.jp/contests/abc221/tasks/abc221_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc221_b_typo.cpp) · [Notes](notes/atcoder/abc221_b_typo.md) |
| `ABC222 A` | [Four Digits](https://atcoder.jp/contests/abc222/tasks/abc222_a) | implementation | [C++17](solutions/atcoder/implementation/abc222_a_four_digits.cpp) · [Notes](notes/atcoder/abc222_a_four_digits.md) |
| `ABC222 B` | [Failing Grade](https://atcoder.jp/contests/abc222/tasks/abc222_b) | implementation | [C++17](solutions/atcoder/implementation/abc222_b_failing_grade.cpp) · [Notes](notes/atcoder/abc222_b_failing_grade.md) |
| `ABC223 A` | [Exact Price](https://atcoder.jp/contests/abc223/tasks/abc223_a) | implementation | [C++17](solutions/atcoder/implementation/abc223_a_exact_price.cpp) · [Notes](notes/atcoder/abc223_a_exact_price.md) |
| `ABC223 B` | [String Shifting](https://atcoder.jp/contests/abc223/tasks/abc223_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc223_b_string_shifting.cpp) · [Notes](notes/atcoder/abc223_b_string_shifting.md) |
| `ABC224 A` | [Tires](https://atcoder.jp/contests/abc224/tasks/abc224_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc224_a_tires.cpp) · [Notes](notes/atcoder/abc224_a_tires.md) |
| `ABC224 B` | [Mongeness](https://atcoder.jp/contests/abc224/tasks/abc224_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc224_b_mongeness.cpp) · [Notes](notes/atcoder/abc224_b_mongeness.md) |
| `ABC225 A` | [Distinct Strings](https://atcoder.jp/contests/abc225/tasks/abc225_a) | implementation, strings, sorting | [C++17](solutions/atcoder/implementation/abc225_a_distinct_strings.cpp) · [Notes](notes/atcoder/abc225_a_distinct_strings.md) |
| `ABC225 B` | [Star or Not](https://atcoder.jp/contests/abc225/tasks/abc225_b) | implementation | [C++17](solutions/atcoder/implementation/abc225_b_star_or_not.cpp) · [Notes](notes/atcoder/abc225_b_star_or_not.md) |
| `ABC226 A` | [Round decimals](https://atcoder.jp/contests/abc226/tasks/abc226_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc226_a_round_decimals.cpp) · [Notes](notes/atcoder/abc226_a_round_decimals.md) |
| `ABC226 B` | [Counting Arrays](https://atcoder.jp/contests/abc226/tasks/abc226_b) | implementation, ordered containers | [C++17](solutions/atcoder/implementation/abc226_b_counting_arrays.cpp) · [Notes](notes/atcoder/abc226_b_counting_arrays.md) |
| `ABC227 A` | [Last Card](https://atcoder.jp/contests/abc227/tasks/abc227_a) | implementation | [C++17](solutions/atcoder/implementation/abc227_a_last_card.cpp) · [Notes](notes/atcoder/abc227_a_last_card.md) |
| `ABC227 B` | [KEYENCE building](https://atcoder.jp/contests/abc227/tasks/abc227_b) | implementation | [C++17](solutions/atcoder/implementation/abc227_b_keyence_building.cpp) · [Notes](notes/atcoder/abc227_b_keyence_building.md) |
| `ABC228 A` | [On and Off](https://atcoder.jp/contests/abc228/tasks/abc228_a) | implementation | [C++17](solutions/atcoder/implementation/abc228_a_on_and_off.cpp) · [Notes](notes/atcoder/abc228_a_on_and_off.md) |
| `ABC228 B` | [Takahashi's Secret](https://atcoder.jp/contests/abc228/tasks/abc228_b) | implementation | [C++17](solutions/atcoder/implementation/abc228_b_takahashi_s_secret.cpp) · [Notes](notes/atcoder/abc228_b_takahashi_s_secret.md) |
| `ABC229 A` | [First Grid](https://atcoder.jp/contests/abc229/tasks/abc229_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc229_a_first_grid.cpp) · [Notes](notes/atcoder/abc229_a_first_grid.md) |
| `ABC229 B` | [Hard Calculation](https://atcoder.jp/contests/abc229/tasks/abc229_b) | implementation | [C++17](solutions/atcoder/implementation/abc229_b_hard_calculation.cpp) · [Notes](notes/atcoder/abc229_b_hard_calculation.md) |
| `ABC230 A` | [AtCoder Quiz 3](https://atcoder.jp/contests/abc230/tasks/abc230_a) | implementation | [C++17](solutions/atcoder/implementation/abc230_a_atcoder_quiz_3.cpp) · [Notes](notes/atcoder/abc230_a_atcoder_quiz_3.md) |
| `ABC230 B` | [Triple Metre](https://atcoder.jp/contests/abc230/tasks/abc230_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc230_b_triple_metre.cpp) · [Notes](notes/atcoder/abc230_b_triple_metre.md) |
| `ABC231 A` | [Water Pressure](https://atcoder.jp/contests/abc231/tasks/abc231_a) | implementation | [C++17](solutions/atcoder/implementation/abc231_a_water_pressure.cpp) · [Notes](notes/atcoder/abc231_a_water_pressure.md) |
| `ABC231 B` | [Election](https://atcoder.jp/contests/abc231/tasks/abc231_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc231_b_election.cpp) · [Notes](notes/atcoder/abc231_b_election.md) |
| `ABC232 A` | [QQ solver](https://atcoder.jp/contests/abc232/tasks/abc232_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc232_a_qq_solver.cpp) · [Notes](notes/atcoder/abc232_a_qq_solver.md) |
| `ABC232 B` | [Caesar Cipher](https://atcoder.jp/contests/abc232/tasks/abc232_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc232_b_caesar_cipher.cpp) · [Notes](notes/atcoder/abc232_b_caesar_cipher.md) |
| `ABC233 A` | [10yen Stamp](https://atcoder.jp/contests/abc233/tasks/abc233_a) | implementation | [C++17](solutions/atcoder/implementation/abc233_a_10yen_stamp.cpp) · [Notes](notes/atcoder/abc233_a_10yen_stamp.md) |
| `ABC233 B` | [A Reverse](https://atcoder.jp/contests/abc233/tasks/abc233_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc233_b_a_reverse.cpp) · [Notes](notes/atcoder/abc233_b_a_reverse.md) |
| `ABC234 A` | [Weird Function](https://atcoder.jp/contests/abc234/tasks/abc234_a) | implementation | [C++17](solutions/atcoder/implementation/abc234_a_weird_function.cpp) · [Notes](notes/atcoder/abc234_a_weird_function.md) |
| `ABC234 B` | [Longest Segment](https://atcoder.jp/contests/abc234/tasks/abc234_b) | implementation | [C++17](solutions/atcoder/implementation/abc234_b_longest_segment.cpp) · [Notes](notes/atcoder/abc234_b_longest_segment.md) |
| `ABC235 A` | [Rotate](https://atcoder.jp/contests/abc235/tasks/abc235_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc235_a_rotate.cpp) · [Notes](notes/atcoder/abc235_a_rotate.md) |
| `ABC235 B` | [Climbing Takahashi](https://atcoder.jp/contests/abc235/tasks/abc235_b) | implementation | [C++17](solutions/atcoder/implementation/abc235_b_climbing_takahashi.cpp) · [Notes](notes/atcoder/abc235_b_climbing_takahashi.md) |
| `ABC236 A` | [chukodai](https://atcoder.jp/contests/abc236/tasks/abc236_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc236_a_chukodai.cpp) · [Notes](notes/atcoder/abc236_a_chukodai.md) |
| `ABC236 B` | [Who is missing?](https://atcoder.jp/contests/abc236/tasks/abc236_b) | implementation | [C++17](solutions/atcoder/implementation/abc236_b_who_is_missing.cpp) · [Notes](notes/atcoder/abc236_b_who_is_missing.md) |
| `ABC237 A` | [Not Overflow](https://atcoder.jp/contests/abc237/tasks/abc237_a) | implementation | [C++17](solutions/atcoder/implementation/abc237_a_not_overflow.cpp) · [Notes](notes/atcoder/abc237_a_not_overflow.md) |
| `ABC237 B` | [Matrix Transposition](https://atcoder.jp/contests/abc237/tasks/abc237_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc237_b_matrix_transposition.cpp) · [Notes](notes/atcoder/abc237_b_matrix_transposition.md) |
| `ABC238 A` | [Exponential or Quadratic](https://atcoder.jp/contests/abc238/tasks/abc238_a) | implementation | [C++17](solutions/atcoder/implementation/abc238_a_exponential_or_quadratic.cpp) · [Notes](notes/atcoder/abc238_a_exponential_or_quadratic.md) |
| `ABC238 B` | [Pizza](https://atcoder.jp/contests/abc238/tasks/abc238_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc238_b_pizza.cpp) · [Notes](notes/atcoder/abc238_b_pizza.md) |
| `ABC239 A` | [Horizon](https://atcoder.jp/contests/abc239/tasks/abc239_a) | implementation | [C++17](solutions/atcoder/implementation/abc239_a_horizon.cpp) · [Notes](notes/atcoder/abc239_a_horizon.md) |
| `ABC239 B` | [Integer Division](https://atcoder.jp/contests/abc239/tasks/abc239_b) | implementation | [C++17](solutions/atcoder/implementation/abc239_b_integer_division.cpp) · [Notes](notes/atcoder/abc239_b_integer_division.md) |
| `ABC240 A` | [Edge Checker](https://atcoder.jp/contests/abc240/tasks/abc240_a) | implementation | [C++17](solutions/atcoder/implementation/abc240_a_edge_checker.cpp) · [Notes](notes/atcoder/abc240_a_edge_checker.md) |
| `ABC240 B` | [Count Distinct Integers](https://atcoder.jp/contests/abc240/tasks/abc240_b) | implementation, ordered containers | [C++17](solutions/atcoder/implementation/abc240_b_count_distinct_integers.cpp) · [Notes](notes/atcoder/abc240_b_count_distinct_integers.md) |
| `ABC241 A` | [Digit Machine](https://atcoder.jp/contests/abc241/tasks/abc241_a) | implementation | [C++17](solutions/atcoder/implementation/abc241_a_digit_machine.cpp) · [Notes](notes/atcoder/abc241_a_digit_machine.md) |
| `ABC241 B` | [Pasta](https://atcoder.jp/contests/abc241/tasks/abc241_b) | implementation, ordered containers | [C++17](solutions/atcoder/implementation/abc241_b_pasta.cpp) · [Notes](notes/atcoder/abc241_b_pasta.md) |
| `ABC242 A` | [T-shirt](https://atcoder.jp/contests/abc242/tasks/abc242_a) | implementation | [C++17](solutions/atcoder/implementation/abc242_a_t_shirt.cpp) · [Notes](notes/atcoder/abc242_a_t_shirt.md) |
| `ABC242 B` | [Minimize Ordering](https://atcoder.jp/contests/abc242/tasks/abc242_b) | implementation, strings, sorting | [C++17](solutions/atcoder/implementation/abc242_b_minimize_ordering.cpp) · [Notes](notes/atcoder/abc242_b_minimize_ordering.md) |
| `ABC243 A` | [Shampoo](https://atcoder.jp/contests/abc243/tasks/abc243_a) | implementation | [C++17](solutions/atcoder/implementation/abc243_a_shampoo.cpp) · [Notes](notes/atcoder/abc243_a_shampoo.md) |
| `ABC243 B` | [Hit and Blow](https://atcoder.jp/contests/abc243/tasks/abc243_b) | implementation | [C++17](solutions/atcoder/implementation/abc243_b_hit_and_blow.cpp) · [Notes](notes/atcoder/abc243_b_hit_and_blow.md) |
| `ABC244 A` | [Last Letter](https://atcoder.jp/contests/abc244/tasks/abc244_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc244_a_last_letter.cpp) · [Notes](notes/atcoder/abc244_a_last_letter.md) |
| `ABC244 B` | [Go Straight and Turn Right](https://atcoder.jp/contests/abc244/tasks/abc244_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc244_b_go_straight_and_turn_right.cpp) · [Notes](notes/atcoder/abc244_b_go_straight_and_turn_right.md) |
| `ABC245 A` | [Good morning](https://atcoder.jp/contests/abc245/tasks/abc245_a) | implementation | [C++17](solutions/atcoder/implementation/abc245_a_good_morning.cpp) · [Notes](notes/atcoder/abc245_a_good_morning.md) |
| `ABC245 B` | [Mex](https://atcoder.jp/contests/abc245/tasks/abc245_b) | implementation | [C++17](solutions/atcoder/implementation/abc245_b_mex.cpp) · [Notes](notes/atcoder/abc245_b_mex.md) |
| `ABC246 A` | [Four Points](https://atcoder.jp/contests/abc246/tasks/abc246_a) | implementation | [C++17](solutions/atcoder/implementation/abc246_a_four_points.cpp) · [Notes](notes/atcoder/abc246_a_four_points.md) |
| `ABC246 B` | [Get Closer](https://atcoder.jp/contests/abc246/tasks/abc246_b) | implementation | [C++17](solutions/atcoder/implementation/abc246_b_get_closer.cpp) · [Notes](notes/atcoder/abc246_b_get_closer.md) |
| `ABC247 A` | [Move Right](https://atcoder.jp/contests/abc247/tasks/abc247_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc247_a_move_right.cpp) · [Notes](notes/atcoder/abc247_a_move_right.md) |
| `ABC247 B` | [Unique Nicknames](https://atcoder.jp/contests/abc247/tasks/abc247_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc247_b_unique_nicknames.cpp) · [Notes](notes/atcoder/abc247_b_unique_nicknames.md) |
| `ABC248 A` | [Lacked Number](https://atcoder.jp/contests/abc248/tasks/abc248_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc248_a_lacked_number.cpp) · [Notes](notes/atcoder/abc248_a_lacked_number.md) |
| `ABC248 B` | [Slimes](https://atcoder.jp/contests/abc248/tasks/abc248_b) | implementation | [C++17](solutions/atcoder/implementation/abc248_b_slimes.cpp) · [Notes](notes/atcoder/abc248_b_slimes.md) |
| `ABC249 A` | [Jogging](https://atcoder.jp/contests/abc249/tasks/abc249_a) | implementation | [C++17](solutions/atcoder/implementation/abc249_a_jogging.cpp) · [Notes](notes/atcoder/abc249_a_jogging.md) |
| `ABC249 B` | [Perfect String](https://atcoder.jp/contests/abc249/tasks/abc249_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc249_b_perfect_string.cpp) · [Notes](notes/atcoder/abc249_b_perfect_string.md) |
| `ABC250 A` | [Adjacent Squares](https://atcoder.jp/contests/abc250/tasks/abc250_a) | implementation | [C++17](solutions/atcoder/implementation/abc250_a_adjacent_squares.cpp) · [Notes](notes/atcoder/abc250_a_adjacent_squares.md) |
| `ABC250 B` | [Enlarged Checker Board](https://atcoder.jp/contests/abc250/tasks/abc250_b) | implementation | [C++17](solutions/atcoder/implementation/abc250_b_enlarged_checker_board.cpp) · [Notes](notes/atcoder/abc250_b_enlarged_checker_board.md) |
| `ABC251 A` | [Six Characters](https://atcoder.jp/contests/abc251/tasks/abc251_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc251_a_six_characters.cpp) · [Notes](notes/atcoder/abc251_a_six_characters.md) |
| `ABC251 B` | [At Most 3 (Judge ver.)](https://atcoder.jp/contests/abc251/tasks/abc251_b) | implementation | [C++17](solutions/atcoder/implementation/abc251_b_at_most_3_judge_ver.cpp) · [Notes](notes/atcoder/abc251_b_at_most_3_judge_ver.md) |
| `ABC252 A` | [ASCII code](https://atcoder.jp/contests/abc252/tasks/abc252_a) | implementation | [C++17](solutions/atcoder/implementation/abc252_a_ascii_code.cpp) · [Notes](notes/atcoder/abc252_a_ascii_code.md) |
| `ABC252 B` | [Takahashi's Failure](https://atcoder.jp/contests/abc252/tasks/abc252_b) | implementation | [C++17](solutions/atcoder/implementation/abc252_b_takahashi_s_failure.cpp) · [Notes](notes/atcoder/abc252_b_takahashi_s_failure.md) |
| `ABC253 A` | [Median?](https://atcoder.jp/contests/abc253/tasks/abc253_a) | implementation | [C++17](solutions/atcoder/implementation/abc253_a_median.cpp) · [Notes](notes/atcoder/abc253_a_median.md) |
| `ABC253 B` | [Distance Between Tokens](https://atcoder.jp/contests/abc253/tasks/abc253_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc253_b_distance_between_tokens.cpp) · [Notes](notes/atcoder/abc253_b_distance_between_tokens.md) |
| `ABC254 A` | [Last Two Digits](https://atcoder.jp/contests/abc254/tasks/abc254_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc254_a_last_two_digits.cpp) · [Notes](notes/atcoder/abc254_a_last_two_digits.md) |
| `ABC254 B` | [Practical Computing](https://atcoder.jp/contests/abc254/tasks/abc254_b) | implementation | [C++17](solutions/atcoder/implementation/abc254_b_practical_computing.cpp) · [Notes](notes/atcoder/abc254_b_practical_computing.md) |
| `ABC255 A` | [You should output ARC, though this is ABC.](https://atcoder.jp/contests/abc255/tasks/abc255_a) | implementation | [C++17](solutions/atcoder/implementation/abc255_a_you_should_output_arc_though_this_is_abc.cpp) · [Notes](notes/atcoder/abc255_a_you_should_output_arc_though_this_is_abc.md) |
| `ABC255 B` | [Light It Up](https://atcoder.jp/contests/abc255/tasks/abc255_b) | implementation | [C++17](solutions/atcoder/implementation/abc255_b_light_it_up.cpp) · [Notes](notes/atcoder/abc255_b_light_it_up.md) |
| `ABC256 A` | [2^N](https://atcoder.jp/contests/abc256/tasks/abc256_a) | implementation | [C++17](solutions/atcoder/implementation/abc256_a_2_n.cpp) · [Notes](notes/atcoder/abc256_a_2_n.md) |
| `ABC256 B` | [Batters](https://atcoder.jp/contests/abc256/tasks/abc256_b) | implementation | [C++17](solutions/atcoder/implementation/abc256_b_batters.cpp) · [Notes](notes/atcoder/abc256_b_batters.md) |
| `ABC257 A` | [A to Z String 2](https://atcoder.jp/contests/abc257/tasks/abc257_a) | implementation | [C++17](solutions/atcoder/implementation/abc257_a_a_to_z_string_2.cpp) · [Notes](notes/atcoder/abc257_a_a_to_z_string_2.md) |
| `ABC257 B` | [1D Pawn](https://atcoder.jp/contests/abc257/tasks/abc257_b) | implementation | [C++17](solutions/atcoder/implementation/abc257_b_1d_pawn.cpp) · [Notes](notes/atcoder/abc257_b_1d_pawn.md) |
| `ABC258 A` | [When?](https://atcoder.jp/contests/abc258/tasks/abc258_a) | implementation | [C++17](solutions/atcoder/implementation/abc258_a_when.cpp) · [Notes](notes/atcoder/abc258_a_when.md) |
| `ABC258 B` | [Number Box](https://atcoder.jp/contests/abc258/tasks/abc258_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc258_b_number_box.cpp) · [Notes](notes/atcoder/abc258_b_number_box.md) |
| `ABC259 A` | [Growth Record](https://atcoder.jp/contests/abc259/tasks/abc259_a) | implementation | [C++17](solutions/atcoder/implementation/abc259_a_growth_record.cpp) · [Notes](notes/atcoder/abc259_a_growth_record.md) |
| `ABC259 B` | [Counterclockwise Rotation](https://atcoder.jp/contests/abc259/tasks/abc259_b) | implementation | [C++17](solutions/atcoder/implementation/abc259_b_counterclockwise_rotation.cpp) · [Notes](notes/atcoder/abc259_b_counterclockwise_rotation.md) |
| `ABC260 A` | [A Unique Letter](https://atcoder.jp/contests/abc260/tasks/abc260_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc260_a_a_unique_letter.cpp) · [Notes](notes/atcoder/abc260_a_a_unique_letter.md) |
| `ABC260 B` | [Better Students Are Needed!](https://atcoder.jp/contests/abc260/tasks/abc260_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc260_b_better_students_are_needed.cpp) · [Notes](notes/atcoder/abc260_b_better_students_are_needed.md) |
| `ABC261 A` | [Intersection](https://atcoder.jp/contests/abc261/tasks/abc261_a) | implementation | [C++17](solutions/atcoder/implementation/abc261_a_intersection.cpp) · [Notes](notes/atcoder/abc261_a_intersection.md) |
| `ABC261 B` | [Tournament Result](https://atcoder.jp/contests/abc261/tasks/abc261_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc261_b_tournament_result.cpp) · [Notes](notes/atcoder/abc261_b_tournament_result.md) |
| `ABC262 A` | [World Cup](https://atcoder.jp/contests/abc262/tasks/abc262_a) | implementation | [C++17](solutions/atcoder/implementation/abc262_a_world_cup.cpp) · [Notes](notes/atcoder/abc262_a_world_cup.md) |
| `ABC262 B` | [Triangle (Easier)](https://atcoder.jp/contests/abc262/tasks/abc262_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc262_b_triangle_easier.cpp) · [Notes](notes/atcoder/abc262_b_triangle_easier.md) |
| `ABC263 A` | [Full House](https://atcoder.jp/contests/abc263/tasks/abc263_a) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc263_a_full_house.cpp) · [Notes](notes/atcoder/abc263_a_full_house.md) |
| `ABC263 B` | [Ancestor](https://atcoder.jp/contests/abc263/tasks/abc263_b) | implementation | [C++17](solutions/atcoder/implementation/abc263_b_ancestor.cpp) · [Notes](notes/atcoder/abc263_b_ancestor.md) |
| `ABC264 A` | ["atcoder".substr()](https://atcoder.jp/contests/abc264/tasks/abc264_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc264_a_atcoder_substr.cpp) · [Notes](notes/atcoder/abc264_a_atcoder_substr.md) |
| `ABC264 B` | [Nice Grid](https://atcoder.jp/contests/abc264/tasks/abc264_b) | implementation | [C++17](solutions/atcoder/implementation/abc264_b_nice_grid.cpp) · [Notes](notes/atcoder/abc264_b_nice_grid.md) |
| `ABC265 A` | [Apple](https://atcoder.jp/contests/abc265/tasks/abc265_a) | implementation | [C++17](solutions/atcoder/implementation/abc265_a_apple.cpp) · [Notes](notes/atcoder/abc265_a_apple.md) |
| `ABC265 B` | [Explore](https://atcoder.jp/contests/abc265/tasks/abc265_b) | implementation | [C++17](solutions/atcoder/implementation/abc265_b_explore.cpp) · [Notes](notes/atcoder/abc265_b_explore.md) |
| `ABC266 A` | [Middle  Letter](https://atcoder.jp/contests/abc266/tasks/abc266_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc266_a_middle_letter.cpp) · [Notes](notes/atcoder/abc266_a_middle_letter.md) |
| `ABC266 B` | [Modulo Number](https://atcoder.jp/contests/abc266/tasks/abc266_b) | implementation | [C++17](solutions/atcoder/implementation/abc266_b_modulo_number.cpp) · [Notes](notes/atcoder/abc266_b_modulo_number.md) |
| `ABC267 A` | [Saturday](https://atcoder.jp/contests/abc267/tasks/abc267_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc267_a_saturday.cpp) · [Notes](notes/atcoder/abc267_a_saturday.md) |
| `ABC267 B` | [Split?](https://atcoder.jp/contests/abc267/tasks/abc267_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc267_b_split.cpp) · [Notes](notes/atcoder/abc267_b_split.md) |
| `ABC268 A` | [Five Integers](https://atcoder.jp/contests/abc268/tasks/abc268_a) | implementation, ordered containers | [C++17](solutions/atcoder/implementation/abc268_a_five_integers.cpp) · [Notes](notes/atcoder/abc268_a_five_integers.md) |
| `ABC268 B` | [Prefix?](https://atcoder.jp/contests/abc268/tasks/abc268_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc268_b_prefix.cpp) · [Notes](notes/atcoder/abc268_b_prefix.md) |
| `ABC269 A` | [Anyway Takahashi](https://atcoder.jp/contests/abc269/tasks/abc269_a) | implementation | [C++17](solutions/atcoder/implementation/abc269_a_anyway_takahashi.cpp) · [Notes](notes/atcoder/abc269_a_anyway_takahashi.md) |
| `ABC269 B` | [Rectangle Detection](https://atcoder.jp/contests/abc269/tasks/abc269_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc269_b_rectangle_detection.cpp) · [Notes](notes/atcoder/abc269_b_rectangle_detection.md) |
| `ABC270 A` | [1-2-4 Test](https://atcoder.jp/contests/abc270/tasks/abc270_a) | implementation | [C++17](solutions/atcoder/implementation/abc270_a_1_2_4_test.cpp) · [Notes](notes/atcoder/abc270_a_1_2_4_test.md) |
| `ABC270 B` | [Hammer](https://atcoder.jp/contests/abc270/tasks/abc270_b) | implementation | [C++17](solutions/atcoder/implementation/abc270_b_hammer.cpp) · [Notes](notes/atcoder/abc270_b_hammer.md) |
| `ABC271 A` | [484558](https://atcoder.jp/contests/abc271/tasks/abc271_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc271_a_484558.cpp) · [Notes](notes/atcoder/abc271_a_484558.md) |
| `ABC271 B` | [Maintain Multiple Sequences](https://atcoder.jp/contests/abc271/tasks/abc271_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc271_b_maintain_multiple_sequences.cpp) · [Notes](notes/atcoder/abc271_b_maintain_multiple_sequences.md) |
| `ABC272 A` | [Integer Sum](https://atcoder.jp/contests/abc272/tasks/abc272_a) | implementation | [C++17](solutions/atcoder/implementation/abc272_a_integer_sum.cpp) · [Notes](notes/atcoder/abc272_a_integer_sum.md) |
| `ABC272 B` | [Everyone is Friends](https://atcoder.jp/contests/abc272/tasks/abc272_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc272_b_everyone_is_friends.cpp) · [Notes](notes/atcoder/abc272_b_everyone_is_friends.md) |
| `ABC273 A` | [A Recursive Function](https://atcoder.jp/contests/abc273/tasks/abc273_a) | implementation | [C++17](solutions/atcoder/implementation/abc273_a_a_recursive_function.cpp) · [Notes](notes/atcoder/abc273_a_a_recursive_function.md) |
| `ABC273 B` | [Broken Rounding](https://atcoder.jp/contests/abc273/tasks/abc273_b) | implementation | [C++17](solutions/atcoder/implementation/abc273_b_broken_rounding.cpp) · [Notes](notes/atcoder/abc273_b_broken_rounding.md) |
| `ABC274 A` | [Batting Average](https://atcoder.jp/contests/abc274/tasks/abc274_a) | implementation | [C++17](solutions/atcoder/implementation/abc274_a_batting_average.cpp) · [Notes](notes/atcoder/abc274_a_batting_average.md) |
| `ABC274 B` | [Line Sensor](https://atcoder.jp/contests/abc274/tasks/abc274_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc274_b_line_sensor.cpp) · [Notes](notes/atcoder/abc274_b_line_sensor.md) |
| `ABC275 A` | [Find Takahashi](https://atcoder.jp/contests/abc275/tasks/abc275_a) | implementation | [C++17](solutions/atcoder/implementation/abc275_a_find_takahashi.cpp) · [Notes](notes/atcoder/abc275_a_find_takahashi.md) |
| `ABC275 B` | [ABC-DEF](https://atcoder.jp/contests/abc275/tasks/abc275_b) | implementation | [C++17](solutions/atcoder/implementation/abc275_b_abc_def.cpp) · [Notes](notes/atcoder/abc275_b_abc_def.md) |
| `ABC276 A` | [Rightmost](https://atcoder.jp/contests/abc276/tasks/abc276_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc276_a_rightmost.cpp) · [Notes](notes/atcoder/abc276_a_rightmost.md) |
| `ABC276 B` | [Adjacency List](https://atcoder.jp/contests/abc276/tasks/abc276_b) | implementation, sorting, matrices | [C++17](solutions/atcoder/implementation/abc276_b_adjacency_list.cpp) · [Notes](notes/atcoder/abc276_b_adjacency_list.md) |
| `ABC277 A` | [^{-1}](https://atcoder.jp/contests/abc277/tasks/abc277_a) | implementation | [C++17](solutions/atcoder/implementation/abc277_a_1.cpp) · [Notes](notes/atcoder/abc277_a_1.md) |
| `ABC277 B` | [Playing Cards Validation](https://atcoder.jp/contests/abc277/tasks/abc277_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc277_b_playing_cards_validation.cpp) · [Notes](notes/atcoder/abc277_b_playing_cards_validation.md) |
| `ABC278 A` | [Shift](https://atcoder.jp/contests/abc278/tasks/abc278_a) | implementation | [C++17](solutions/atcoder/implementation/abc278_a_shift.cpp) · [Notes](notes/atcoder/abc278_a_shift.md) |
| `ABC278 B` | [Misjudge the Time](https://atcoder.jp/contests/abc278/tasks/abc278_b) | implementation | [C++17](solutions/atcoder/implementation/abc278_b_misjudge_the_time.cpp) · [Notes](notes/atcoder/abc278_b_misjudge_the_time.md) |
| `ABC279 A` | [wwwvvvvvv](https://atcoder.jp/contests/abc279/tasks/abc279_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc279_a_wwwvvvvvv.cpp) · [Notes](notes/atcoder/abc279_a_wwwvvvvvv.md) |
| `ABC279 B` | [LOOKUP](https://atcoder.jp/contests/abc279/tasks/abc279_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc279_b_lookup.cpp) · [Notes](notes/atcoder/abc279_b_lookup.md) |
| `ABC280 A` | [Pawn on a Grid](https://atcoder.jp/contests/abc280/tasks/abc280_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc280_a_pawn_on_a_grid.cpp) · [Notes](notes/atcoder/abc280_a_pawn_on_a_grid.md) |
| `ABC280 B` | [Inverse Prefix Sum](https://atcoder.jp/contests/abc280/tasks/abc280_b) | implementation | [C++17](solutions/atcoder/implementation/abc280_b_inverse_prefix_sum.cpp) · [Notes](notes/atcoder/abc280_b_inverse_prefix_sum.md) |
| `ABC281 A` | [Count Down](https://atcoder.jp/contests/abc281/tasks/abc281_a) | implementation | [C++17](solutions/atcoder/implementation/abc281_a_count_down.cpp) · [Notes](notes/atcoder/abc281_a_count_down.md) |
| `ABC281 B` | [Sandwich Number](https://atcoder.jp/contests/abc281/tasks/abc281_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc281_b_sandwich_number.cpp) · [Notes](notes/atcoder/abc281_b_sandwich_number.md) |
| `ABC282 A` | [Generalized ABC](https://atcoder.jp/contests/abc282/tasks/abc282_a) | implementation | [C++17](solutions/atcoder/implementation/abc282_a_generalized_abc.cpp) · [Notes](notes/atcoder/abc282_a_generalized_abc.md) |
| `ABC282 B` | [Let's Get a Perfect Score](https://atcoder.jp/contests/abc282/tasks/abc282_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc282_b_let_s_get_a_perfect_score.cpp) · [Notes](notes/atcoder/abc282_b_let_s_get_a_perfect_score.md) |
| `ABC283 A` | [Power](https://atcoder.jp/contests/abc283/tasks/abc283_a) | implementation | [C++17](solutions/atcoder/implementation/abc283_a_power.cpp) · [Notes](notes/atcoder/abc283_a_power.md) |
| `ABC283 B` | [First Query Problem](https://atcoder.jp/contests/abc283/tasks/abc283_b) | implementation | [C++17](solutions/atcoder/implementation/abc283_b_first_query_problem.cpp) · [Notes](notes/atcoder/abc283_b_first_query_problem.md) |
| `ABC284 A` | [Sequence of Strings](https://atcoder.jp/contests/abc284/tasks/abc284_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc284_a_sequence_of_strings.cpp) · [Notes](notes/atcoder/abc284_a_sequence_of_strings.md) |
| `ABC284 B` | [Multi Test Cases](https://atcoder.jp/contests/abc284/tasks/abc284_b) | implementation | [C++17](solutions/atcoder/implementation/abc284_b_multi_test_cases.cpp) · [Notes](notes/atcoder/abc284_b_multi_test_cases.md) |
| `ABC285 A` | [Edge Checker 2](https://atcoder.jp/contests/abc285/tasks/abc285_a) | implementation | [C++17](solutions/atcoder/implementation/abc285_a_edge_checker_2.cpp) · [Notes](notes/atcoder/abc285_a_edge_checker_2.md) |
| `ABC285 B` | [Longest Uncommon Prefix](https://atcoder.jp/contests/abc285/tasks/abc285_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc285_b_longest_uncommon_prefix.cpp) · [Notes](notes/atcoder/abc285_b_longest_uncommon_prefix.md) |
| `ABC286 A` | [Range Swap](https://atcoder.jp/contests/abc286/tasks/abc286_a) | implementation | [C++17](solutions/atcoder/implementation/abc286_a_range_swap.cpp) · [Notes](notes/atcoder/abc286_a_range_swap.md) |
| `ABC286 B` | [Cat](https://atcoder.jp/contests/abc286/tasks/abc286_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc286_b_cat.cpp) · [Notes](notes/atcoder/abc286_b_cat.md) |
| `ABC287 A` | [Majority](https://atcoder.jp/contests/abc287/tasks/abc287_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc287_a_majority.cpp) · [Notes](notes/atcoder/abc287_a_majority.md) |
| `ABC287 B` | [Postal Card](https://atcoder.jp/contests/abc287/tasks/abc287_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc287_b_postal_card.cpp) · [Notes](notes/atcoder/abc287_b_postal_card.md) |
| `ABC288 A` | [Many A+B Problems](https://atcoder.jp/contests/abc288/tasks/abc288_a) | implementation | [C++17](solutions/atcoder/implementation/abc288_a_many_a_b_problems.cpp) · [Notes](notes/atcoder/abc288_a_many_a_b_problems.md) |
| `ABC288 B` | [Qualification Contest](https://atcoder.jp/contests/abc288/tasks/abc288_b) | implementation, strings, sorting | [C++17](solutions/atcoder/implementation/abc288_b_qualification_contest.cpp) · [Notes](notes/atcoder/abc288_b_qualification_contest.md) |
| `ABC289 A` | [flip](https://atcoder.jp/contests/abc289/tasks/abc289_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc289_a_flip.cpp) · [Notes](notes/atcoder/abc289_a_flip.md) |
| `ABC289 B` | [V](https://atcoder.jp/contests/abc289/tasks/abc289_b) | implementation | [C++17](solutions/atcoder/implementation/abc289_b_v.cpp) · [Notes](notes/atcoder/abc289_b_v.md) |
| `ABC290 A` | [Contest Result](https://atcoder.jp/contests/abc290/tasks/abc290_a) | implementation | [C++17](solutions/atcoder/implementation/abc290_a_contest_result.cpp) · [Notes](notes/atcoder/abc290_a_contest_result.md) |
| `ABC290 B` | [Qual B](https://atcoder.jp/contests/abc290/tasks/abc290_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc290_b_qual_b.cpp) · [Notes](notes/atcoder/abc290_b_qual_b.md) |
| `ABC291 A` | [camel Case](https://atcoder.jp/contests/abc291/tasks/abc291_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc291_a_camel_case.cpp) · [Notes](notes/atcoder/abc291_a_camel_case.md) |
| `ABC291 B` | [Trimmed Mean](https://atcoder.jp/contests/abc291/tasks/abc291_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc291_b_trimmed_mean.cpp) · [Notes](notes/atcoder/abc291_b_trimmed_mean.md) |
| `ABC292 A` | [CAPS LOCK](https://atcoder.jp/contests/abc292/tasks/abc292_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc292_a_caps_lock.cpp) · [Notes](notes/atcoder/abc292_a_caps_lock.md) |
| `ABC292 B` | [Yellow and Red Card](https://atcoder.jp/contests/abc292/tasks/abc292_b) | implementation | [C++17](solutions/atcoder/implementation/abc292_b_yellow_and_red_card.cpp) · [Notes](notes/atcoder/abc292_b_yellow_and_red_card.md) |
| `ABC293 A` | [Swap Odd and Even](https://atcoder.jp/contests/abc293/tasks/abc293_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc293_a_swap_odd_and_even.cpp) · [Notes](notes/atcoder/abc293_a_swap_odd_and_even.md) |
| `ABC293 B` | [Call the ID Number](https://atcoder.jp/contests/abc293/tasks/abc293_b) | implementation | [C++17](solutions/atcoder/implementation/abc293_b_call_the_id_number.cpp) · [Notes](notes/atcoder/abc293_b_call_the_id_number.md) |
| `ABC294 A` | [Filter](https://atcoder.jp/contests/abc294/tasks/abc294_a) | implementation | [C++17](solutions/atcoder/implementation/abc294_a_filter.cpp) · [Notes](notes/atcoder/abc294_a_filter.md) |
| `ABC294 B` | [ASCII Art](https://atcoder.jp/contests/abc294/tasks/abc294_b) | implementation | [C++17](solutions/atcoder/implementation/abc294_b_ascii_art.cpp) · [Notes](notes/atcoder/abc294_b_ascii_art.md) |
| `ABC295 A` | [Probably English](https://atcoder.jp/contests/abc295/tasks/abc295_a) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc295_a_probably_english.cpp) · [Notes](notes/atcoder/abc295_a_probably_english.md) |
| `ABC295 B` | [Bombs](https://atcoder.jp/contests/abc295/tasks/abc295_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc295_b_bombs.cpp) · [Notes](notes/atcoder/abc295_b_bombs.md) |
| `ABC296 A` | [Alternately](https://atcoder.jp/contests/abc296/tasks/abc296_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc296_a_alternately.cpp) · [Notes](notes/atcoder/abc296_a_alternately.md) |
| `ABC296 B` | [Chessboard](https://atcoder.jp/contests/abc296/tasks/abc296_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc296_b_chessboard.cpp) · [Notes](notes/atcoder/abc296_b_chessboard.md) |
| `ABC297 A` | [Double Click](https://atcoder.jp/contests/abc297/tasks/abc297_a) | implementation | [C++17](solutions/atcoder/implementation/abc297_a_double_click.cpp) · [Notes](notes/atcoder/abc297_a_double_click.md) |
| `ABC297 B` | [chess960](https://atcoder.jp/contests/abc297/tasks/abc297_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc297_b_chess960.cpp) · [Notes](notes/atcoder/abc297_b_chess960.md) |
| `ABC298 A` | [Job Interview](https://atcoder.jp/contests/abc298/tasks/abc298_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc298_a_job_interview.cpp) · [Notes](notes/atcoder/abc298_a_job_interview.md) |
| `ABC298 B` | [Coloring Matrix](https://atcoder.jp/contests/abc298/tasks/abc298_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc298_b_coloring_matrix.cpp) · [Notes](notes/atcoder/abc298_b_coloring_matrix.md) |
| `ABC299 A` | [Treasure Chest](https://atcoder.jp/contests/abc299/tasks/abc299_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc299_a_treasure_chest.cpp) · [Notes](notes/atcoder/abc299_a_treasure_chest.md) |
| `ABC299 B` | [Trick Taking](https://atcoder.jp/contests/abc299/tasks/abc299_b) | implementation | [C++17](solutions/atcoder/implementation/abc299_b_trick_taking.cpp) · [Notes](notes/atcoder/abc299_b_trick_taking.md) |

</details>

<details>
<summary><strong>AtCoder Beginner Contest 300–399</strong> · 142 solutions</summary>

| ID | Problem | Technique | Solution |
| --- | --- | --- | --- |
| `ABC300 A` | [N-choice question](https://atcoder.jp/contests/abc300/tasks/abc300_a) | implementation | [C++17](solutions/atcoder/implementation/abc300_a_n_choice_question.cpp) · [Notes](notes/atcoder/abc300_a_n_choice_question.md) |
| `ABC300 B` | [Same Map in the RPG World](https://atcoder.jp/contests/abc300/tasks/abc300_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc300_b_same_map_in_the_rpg_world.cpp) · [Notes](notes/atcoder/abc300_b_same_map_in_the_rpg_world.md) |
| `ABC301 A` | [Overall Winner](https://atcoder.jp/contests/abc301/tasks/abc301_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc301_a_overall_winner.cpp) · [Notes](notes/atcoder/abc301_a_overall_winner.md) |
| `ABC301 B` | [Fill the Gaps](https://atcoder.jp/contests/abc301/tasks/abc301_b) | implementation | [C++17](solutions/atcoder/implementation/abc301_b_fill_the_gaps.cpp) · [Notes](notes/atcoder/abc301_b_fill_the_gaps.md) |
| `ABC302 A` | [Attack](https://atcoder.jp/contests/abc302/tasks/abc302_a) | implementation | [C++17](solutions/atcoder/implementation/abc302_a_attack.cpp) · [Notes](notes/atcoder/abc302_a_attack.md) |
| `ABC302 B` | [Find snuke](https://atcoder.jp/contests/abc302/tasks/abc302_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc302_b_find_snuke.cpp) · [Notes](notes/atcoder/abc302_b_find_snuke.md) |
| `ABC303 A` | [Similar String](https://atcoder.jp/contests/abc303/tasks/abc303_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc303_a_similar_string.cpp) · [Notes](notes/atcoder/abc303_a_similar_string.md) |
| `ABC303 B` | [Discord](https://atcoder.jp/contests/abc303/tasks/abc303_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc303_b_discord.cpp) · [Notes](notes/atcoder/abc303_b_discord.md) |
| `ABC304 A` | [First Player](https://atcoder.jp/contests/abc304/tasks/abc304_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc304_a_first_player.cpp) · [Notes](notes/atcoder/abc304_a_first_player.md) |
| `ABC304 B` | [Subscribers](https://atcoder.jp/contests/abc304/tasks/abc304_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc304_b_subscribers.cpp) · [Notes](notes/atcoder/abc304_b_subscribers.md) |
| `ABC305 A` | [Water Station](https://atcoder.jp/contests/abc305/tasks/abc305_a) | implementation | [C++17](solutions/atcoder/implementation/abc305_a_water_station.cpp) · [Notes](notes/atcoder/abc305_a_water_station.md) |
| `ABC305 B` | [ABCDEFG](https://atcoder.jp/contests/abc305/tasks/abc305_b) | implementation | [C++17](solutions/atcoder/implementation/abc305_b_abcdefg.cpp) · [Notes](notes/atcoder/abc305_b_abcdefg.md) |
| `ABC306 A` | [Echo](https://atcoder.jp/contests/abc306/tasks/abc306_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc306_a_echo.cpp) · [Notes](notes/atcoder/abc306_a_echo.md) |
| `ABC306 B` | [Base 2](https://atcoder.jp/contests/abc306/tasks/abc306_b) | implementation | [C++17](solutions/atcoder/implementation/abc306_b_base_2.cpp) · [Notes](notes/atcoder/abc306_b_base_2.md) |
| `ABC307 A` | [Weekly Records](https://atcoder.jp/contests/abc307/tasks/abc307_a) | implementation | [C++17](solutions/atcoder/implementation/abc307_a_weekly_records.cpp) · [Notes](notes/atcoder/abc307_a_weekly_records.md) |
| `ABC307 B` | [racecar](https://atcoder.jp/contests/abc307/tasks/abc307_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc307_b_racecar.cpp) · [Notes](notes/atcoder/abc307_b_racecar.md) |
| `ABC308 A` | [New Scheme](https://atcoder.jp/contests/abc308/tasks/abc308_a) | implementation | [C++17](solutions/atcoder/implementation/abc308_a_new_scheme.cpp) · [Notes](notes/atcoder/abc308_a_new_scheme.md) |
| `ABC308 B` | [Default Price](https://atcoder.jp/contests/abc308/tasks/abc308_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc308_b_default_price.cpp) · [Notes](notes/atcoder/abc308_b_default_price.md) |
| `ABC309 A` | [Nine](https://atcoder.jp/contests/abc309/tasks/abc309_a) | implementation | [C++17](solutions/atcoder/implementation/abc309_a_nine.cpp) · [Notes](notes/atcoder/abc309_a_nine.md) |
| `ABC309 B` | [Rotate](https://atcoder.jp/contests/abc309/tasks/abc309_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc309_b_rotate.cpp) · [Notes](notes/atcoder/abc309_b_rotate.md) |
| `ABC310 A` | [Order Something Else](https://atcoder.jp/contests/abc310/tasks/abc310_a) | implementation | [C++17](solutions/atcoder/implementation/abc310_a_order_something_else.cpp) · [Notes](notes/atcoder/abc310_a_order_something_else.md) |
| `ABC310 B` | [Strictly Superior](https://atcoder.jp/contests/abc310/tasks/abc310_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc310_b_strictly_superior.cpp) · [Notes](notes/atcoder/abc310_b_strictly_superior.md) |
| `ABC311 A` | [First ABC](https://atcoder.jp/contests/abc311/tasks/abc311_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc311_a_first_abc.cpp) · [Notes](notes/atcoder/abc311_a_first_abc.md) |
| `ABC311 B` | [Vacation Together](https://atcoder.jp/contests/abc311/tasks/abc311_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc311_b_vacation_together.cpp) · [Notes](notes/atcoder/abc311_b_vacation_together.md) |
| `ABC312 A` | [Chord](https://atcoder.jp/contests/abc312/tasks/abc312_a) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc312_a_chord.cpp) · [Notes](notes/atcoder/abc312_a_chord.md) |
| `ABC312 B` | [TaK Code](https://atcoder.jp/contests/abc312/tasks/abc312_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc312_b_tak_code.cpp) · [Notes](notes/atcoder/abc312_b_tak_code.md) |
| `ABC313 A` | [To Be Saikyo](https://atcoder.jp/contests/abc313/tasks/abc313_a) | implementation | [C++17](solutions/atcoder/implementation/abc313_a_to_be_saikyo.cpp) · [Notes](notes/atcoder/abc313_a_to_be_saikyo.md) |
| `ABC313 B` | [Who is Saikyo?](https://atcoder.jp/contests/abc313/tasks/abc313_b) | implementation | [C++17](solutions/atcoder/implementation/abc313_b_who_is_saikyo.cpp) · [Notes](notes/atcoder/abc313_b_who_is_saikyo.md) |
| `ABC314 A` | [3.14](https://atcoder.jp/contests/abc314/tasks/abc314_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc314_a_3_14.cpp) · [Notes](notes/atcoder/abc314_a_3_14.md) |
| `ABC314 B` | [Roulette](https://atcoder.jp/contests/abc314/tasks/abc314_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc314_b_roulette.cpp) · [Notes](notes/atcoder/abc314_b_roulette.md) |
| `ABC315 A` | [tcdr](https://atcoder.jp/contests/abc315/tasks/abc315_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc315_a_tcdr.cpp) · [Notes](notes/atcoder/abc315_a_tcdr.md) |
| `ABC315 B` | [The Middle Day](https://atcoder.jp/contests/abc315/tasks/abc315_b) | implementation | [C++17](solutions/atcoder/implementation/abc315_b_the_middle_day.cpp) · [Notes](notes/atcoder/abc315_b_the_middle_day.md) |
| `ABC317 A` | [Potions](https://atcoder.jp/contests/abc317/tasks/abc317_a) | implementation | [C++17](solutions/atcoder/implementation/abc317_a_potions.cpp) · [Notes](notes/atcoder/abc317_a_potions.md) |
| `ABC317 B` | [MissingNo.](https://atcoder.jp/contests/abc317/tasks/abc317_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc317_b_missingno.cpp) · [Notes](notes/atcoder/abc317_b_missingno.md) |
| `ABC318 A` | [Full Moon](https://atcoder.jp/contests/abc318/tasks/abc318_a) | implementation | [C++17](solutions/atcoder/implementation/abc318_a_full_moon.cpp) · [Notes](notes/atcoder/abc318_a_full_moon.md) |
| `ABC318 B` | [Overlapping sheets](https://atcoder.jp/contests/abc318/tasks/abc318_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc318_b_overlapping_sheets.cpp) · [Notes](notes/atcoder/abc318_b_overlapping_sheets.md) |
| `ABC319 A` | [Legendary Players](https://atcoder.jp/contests/abc319/tasks/abc319_a) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc319_a_legendary_players.cpp) · [Notes](notes/atcoder/abc319_a_legendary_players.md) |
| `ABC319 B` | [Measure](https://atcoder.jp/contests/abc319/tasks/abc319_b) | implementation | [C++17](solutions/atcoder/implementation/abc319_b_measure.cpp) · [Notes](notes/atcoder/abc319_b_measure.md) |
| `ABC320 A` | [Leyland Number](https://atcoder.jp/contests/abc320/tasks/abc320_a) | implementation | [C++17](solutions/atcoder/implementation/abc320_a_leyland_number.cpp) · [Notes](notes/atcoder/abc320_a_leyland_number.md) |
| `ABC320 B` | [Longest Palindrome](https://atcoder.jp/contests/abc320/tasks/abc320_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc320_b_longest_palindrome.cpp) · [Notes](notes/atcoder/abc320_b_longest_palindrome.md) |
| `ABC321 A` | [321-like Checker](https://atcoder.jp/contests/abc321/tasks/abc321_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc321_a_321_like_checker.cpp) · [Notes](notes/atcoder/abc321_a_321_like_checker.md) |
| `ABC321 B` | [Cutoff](https://atcoder.jp/contests/abc321/tasks/abc321_b) | implementation | [C++17](solutions/atcoder/implementation/abc321_b_cutoff.cpp) · [Notes](notes/atcoder/abc321_b_cutoff.md) |
| `ABC322 A` | [First ABC 2](https://atcoder.jp/contests/abc322/tasks/abc322_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc322_a_first_abc_2.cpp) · [Notes](notes/atcoder/abc322_a_first_abc_2.md) |
| `ABC322 B` | [Prefix and Suffix](https://atcoder.jp/contests/abc322/tasks/abc322_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc322_b_prefix_and_suffix.cpp) · [Notes](notes/atcoder/abc322_b_prefix_and_suffix.md) |
| `ABC323 A` | [Weak Beats](https://atcoder.jp/contests/abc323/tasks/abc323_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc323_a_weak_beats.cpp) · [Notes](notes/atcoder/abc323_a_weak_beats.md) |
| `ABC323 B` | [Round-Robin Tournament](https://atcoder.jp/contests/abc323/tasks/abc323_b) | implementation, strings, sorting | [C++17](solutions/atcoder/implementation/abc323_b_round_robin_tournament.cpp) · [Notes](notes/atcoder/abc323_b_round_robin_tournament.md) |
| `ABC324 A` | [Same](https://atcoder.jp/contests/abc324/tasks/abc324_a) | implementation | [C++17](solutions/atcoder/implementation/abc324_a_same.cpp) · [Notes](notes/atcoder/abc324_a_same.md) |
| `ABC324 B` | [3-smooth Numbers](https://atcoder.jp/contests/abc324/tasks/abc324_b) | implementation | [C++17](solutions/atcoder/implementation/abc324_b_3_smooth_numbers.cpp) · [Notes](notes/atcoder/abc324_b_3_smooth_numbers.md) |
| `ABC325 A` | [Takahashi san](https://atcoder.jp/contests/abc325/tasks/abc325_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc325_a_takahashi_san.cpp) · [Notes](notes/atcoder/abc325_a_takahashi_san.md) |
| `ABC325 B` | [World Meeting](https://atcoder.jp/contests/abc325/tasks/abc325_b) | implementation | [C++17](solutions/atcoder/implementation/abc325_b_world_meeting.cpp) · [Notes](notes/atcoder/abc325_b_world_meeting.md) |
| `ABC326 A` | [2UP3DOWN](https://atcoder.jp/contests/abc326/tasks/abc326_a) | implementation | [C++17](solutions/atcoder/implementation/abc326_a_2up3down.cpp) · [Notes](notes/atcoder/abc326_a_2up3down.md) |
| `ABC326 B` | [326-like Numbers](https://atcoder.jp/contests/abc326/tasks/abc326_b) | implementation | [C++17](solutions/atcoder/implementation/abc326_b_326_like_numbers.cpp) · [Notes](notes/atcoder/abc326_b_326_like_numbers.md) |
| `ABC327 A` | [ab](https://atcoder.jp/contests/abc327/tasks/abc327_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc327_a_ab.cpp) · [Notes](notes/atcoder/abc327_a_ab.md) |
| `ABC327 B` | [A^A](https://atcoder.jp/contests/abc327/tasks/abc327_b) | implementation | [C++17](solutions/atcoder/implementation/abc327_b_a_a.cpp) · [Notes](notes/atcoder/abc327_b_a_a.md) |
| `ABC328 A` | [Not Too Hard](https://atcoder.jp/contests/abc328/tasks/abc328_a) | implementation | [C++17](solutions/atcoder/implementation/abc328_a_not_too_hard.cpp) · [Notes](notes/atcoder/abc328_a_not_too_hard.md) |
| `ABC328 B` | [11/11](https://atcoder.jp/contests/abc328/tasks/abc328_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc328_b_11_11.cpp) · [Notes](notes/atcoder/abc328_b_11_11.md) |
| `ABC329 A` | [Spread](https://atcoder.jp/contests/abc329/tasks/abc329_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc329_a_spread.cpp) · [Notes](notes/atcoder/abc329_a_spread.md) |
| `ABC329 B` | [Next](https://atcoder.jp/contests/abc329/tasks/abc329_b) | implementation, ordered containers | [C++17](solutions/atcoder/implementation/abc329_b_next.cpp) · [Notes](notes/atcoder/abc329_b_next.md) |
| `ABC330 A` | [Counting Passes](https://atcoder.jp/contests/abc330/tasks/abc330_a) | implementation | [C++17](solutions/atcoder/implementation/abc330_a_counting_passes.cpp) · [Notes](notes/atcoder/abc330_a_counting_passes.md) |
| `ABC330 B` | [Minimize Abs 1](https://atcoder.jp/contests/abc330/tasks/abc330_b) | implementation | [C++17](solutions/atcoder/implementation/abc330_b_minimize_abs_1.cpp) · [Notes](notes/atcoder/abc330_b_minimize_abs_1.md) |
| `ABC331 A` | [Tomorrow](https://atcoder.jp/contests/abc331/tasks/abc331_a) | implementation | [C++17](solutions/atcoder/implementation/abc331_a_tomorrow.cpp) · [Notes](notes/atcoder/abc331_a_tomorrow.md) |
| `ABC331 B` | [Buy One Carton of Milk](https://atcoder.jp/contests/abc331/tasks/abc331_b) | implementation | [C++17](solutions/atcoder/implementation/abc331_b_buy_one_carton_of_milk.cpp) · [Notes](notes/atcoder/abc331_b_buy_one_carton_of_milk.md) |
| `ABC332 A` | [Online Shopping](https://atcoder.jp/contests/abc332/tasks/abc332_a) | implementation | [C++17](solutions/atcoder/implementation/abc332_a_online_shopping.cpp) · [Notes](notes/atcoder/abc332_a_online_shopping.md) |
| `ABC332 B` | [Glass and Mug](https://atcoder.jp/contests/abc332/tasks/abc332_b) | implementation | [C++17](solutions/atcoder/implementation/abc332_b_glass_and_mug.cpp) · [Notes](notes/atcoder/abc332_b_glass_and_mug.md) |
| `ABC333 A` | [Three Threes](https://atcoder.jp/contests/abc333/tasks/abc333_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc333_a_three_threes.cpp) · [Notes](notes/atcoder/abc333_a_three_threes.md) |
| `ABC333 B` | [Pentagon](https://atcoder.jp/contests/abc333/tasks/abc333_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc333_b_pentagon.cpp) · [Notes](notes/atcoder/abc333_b_pentagon.md) |
| `ABC334 A` | [Christmas Present](https://atcoder.jp/contests/abc334/tasks/abc334_a) | implementation | [C++17](solutions/atcoder/implementation/abc334_a_christmas_present.cpp) · [Notes](notes/atcoder/abc334_a_christmas_present.md) |
| `ABC334 B` | [Christmas Trees](https://atcoder.jp/contests/abc334/tasks/abc334_b) | implementation | [C++17](solutions/atcoder/implementation/abc334_b_christmas_trees.cpp) · [Notes](notes/atcoder/abc334_b_christmas_trees.md) |
| `ABC335 A` | [202&lt;s&gt;3&lt;/s&gt;](https://atcoder.jp/contests/abc335/tasks/abc335_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc335_a_202_s_3_s.cpp) · [Notes](notes/atcoder/abc335_a_202_s_3_s.md) |
| `ABC335 B` | [Tetrahedral Number](https://atcoder.jp/contests/abc335/tasks/abc335_b) | implementation | [C++17](solutions/atcoder/implementation/abc335_b_tetrahedral_number.cpp) · [Notes](notes/atcoder/abc335_b_tetrahedral_number.md) |
| `ABC336 A` | [Long Loong](https://atcoder.jp/contests/abc336/tasks/abc336_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc336_a_long_loong.cpp) · [Notes](notes/atcoder/abc336_a_long_loong.md) |
| `ABC336 B` | [CTZ](https://atcoder.jp/contests/abc336/tasks/abc336_b) | implementation | [C++17](solutions/atcoder/implementation/abc336_b_ctz.cpp) · [Notes](notes/atcoder/abc336_b_ctz.md) |
| `ABC337 A` | [Scoreboard](https://atcoder.jp/contests/abc337/tasks/abc337_a) | implementation | [C++17](solutions/atcoder/implementation/abc337_a_scoreboard.cpp) · [Notes](notes/atcoder/abc337_a_scoreboard.md) |
| `ABC337 B` | [Extended ABC](https://atcoder.jp/contests/abc337/tasks/abc337_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc337_b_extended_abc.cpp) · [Notes](notes/atcoder/abc337_b_extended_abc.md) |
| `ABC338 A` | [Capitalized?](https://atcoder.jp/contests/abc338/tasks/abc338_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc338_a_capitalized.cpp) · [Notes](notes/atcoder/abc338_a_capitalized.md) |
| `ABC338 B` | [Frequency](https://atcoder.jp/contests/abc338/tasks/abc338_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc338_b_frequency.cpp) · [Notes](notes/atcoder/abc338_b_frequency.md) |
| `ABC339 A` | [TLD](https://atcoder.jp/contests/abc339/tasks/abc339_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc339_a_tld.cpp) · [Notes](notes/atcoder/abc339_a_tld.md) |
| `ABC339 B` | [Langton's Takahashi](https://atcoder.jp/contests/abc339/tasks/abc339_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc339_b_langton_s_takahashi.cpp) · [Notes](notes/atcoder/abc339_b_langton_s_takahashi.md) |
| `ABC340 A` | [Arithmetic Progression](https://atcoder.jp/contests/abc340/tasks/abc340_a) | implementation | [C++17](solutions/atcoder/implementation/abc340_a_arithmetic_progression.cpp) · [Notes](notes/atcoder/abc340_a_arithmetic_progression.md) |
| `ABC340 B` | [Append](https://atcoder.jp/contests/abc340/tasks/abc340_b) | implementation | [C++17](solutions/atcoder/implementation/abc340_b_append.cpp) · [Notes](notes/atcoder/abc340_b_append.md) |
| `ABC341 A` | [Print 341](https://atcoder.jp/contests/abc341/tasks/abc341_a) | implementation | [C++17](solutions/atcoder/implementation/abc341_a_print_341.cpp) · [Notes](notes/atcoder/abc341_a_print_341.md) |
| `ABC341 B` | [Foreign Exchange](https://atcoder.jp/contests/abc341/tasks/abc341_b) | implementation | [C++17](solutions/atcoder/implementation/abc341_b_foreign_exchange.cpp) · [Notes](notes/atcoder/abc341_b_foreign_exchange.md) |
| `ABC342 A` | [Yay!](https://atcoder.jp/contests/abc342/tasks/abc342_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc342_a_yay.cpp) · [Notes](notes/atcoder/abc342_a_yay.md) |
| `ABC342 B` | [Which is ahead?](https://atcoder.jp/contests/abc342/tasks/abc342_b) | implementation | [C++17](solutions/atcoder/implementation/abc342_b_which_is_ahead.cpp) · [Notes](notes/atcoder/abc342_b_which_is_ahead.md) |
| `ABC343 A` | [Wrong Answer](https://atcoder.jp/contests/abc343/tasks/abc343_a) | implementation | [C++17](solutions/atcoder/implementation/abc343_a_wrong_answer.cpp) · [Notes](notes/atcoder/abc343_a_wrong_answer.md) |
| `ABC343 B` | [Adjacency Matrix](https://atcoder.jp/contests/abc343/tasks/abc343_b) | implementation | [C++17](solutions/atcoder/implementation/abc343_b_adjacency_matrix.cpp) · [Notes](notes/atcoder/abc343_b_adjacency_matrix.md) |
| `ABC344 A` | [Spoiler](https://atcoder.jp/contests/abc344/tasks/abc344_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc344_a_spoiler.cpp) · [Notes](notes/atcoder/abc344_a_spoiler.md) |
| `ABC344 B` | [Delimiter](https://atcoder.jp/contests/abc344/tasks/abc344_b) | implementation | [C++17](solutions/atcoder/implementation/abc344_b_delimiter.cpp) · [Notes](notes/atcoder/abc344_b_delimiter.md) |
| `ABC345 A` | [Leftrightarrow](https://atcoder.jp/contests/abc345/tasks/abc345_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc345_a_leftrightarrow.cpp) · [Notes](notes/atcoder/abc345_a_leftrightarrow.md) |
| `ABC345 B` | [Integer Division Returns](https://atcoder.jp/contests/abc345/tasks/abc345_b) | implementation | [C++17](solutions/atcoder/implementation/abc345_b_integer_division_returns.cpp) · [Notes](notes/atcoder/abc345_b_integer_division_returns.md) |
| `ABC346 A` | [Adjacent Product](https://atcoder.jp/contests/abc346/tasks/abc346_a) | implementation | [C++17](solutions/atcoder/implementation/abc346_a_adjacent_product.cpp) · [Notes](notes/atcoder/abc346_a_adjacent_product.md) |
| `ABC346 B` | [Piano](https://atcoder.jp/contests/abc346/tasks/abc346_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc346_b_piano.cpp) · [Notes](notes/atcoder/abc346_b_piano.md) |
| `ABC347 A` | [Divisible](https://atcoder.jp/contests/abc347/tasks/abc347_a) | implementation | [C++17](solutions/atcoder/implementation/abc347_a_divisible.cpp) · [Notes](notes/atcoder/abc347_a_divisible.md) |
| `ABC347 B` | [Substring](https://atcoder.jp/contests/abc347/tasks/abc347_b) | implementation, strings, ordered containers | [C++17](solutions/atcoder/implementation/abc347_b_substring.cpp) · [Notes](notes/atcoder/abc347_b_substring.md) |
| `ABC348 A` | [Penalty Kick](https://atcoder.jp/contests/abc348/tasks/abc348_a) | implementation | [C++17](solutions/atcoder/implementation/abc348_a_penalty_kick.cpp) · [Notes](notes/atcoder/abc348_a_penalty_kick.md) |
| `ABC348 B` | [Farthest Point](https://atcoder.jp/contests/abc348/tasks/abc348_b) | implementation | [C++17](solutions/atcoder/implementation/abc348_b_farthest_point.cpp) · [Notes](notes/atcoder/abc348_b_farthest_point.md) |
| `ABC349 A` | [Zero Sum Game](https://atcoder.jp/contests/abc349/tasks/abc349_a) | implementation | [C++17](solutions/atcoder/implementation/abc349_a_zero_sum_game.cpp) · [Notes](notes/atcoder/abc349_a_zero_sum_game.md) |
| `ABC349 B` | [Commencement](https://atcoder.jp/contests/abc349/tasks/abc349_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc349_b_commencement.cpp) · [Notes](notes/atcoder/abc349_b_commencement.md) |
| `ABC350 A` | [Past ABCs](https://atcoder.jp/contests/abc350/tasks/abc350_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc350_a_past_abcs.cpp) · [Notes](notes/atcoder/abc350_a_past_abcs.md) |
| `ABC350 B` | [Dentist Aoki](https://atcoder.jp/contests/abc350/tasks/abc350_b) | implementation | [C++17](solutions/atcoder/implementation/abc350_b_dentist_aoki.cpp) · [Notes](notes/atcoder/abc350_b_dentist_aoki.md) |
| `ABC351 A` | [The bottom of the ninth](https://atcoder.jp/contests/abc351/tasks/abc351_a) | implementation | [C++17](solutions/atcoder/implementation/abc351_a_the_bottom_of_the_ninth.cpp) · [Notes](notes/atcoder/abc351_a_the_bottom_of_the_ninth.md) |
| `ABC351 B` | [Spot the Difference](https://atcoder.jp/contests/abc351/tasks/abc351_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc351_b_spot_the_difference.cpp) · [Notes](notes/atcoder/abc351_b_spot_the_difference.md) |
| `ABC352 A` | [AtCoder Line](https://atcoder.jp/contests/abc352/tasks/abc352_a) | implementation | [C++17](solutions/atcoder/implementation/abc352_a_atcoder_line.cpp) · [Notes](notes/atcoder/abc352_a_atcoder_line.md) |
| `ABC352 B` | [Typing](https://atcoder.jp/contests/abc352/tasks/abc352_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc352_b_typing.cpp) · [Notes](notes/atcoder/abc352_b_typing.md) |
| `ABC353 A` | [Buildings](https://atcoder.jp/contests/abc353/tasks/abc353_a) | implementation | [C++17](solutions/atcoder/implementation/abc353_a_buildings.cpp) · [Notes](notes/atcoder/abc353_a_buildings.md) |
| `ABC353 B` | [AtCoder Amusement Park](https://atcoder.jp/contests/abc353/tasks/abc353_b) | implementation | [C++17](solutions/atcoder/implementation/abc353_b_atcoder_amusement_park.cpp) · [Notes](notes/atcoder/abc353_b_atcoder_amusement_park.md) |
| `ABC354 A` | [Exponential Plant](https://atcoder.jp/contests/abc354/tasks/abc354_a) | implementation | [C++17](solutions/atcoder/implementation/abc354_a_exponential_plant.cpp) · [Notes](notes/atcoder/abc354_a_exponential_plant.md) |
| `ABC354 B` | [AtCoder Janken 2](https://atcoder.jp/contests/abc354/tasks/abc354_b) | implementation, strings, sorting | [C++17](solutions/atcoder/implementation/abc354_b_atcoder_janken_2.cpp) · [Notes](notes/atcoder/abc354_b_atcoder_janken_2.md) |
| `ABC355 A` | [Who Ate the Cake?](https://atcoder.jp/contests/abc355/tasks/abc355_a) | implementation | [C++17](solutions/atcoder/implementation/abc355_a_who_ate_the_cake.cpp) · [Notes](notes/atcoder/abc355_a_who_ate_the_cake.md) |
| `ABC355 B` | [Piano 2](https://atcoder.jp/contests/abc355/tasks/abc355_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc355_b_piano_2.cpp) · [Notes](notes/atcoder/abc355_b_piano_2.md) |
| `ABC356 A` | [Subsegment Reverse](https://atcoder.jp/contests/abc356/tasks/abc356_a) | implementation | [C++17](solutions/atcoder/implementation/abc356_a_subsegment_reverse.cpp) · [Notes](notes/atcoder/abc356_a_subsegment_reverse.md) |
| `ABC356 B` | [Nutrients](https://atcoder.jp/contests/abc356/tasks/abc356_b) | implementation | [C++17](solutions/atcoder/implementation/abc356_b_nutrients.cpp) · [Notes](notes/atcoder/abc356_b_nutrients.md) |
| `ABC357 A` | [Sanitize Hands](https://atcoder.jp/contests/abc357/tasks/abc357_a) | implementation | [C++17](solutions/atcoder/implementation/abc357_a_sanitize_hands.cpp) · [Notes](notes/atcoder/abc357_a_sanitize_hands.md) |
| `ABC357 B` | [Uppercase and Lowercase](https://atcoder.jp/contests/abc357/tasks/abc357_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc357_b_uppercase_and_lowercase.cpp) · [Notes](notes/atcoder/abc357_b_uppercase_and_lowercase.md) |
| `ABC358 A` | [Welcome to AtCoder Land](https://atcoder.jp/contests/abc358/tasks/abc358_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc358_a_welcome_to_atcoder_land.cpp) · [Notes](notes/atcoder/abc358_a_welcome_to_atcoder_land.md) |
| `ABC358 B` | [Ticket Counter](https://atcoder.jp/contests/abc358/tasks/abc358_b) | implementation | [C++17](solutions/atcoder/implementation/abc358_b_ticket_counter.cpp) · [Notes](notes/atcoder/abc358_b_ticket_counter.md) |
| `ABC359 A` | [Count Takahashi](https://atcoder.jp/contests/abc359/tasks/abc359_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc359_a_count_takahashi.cpp) · [Notes](notes/atcoder/abc359_a_count_takahashi.md) |
| `ABC359 B` | [Couples](https://atcoder.jp/contests/abc359/tasks/abc359_b) | implementation | [C++17](solutions/atcoder/implementation/abc359_b_couples.cpp) · [Notes](notes/atcoder/abc359_b_couples.md) |
| `ABC360 A` | [A Healthy Breakfast](https://atcoder.jp/contests/abc360/tasks/abc360_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc360_a_a_healthy_breakfast.cpp) · [Notes](notes/atcoder/abc360_a_a_healthy_breakfast.md) |
| `ABC360 B` | [Vertical Reading](https://atcoder.jp/contests/abc360/tasks/abc360_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc360_b_vertical_reading.cpp) · [Notes](notes/atcoder/abc360_b_vertical_reading.md) |
| `ABC361 A` | [Insert](https://atcoder.jp/contests/abc361/tasks/abc361_a) | implementation | [C++17](solutions/atcoder/implementation/abc361_a_insert.cpp) · [Notes](notes/atcoder/abc361_a_insert.md) |
| `ABC361 B` | [Intersection of Cuboids](https://atcoder.jp/contests/abc361/tasks/abc361_b) | implementation | [C++17](solutions/atcoder/implementation/abc361_b_intersection_of_cuboids.cpp) · [Notes](notes/atcoder/abc361_b_intersection_of_cuboids.md) |
| `ABC362 A` | [Buy a Pen](https://atcoder.jp/contests/abc362/tasks/abc362_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc362_a_buy_a_pen.cpp) · [Notes](notes/atcoder/abc362_a_buy_a_pen.md) |
| `ABC362 B` | [Right Triangle](https://atcoder.jp/contests/abc362/tasks/abc362_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc362_b_right_triangle.cpp) · [Notes](notes/atcoder/abc362_b_right_triangle.md) |
| `ABC363 A` | [Piling Up](https://atcoder.jp/contests/abc363/tasks/abc363_a) | implementation | [C++17](solutions/atcoder/implementation/abc363_a_piling_up.cpp) · [Notes](notes/atcoder/abc363_a_piling_up.md) |
| `ABC363 B` | [Japanese Cursed Doll](https://atcoder.jp/contests/abc363/tasks/abc363_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc363_b_japanese_cursed_doll.cpp) · [Notes](notes/atcoder/abc363_b_japanese_cursed_doll.md) |
| `ABC364 A` | [Glutton Takahashi](https://atcoder.jp/contests/abc364/tasks/abc364_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc364_a_glutton_takahashi.cpp) · [Notes](notes/atcoder/abc364_a_glutton_takahashi.md) |
| `ABC364 B` | [Grid Walk](https://atcoder.jp/contests/abc364/tasks/abc364_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc364_b_grid_walk.cpp) · [Notes](notes/atcoder/abc364_b_grid_walk.md) |
| `ABC365 A` | [Leap Year](https://atcoder.jp/contests/abc365/tasks/abc365_a) | implementation | [C++17](solutions/atcoder/implementation/abc365_a_leap_year.cpp) · [Notes](notes/atcoder/abc365_a_leap_year.md) |
| `ABC365 B` | [Second Best](https://atcoder.jp/contests/abc365/tasks/abc365_b) | implementation, sorting | [C++17](solutions/atcoder/implementation/abc365_b_second_best.cpp) · [Notes](notes/atcoder/abc365_b_second_best.md) |
| `ABC366 A` | [Election 2](https://atcoder.jp/contests/abc366/tasks/abc366_a) | implementation | [C++17](solutions/atcoder/implementation/abc366_a_election_2.cpp) · [Notes](notes/atcoder/abc366_a_election_2.md) |
| `ABC366 B` | [Vertical Writing](https://atcoder.jp/contests/abc366/tasks/abc366_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc366_b_vertical_writing.cpp) · [Notes](notes/atcoder/abc366_b_vertical_writing.md) |
| `ABC367 A` | [Shout Everyday](https://atcoder.jp/contests/abc367/tasks/abc367_a) | implementation | [C++17](solutions/atcoder/implementation/abc367_a_shout_everyday.cpp) · [Notes](notes/atcoder/abc367_a_shout_everyday.md) |
| `ABC367 B` | [Cut .0](https://atcoder.jp/contests/abc367/tasks/abc367_b) | implementation, strings | [C++17](solutions/atcoder/implementation/abc367_b_cut_0.cpp) · [Notes](notes/atcoder/abc367_b_cut_0.md) |
| `ABC368 A` | [Cut](https://atcoder.jp/contests/abc368/tasks/abc368_a) | implementation | [C++17](solutions/atcoder/implementation/abc368_a_cut.cpp) · [Notes](notes/atcoder/abc368_a_cut.md) |
| `ABC368 B` | [Decrease 2 max elements](https://atcoder.jp/contests/abc368/tasks/abc368_b) | implementation, heaps | [C++17](solutions/atcoder/implementation/abc368_b_decrease_2_max_elements.cpp) · [Notes](notes/atcoder/abc368_b_decrease_2_max_elements.md) |
| `ABC369 A` | [369](https://atcoder.jp/contests/abc369/tasks/abc369_a) | implementation | [C++17](solutions/atcoder/implementation/abc369_a_369.cpp) · [Notes](notes/atcoder/abc369_a_369.md) |
| `ABC369 B` | [Piano 3](https://atcoder.jp/contests/abc369/tasks/abc369_b) | implementation | [C++17](solutions/atcoder/implementation/abc369_b_piano_3.cpp) · [Notes](notes/atcoder/abc369_b_piano_3.md) |
| `ABC370 A` | [Raise Both Hands](https://atcoder.jp/contests/abc370/tasks/abc370_a) | implementation | [C++17](solutions/atcoder/implementation/abc370_a_raise_both_hands.cpp) · [Notes](notes/atcoder/abc370_a_raise_both_hands.md) |
| `ABC370 B` | [Binary Alchemy](https://atcoder.jp/contests/abc370/tasks/abc370_b) | implementation, matrices | [C++17](solutions/atcoder/implementation/abc370_b_binary_alchemy.cpp) · [Notes](notes/atcoder/abc370_b_binary_alchemy.md) |
| `ABC372 A` | [delete .](https://atcoder.jp/contests/abc372/tasks/abc372_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc372_a_delete.cpp) · [Notes](notes/atcoder/abc372_a_delete.md) |
| `ABC373 A` | [September](https://atcoder.jp/contests/abc373/tasks/abc373_a) | implementation, strings | [C++17](solutions/atcoder/implementation/abc373_a_september.cpp) · [Notes](notes/atcoder/abc373_a_september.md) |

</details>

## Algorithms and C++

| Resource | Contents |
| --- | --- |
| [Algorithm library](include/cp) | Reusable data structures and string algorithms with property checks |
| [C++ field notes](docs/cpp.md) | Types, references, STL, overflow, and indexing |
| [Practice route](docs/roadmap.md) | A staged path from basic C++ to timed problem sets |
| [Contest journal](contests/README.md) | Attempts, mistakes, results, and upsolving |

## Run locally

Requires **Python 3.10+** and a **C++17 compiler**. No Python packages are needed.

```sh
# Browse the archive.
python3 tools/cp.py list

# Create a practice file and test your own solution.
python3 tools/cp.py practice cses-1083
python3 tools/cp.py test cses-1083 --source practice/cses-1083.cpp

# Get a hint when needed.
python3 tools/cp.py hint cses-1083
```

Open the problem, write your solution, test it, and submit it on the judge. Read the reference implementation after your attempt. Files in `practice/` stay local until you deliberately archive them.

Every file in `solutions/` is standalone C++17; no local headers are needed for submission. Set `CXX=clang++` or `CXX=g++` to choose a compiler. On macOS, install Apple's command-line tools with `xcode-select --install`. The sources use standard headers.

## Verification

[![Verify C++ archive](https://github.com/michaelbawuah/Pro-Competitive-Programming/actions/workflows/verify.yml/badge.svg)](https://github.com/michaelbawuah/Pro-Competitive-Programming/actions/workflows/verify.yml)

The archive has **2,964 fixed test cases**, **10,100 seeded randomized cases across 101 solutions**, and **31 constraint-limit checks**. GitHub Actions runs four shards on both Linux/GCC and macOS/Clang. See the [verification record](docs/verification.md) for results, scope, and reproducible commands.

<details>
<summary>Run the verification suite</summary>

Run these commands one at a time:

```sh
python3 tools/cp.py check
python3 tools/cp.py test all --jobs 4
python3 tools/cp.py test all --sanitize --jobs 4
python3 tools/cp.py stress --cases 100 --seed 2110
python3 tools/boundary.py
python3 -m unittest discover -s tests -p 'test_*.py' -v
```

Builds treat warnings as errors. The sanitizer checks undefined behavior; randomized suites compare against independent small-input models and structural checks. In VS Code, use **Tasks: Run Test Task**.

</details>

## About this archive

Maintained by [Michael Baffour Awuah](https://github.com/michaelbawuah) for learning algorithms and practicing C++ under contest constraints.

The reference implementations were created with AI assistance. Local test results and archive counts are separate from personal solves and official judge acceptances. Actual submission evidence is tracked in [progress](docs/progress.md).

Keep one meaningful change per commit: a solution and explanation, a regression fix, or a reusable technique. Add a test for the mistake that taught you something, and keep the submission URL when recording an acceptance.

Archive organization inspired by [thecodingwizard/competitive-programming](https://github.com/thecodingwizard/competitive-programming). This project contains independently created solutions and its own commit history. Problem statements remain on their original platforms.
