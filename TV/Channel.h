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
     * @return ����� ������
    */
    unsigned int getChannelNumber() {
    }

    /**
     * @return �������� ������
    */
	std::string getChannelName() {}

    ~Channel() {}
};