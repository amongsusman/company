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
void closing(std::string prodName) {
    std::cout << "We're sad to see you go, but we hope you and your home enjoy the " + prodName + "!" << std::endl;
}
void printProducts(std::string items[], float productPrices[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << (i + 1) << ") " << items[i] << ": " << productPrices[i] << std::endl;
    }
}
