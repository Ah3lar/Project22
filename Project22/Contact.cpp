#include "Contact.h"

Contact::Contact(const std::string& phone, const std::string& city, const std::string& country)
    : phone(phone), city(city), country(country) {
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Country: " << country << std::endl;
}
