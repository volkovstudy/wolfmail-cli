#include "Message.h"

Message::Message(const string& data, const Person& sender, const Person& receiver) :
        _data(data),
        _sender(sender),
        _receiver(receiver) {}

const string& Message::getData() const {
    return _data;
}

const Person& Message::getSender() const {
    return _sender;
}

const Person& Message::getReceiver() const {
    return _receiver;
}
