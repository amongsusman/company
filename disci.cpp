#include "discounts.h"
#include <string>
float discount10(std::string coupon, float price) {
    if (coupon == "TABLE4YOU" || coupon == "FUNRITURE" || coupon == "TINYCHAIRS") {
        return price - (0.1 * price);
    }
    return price;
}
float discount20(std::string coupon, float price) {
    if (coupon == "FURNITURE420" || coupon == "1SLASH5OFF" || coupon == "SUPERFURNITURE") {
        return price - (0.2 * price);
    }
    return price;
}
float discount50(std::string coupon, float price) {
    if (coupon == "GET4HALF" || coupon == "SKIBIDI" || coupon == "IMTOOGOOD") {
        return price - (0.5 * price);
    }
    return price;
}