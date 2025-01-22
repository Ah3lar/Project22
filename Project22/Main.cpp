#include "Contact.h"
#include "College.h"
#include "Student.h"

int main() {
    Contact contact("123-456-789", "Odessa", "Ukraine");
    College college("IT College", contact);
    Student student("Alex Johnson", "11/11/1111", contact, college);
    student.Show();
    return 0;
}
