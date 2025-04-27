//#include <climits>
#include <iostream>

int main() {
    bool friendly = false;
    int age = 20;
    char firstInitial = 'c';

		// signed = positive or negative
    signed short s = SHRT_MAX;      // 32767
    signed short s2 = s + 1;        // -32768  // overflow

		// unsigned = only positive
    unsigned short s3 = USHRT_MAX;  // 65535
    unsigned short s4 = s3 + 1;     // 0

    // floating point values
    float weight = 190.5;  // I don't recommend float
    double weightKG = weight * 0.45359237;

    std::cout << friendly << " " << age << " " << firstInitial << " " << s
              << " " << s2 << " " << s3 << " " << s4 << " " << weight << " "
              << weightKG << std::endl;

    return 0;
}
