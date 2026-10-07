# Can't Wait for Holiday

[Original problem](https://atcoder.jp/contests/abc146/tasks/abc146_a) · [C++ solution](../../solutions/atcoder/implementation/abc146_a_can_t_wait_for_holiday.cpp)

## Try first

Index Sunday as zero.

## Reasoning

Index Sunday as zero. The next Sunday is seven minus the current index days away, including seven days when today is Sunday.

## Cost

- Time: **O(1)**.
- Extra space: **O(1)**.

## C++ takeaway

Keep input text as std::string when leading zeros or decimal digits matter. Convert one-based positions to zero-based indices before accessing characters.

## Watch for

Follow the exact input and output formats; check the smallest allowed input.

## Explain it back

State the invariant without looking at the code. Give one input that breaks the most tempting incorrect approach, then add it to the tests.
