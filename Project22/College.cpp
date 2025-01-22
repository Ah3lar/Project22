#include "College.h"

College::College(const std::string& name, const Contact& contact)
    : name(new std::string(name)), contact(contact) {
}

College::~College() {
    delete name;
}

void College::Show() const {
    std::cout << "College Name: " << *name << std::endl;
    contact.Show();
}
