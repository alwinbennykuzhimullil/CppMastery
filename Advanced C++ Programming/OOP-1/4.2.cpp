// 4.2 - Functions and Methods

#include <vector>
#include <iostream>

class Point {
   public:
    int x;
    int y;

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    double distanceTo(const Point& otherPoint) const {
        int xDiff = x - otherPoint.x;
        int yDiff = y - otherPoint.y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main() {

    std::vector<Point> points = {{0, 1}, {2, 2}, {2, 3}, {3, 4}, {4, 5}};

    for (const auto& point : points) {
        point.print();
    }

    for (size_t i = 0; i < points.size(); i++) {
        points.at(i).print();
        if (i==4){
            std::cout << "You've reached the destination" << std::endl;
            break;
        }
        std::cout << "Distance to next point: "
                    << points.at(i).distanceTo(points.at(i + 1))
                    << std::endl;
    }

    return 0;
}
