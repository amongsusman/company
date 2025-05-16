#include "comm.h"
#include <string>
#include <cctype>
std::string greeting(std::string name) {
    return "Hey " + name + ", welcome on over on this great day to Fast & Furniture!";
}
void formatAddress(std::string* address) {
    int len = (*address).length();
    for (int i = 0; i < len; i++) {
        (*address)[i] = toupper((*address)[i]);
    }
}
std::string closing(std::string prodName) {
    return "We're sad to see you go, but we hope you and your home enjoy the " + prodName + "!";
}