#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::ifstream file("../d2/input.txt");
    if (!file.is_open()) {
        std::cout << "ERROR";
        return 0;
    }
    std::string line;
    int ch, c, i, r, g, b;
    int id = 0, sum = 0;
    while (std::getline(file, line)) {
        id++;
        for (i = 5; i < line.length(); i++) {
            if (line.at(i) == ':') {
                break;
            }
        }
        r = 1, g = 1, b = 1;
        for (; i < line.length(); i++) {
            c = 0;
            ch = line.at(i) - '0';
            while (ch >= 0 && ch <= 9) {
                i++;
                c = c * 10 + ch;
                ch = line.at(i) - '0';
            }
            i++;
            if (line.at(i) == 'r') {
                i += 2;
                if (c > r) {
                    r = c;
                }
            }
            if (line.at(i) == 'g') {
                i += 4;
                if (c > g) {
                    g = c;
                }
            }
            if (line.at(i) == 'b') {
                i += 3;
                if (c > b) {
                    b = c;
                }
            }
        }
        sum += r * g * b;
    }
    std::cout << sum << "";
    return 0;
}
