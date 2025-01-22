#pragma once
#include "Contact.h"

class College {
private:
    Contact contact;
    std::string name;

public:
    College(const std::string& name, const Contact& contact);
    void Show() const;
};
