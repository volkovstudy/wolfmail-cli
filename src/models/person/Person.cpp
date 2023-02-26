#include "Person.h"

Person::Person(const string& fullName, const string& email) :
        _fullName(fullName),
        _email(email) {}

const string& Person::getFullName() const {
    return _fullName;
}

const string& Person::getEmail() const {
    return _email;
}
