#include "Student.h"

Student::Student(const std::string& fullName, const std::string& birthDate, const Contact& contact, const College& college)
    : fullName(fullName), birthDate(birthDate), contact(contact), college(college) {
}

void Student::Show() const {
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
    contact.Show();
    college.Show();
}