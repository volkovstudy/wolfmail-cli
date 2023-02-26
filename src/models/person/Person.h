#ifndef WOLFMAIL_CLI_PERSON_H
#define WOLFMAIL_CLI_PERSON_H


#include <string>

using namespace std;

class Person {
private:
    string _fullName;
    string _email;
public:
    Person(const string& fullName, const string& email);
};


#endif
