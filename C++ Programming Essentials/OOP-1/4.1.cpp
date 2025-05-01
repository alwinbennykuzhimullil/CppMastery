// 4.1 - Introduction to Classes
#include <vector>
#include <iostream>

class Point {
   public:
    int x;
    int y;
};

int main() {

    std::vector<Point> points = {{0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5}};

    for (const auto& point : points) {
        std::cout << "(" << point.x << ", " << point.y << ")" << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "(" << points.at(i).x << ", " << points.at(i).y << ")"
                  << std::endl;
    }

    return 0;
}

/*
While this code will work for the example provided, it's generally not recommended to use a copy if you don't need to modify the object,
because it can be less efficient than using a reference or pointer. In this case, using **`const auto& p`**is preferred because it avoids
creating unnecessary copies of the **`Point`**objects in the vector.

This is an example of a POD class (plain old data class). No functionality, just data storage!
It’s often the case for PODs you’ll just use a struct. We’ll talk about that more.

*/
