#include <iostream>
#include <vector>

void print(double d) { std::cout << d << std::endl; }
void print(std::vector<double> data) {
    for (auto d : data) {
        std::cout << d << std::endl;
    }
}
int main() {
    print(5);
    print(std::vector<double>{5.5, 6.6, 7.7});
}
