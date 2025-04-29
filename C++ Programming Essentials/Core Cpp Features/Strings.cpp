#include <iostream>
#include <string>
#include <sstream>

int main(){

    // Accessing Characters
    std::string data = "Alwin";
    std::cout << data.at(3) << " " << data[3] << std::endl;

    //Searching a String
    std::string message = "Don't tell anybody but my password is pass123";
    auto location = message.find("password");
    std::cout << location << std::endl; //26

    //Replacing Parts of a String
    std::string message2 = "Don't tell anybody but my password is pass123";
    auto location2 = message2.find("password");
    message2.replace(location2, 8, "****");
    std::cout << message2 << std::endl; //Don't tell anybody but my **** is pass123


    //Concatenate Strings
    std::string name = "Alwin";
    std::string last = "Benny";
    name.append(" ").append(last);
    std::cout << name << std::endl;
    // or
    std::string first1 = "Caleb";
    std::string last1 = "Curry";
    std::string name1 = first1 + " " + last;
    std::cout << name << std::endl;

    // String Formatting
    int hour = 6;
    int min = 32;
    int sec = 20;
    int micro = 50505;

    std::ostringstream stream;
    stream << "time is " << hour << ":" << min << ":" << sec << "." << micro;
    std::string result = stream.str();
    std::cout << result << std::endl;








    return 0;
}
