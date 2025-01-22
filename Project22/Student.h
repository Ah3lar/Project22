#pragma once
#include "College.h"

class Student {
private:
    std::string* fullName;
    std::string* birthDate;
    Contact contact;
    College college;

public:
    Student(const std::string& fullName, const std::string& birthDate, const Contact& contact, const College& college);
    ~Student();
    void Show() const;
};