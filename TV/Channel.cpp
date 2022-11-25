#include "Channel.h"

Channel::Channel() {
    this->num = 1;
    this->name = "";
}

Channel::Channel(unsigned int num) {
    this->num = num;
    this->name = "";
}

Channel::Channel(unsigned int num, std::string name) {
    this->num = num;
    this->name = name;
}

/**
 * @return номер канала
*/
unsigned int Channel::getChannelNumber() {
    return this->num;
}

/**
 * @return название канала
*/
std::string Channel::getChannelName() {
    return this->name;
}

Channel::~Channel() {}