#include "Contact.h"

Contact::Contact(const std::string& phone, const std::string& city, const std::string& country)
    : phone(new std::string(phone)), city(new std::string(city)), country(new std::string(country)) {
}

Contact::~Contact() {
    delete phone;
    delete city;
    delete country;
}

void Contact::Show() const {
    std::cout << "Phone: " << *phone << std::endl;
    std::cout << "City: " << *city << std::endl;
    std::cout << "Country: " << *country << std::endl;
}
