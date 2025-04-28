#include <iostream>

// Function template to add two values
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Adding integers: " << add(3, 4) << std::endl;       // Output: 7
    std::cout << "Adding doubles: " << add(3.5, 2.5) << std::endl;   // Output: 6.0
    return 0;
}
