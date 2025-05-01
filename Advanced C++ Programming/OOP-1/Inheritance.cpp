#include <cmath>
#include <iostream>

class Point {
   protected:
    int x, y;

   public:
    Point(int x, int y) : x(x), y(y) {}

    double distance(const Point& other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }

    virtual void print() const {
        std::cout << "Point (" << x << ", " << y << ")";
    }
};

class XYZPoint : public Point {
   private:
    int z;

   public:
    XYZPoint(int x, int y, int z) : Point(x, y), z(z) {}

    void print() const override {
        std::cout << "XYZPoint (" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    XYZPoint p1 = XYZPoint(1, 2, 3);
    Point p2 = Point(4, 5);

    double dist1 = p1.distance(p2);
    double dist2 = p2.distance(p1);

    std::cout << "Distance between p1 and p2: " << dist1 << std::endl;
    std::cout << "Distance between p2 and p1: " << dist2 << std::endl;

    p1.print();
    std::cout << std::endl;
    p2.print();
    std::cout << std::endl;

    return 0;
}
