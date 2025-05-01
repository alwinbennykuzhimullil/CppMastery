// 4.3 - Constructors
//
// A constructor is a special type of method that is used to initialize objects of a class.
// While a constructor shares some similarities with a method, it will not have a return
// type and is only invoked with the object is created.
//
//
//

#include <vector>
#include <iostream>

class Point {
    // private:   // <- Private defualt
    int x;
    int y;


    public:
    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    double distanceTo(const Point& otherPoint) const {
        int xDiff = x - otherPoint.x;
        int yDiff = y - otherPoint.y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }
    // Point(int a, int b) : x(a), y(b) {}
    // or
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Getter and setter for x
    int getX() const {
        return x;
    }

    void setX(int newX) {
        x = newX;
    }

    // Getter and setter for y
    int getY() const {
        return y;
    }

    void setY(int newY) {
        y = newY;
    }

    static void printPoints(const std::vector<Point>& points) {
            std::cout << "We're going to print " << points.size()
                      << " points:" << std::endl;
            for (const auto& point : points) {
                point.print();
            }
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

    Point p(5,6);
    p.setX(10);
    p.setY(20);

    std::cout << "x:"<<p.getX() << " and y:"<< p.getY() << std::endl;

    Point::printPoints(points);

    return 0;
}


// What does the constructor help with?
//  - Forced full initialization
//  - Initial access to private data <-- What is private data?
//  - Distance the user of the class from the actual variables (attributes)

// encapsulation -> gate access to sensitive variables
// Use of getters and getters-
// This is called encapsulating the data and is an example of an abstraction.
