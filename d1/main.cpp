#include <iostream>
#include <fstream>

using namespace std;

#define keyword(a, b) \
    if(i < text.size()) if(text.at(i) == a[0]){ \
        tmp = "";     \
        for(int k = 0; k < sizeof(a) - 1 && i + k < text.size(); k++){ \
            tmp += text.at(i+k);       \
        }          \
        if(tmp == a) {    \
            if(c == 0) { \
                f = b;   \
                l = b;\
            } else {     \
                l = b;   \
            }         \
            c++;\
        }\
    }\


int main() {
    std::ifstream file("../d1/input.txt");
    if (!file.is_open()) {
        std::cout << "ERROR";
        return 0;
    }
    std::string text, tmp;
    int i, max, ch, c, l, f, sum = 0;
    while (std::getline(file, text)) {
        i = 0;
        max = text.length();
        c = 0;
        while (i < max) {
            ch = text.at(i) - '0';
            if (ch >= 0 && ch <= 9) {
                if (c == 0) {
                    f = ch;
                    l = ch;
                } else {
                    l = ch;
                }
                c++;
            }
            keyword("one", 1)
            keyword("two", 2)
            keyword("three", 3)
            keyword("four", 4)
            keyword("five", 5)
            keyword("six", 6)
            keyword("seven", 7)
            keyword("eight", 8)
            keyword("nine", 9)
            keyword("ten", 10)
            i++;
        }
        if (c > 0) sum += f * 10 + l;
    }
    std::cout << sum << "";
    return 0;
}
