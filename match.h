#include <string>

namespace util {

namespace impl {

template <typename TChar>
bool char_match(TChar left = '.', TChar right = '.') {
    if (left == '.') {
        return true;
    }

    if (right == '.') {
        return true;
    }

    return left == right;
}

} // namespace util

template <typename TChar>
bool match(const std::basic_string<TChar>& t, const std::basic_string<TChar>& p) {
    if (p.empty()) {
        return t.empty();
    }

    if (t.empty()) {
        return false;
    }

    if (p.size() > 1 && p[1] == '*') {
        if (match(t, p.substr(2))) {
            return true;
        }

        if (impl::char_match(t[0], p[0])) {
            return match(t.substr(1), p);
        }

        return false;
    }

    if (impl::char_match(t[0], p[0])) {
        return match(t.substr(1), p.substr(1));
    }

    return false;
}

template <typename TChar>
bool match(const TChar* left, const TChar* right) {
    return match(std::basic_string<TChar>(left), std::basic_string<TChar>(right));
}

} // namespace util
