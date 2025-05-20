/*
Name: Tyler Zhang
Program Name: Company Consistency Lab
Date: 5/16/25
Extra: uses the min function to calculate the final price
*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include "comm.h"
#include "commi.cpp"
#include "discounts.h"
#include "disci.cpp"
#include <string>
int main() {
    // getting user info
    std::string name;
    std::string streetAddress;
    std::string couponCode;
    std::cout << "What's your name?" << std::endl;
    // getting input for name
    getline(std::cin, name);
    std::cout << greeting(name) << std::endl;
    std::cout << "What's your address?" << std::endl;
    getline(std::cin, streetAddress);
    // formatting the street address with the function in the discounts header (using its pointer)
    formatAddress(&streetAddress);
    std::cout << "Your formatted street address is " << streetAddress << std::endl;

    // buying process
    std::string items[3] = {"Wooden Table", "Leather Couch", "Lounge Chair"};
    float productPrices[3] = {159.99, 279.99, 99.99};
    float totalPrice = 0;
    int amountBought;
    int itemBought = -1;
    std::string lastItemBought = "";
    while (itemBought != 0) {
        std::cout << "Which product would you like to buy? (type 0 to end)" << std::endl;
        printProducts(items, productPrices, sizeof(items) / sizeof(std::string));
        std::cin >> itemBought;
        if (itemBought != 0) {
            lastItemBought = items[itemBought - 1];
            std::cout << "How many would you like?" << std::endl;
            std::cin >> amountBought;
            // adds the price of the corresponding product * the amount bought of the item
            totalPrice += (productPrices[itemBought - 1] * amountBought);
        }
    }
    std::cout << "What's your couponCode (enter / if you don't have one)?" << std::endl;
    std::cin.ignore();
    getline(std::cin, couponCode);
    // calculates the minimum of all the discounts (which one actually works)
    totalPrice = std::min({discount10(couponCode, totalPrice), discount20(couponCode, totalPrice), discount50(couponCode, totalPrice)});
    std::cout << "Your final price is " << floor(totalPrice*100+0.5)/100 << std::endl;
    closing(lastItemBought);
    return 0;
}
