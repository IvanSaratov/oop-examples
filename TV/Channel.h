#pragma once

#include <vector>
#include <string>

class Channel
{
private:
    unsigned int num;
    std::string name;
public:
    Channel() { }

    Channel(unsigned int num) {
    }

    Channel(unsigned int num, std::string name) {
    }

    /**
     * @return номер канала
    */
    unsigned int getChannelNumber() {
    }

    /**
     * @return название канала
    */
	std::string getChannelName() {}

    ~Channel() {}
};