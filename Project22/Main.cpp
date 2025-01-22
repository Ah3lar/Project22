#include "Contact.h"
#include "College.h"

int main() {
    Contact contact("123-456-789", "Odessa", "Ukraine");
    College college("IT Step", contact);
    college.Show();
    return 0;
}
