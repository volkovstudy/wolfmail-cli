#ifndef WOLFMAIL_CLI_MESSAGE_H
#define WOLFMAIL_CLI_MESSAGE_H


#include <string>

#include "models/person/Person.h"

using namespace std;

class Message {
private:
    string _data;
    Person _sender;
    Person _receiver;
};


#endif
