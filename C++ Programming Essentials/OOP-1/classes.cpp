
#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& firstName, const std::string& lastName)
        : firstName(firstName), lastName(lastName) {}

    void setFirstName(const std::string& firstName) {
        this->firstName = firstName;
    }

    void setLastName(const std::string& lastName) {
        this->lastName = lastName;
    }

    std::string getName() const {
        return firstName + " " + lastName;
    }

private:
    std::string firstName;
    std::string lastName;
};

int main() {
    Person person("John", "Doe");
    std::cout << "Person name: " << person.getName() << std::endl;

    person.setFirstName("Jane");
    person.setLastName("Smith");
    std::cout << "Updated person name: " << person.getName() << std::endl;

    return 0;
}
