simple_regexp
================

A very simple regexp matcher with support for '*', '.'.

Usage
=====

````cpp

#include "match.h"

int main() {
    /* ... */
    if (util::match("abbc", "ab.c")) {
        /* ... */
    }

    /* ... */

    return 0;
}

```

