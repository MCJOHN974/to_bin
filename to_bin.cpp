#include <string>
std::string to_bin(int num) {
    int sgn = 1;
    if (num < 0) {
        sgn = -1;
    }
    num = abs(num);
    std::string reversed_res;
    while (num > 0) {
        reversed_res += std::to_string(num % 2);
        num /= 2;
    }
    if (reversed_res.empty()) {
        return "0";
    }
    if (sgn == -1) {
        reversed_res += "-";
    }
    std::string res;
    for (auto it = reversed_res.rbegin(); it < reversed_res.rend(); it++) {
        res += *it;
    }
    return res;
}
