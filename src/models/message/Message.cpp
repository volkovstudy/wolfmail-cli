#include "Message.h"

Message::Message(const string& data, const Person& sender, const Person& receiver) :
        _data(data),
        _sender(sender),
        _receiver(receiver) {}
