/*
Name: Tyler Zhang
Program Name: Company Consistency Lab
Date: 5/16/25
Extra: 
*/
#include <iostream>
#include "comm.h"
#include "commi.cpp"
#include "discounts.h"
#include "disci.cpp"
#include <string>
int main() {
    std::string name;
    std::string streetAddress;
    std::string couponCode;
    std::cout << "What's your name?" << std::endl;
    std::cin >> name;
    std::cout << "What's your address?" << std::endl;
    std::cin >> streetAddress;
    std::cout << "What's your couponCode (enter / if you don't have one)?" << std::endl;
    std::cin >> couponCode;

    return 0;
}