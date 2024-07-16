#include <iostream>
#include <string>
#include <set>

int main() {
    int i = 15;
    bool found = false;

    while (!found) {
        std::string str = std::to_string(i);
        std::set<char> digits(str.begin(), str.end());
        
        if (digits.size() == 2 && digits.count('1') == 1 && digits.count('0') == 1) {
            found = true;
        } else {
            i += 15;
        }
    }

    std::cout << i << std::endl;
    return 0;
}
