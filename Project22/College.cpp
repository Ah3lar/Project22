#include "College.h"

College::College(const std::string& name, const Contact& contact)
    : name(name), contact(contact) {
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    contact.Show();
}
