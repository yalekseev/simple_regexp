#include "match.h"

#include <cassert>

int main() {
    assert(util::match("abbc", "abbc"));
    assert(util::match("abbc", ".bbc"));
    assert(util::match("abbc", "a.bc"));
    assert(util::match("abbc", "ab.c"));
    assert(util::match("abbc", "abb."));
    assert(util::match("abbc", "..bc"));
    assert(util::match("abbc", "a..c"));
    assert(util::match("abbc", "ab.."));
    assert(util::match("abbc", "ab*c"));
    assert(util::match("abbc", "a.*c"));
    assert(util::match("abbbc", "ab*c"));
    assert(util::match("abbbbc", "ab*c"));
    assert(util::match("ac", "ab*c"));

    return 0;
}
