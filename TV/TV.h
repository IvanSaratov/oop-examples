#pragma once

#include <vector>
#include "Channel.h"

using namespace std;

class TV
{
private:
    bool on;
    unsigned int volumes;
    unsigned int currentChannel;
    vector<Channel> channels;

public:
    TV() {}

    /**
    * @param ch ������ �������
    */
	TV(vector<Channel> ch) {}

    /**
    *  �������� ���������
    */
	void TurnOn() {}

    /**
    *   ��������� ���������
    */
    void TurnOff() {}

    /**
    * @return true ���� ��������� �������
    */
    bool isOn() {}

    /**
    * ���������� ��������� �������
    * 
    * @param ch ������ �������
    */
	void SetChannels(vector<Channel> ch) {}

    /**
    *  @return ���������� ������ �������
    */
	vector<Channel> GetChannels() {}

    /**
    * ����������� �� ��������� �����
    * 
    * @return true - ���� ������������
    */
    bool NextChannel() {}

    /**
    *   ����������� �� ����������� �����
    * 
    *   @return true - ���� ������������
    */
    bool PrevChannel() {}

    /**
    *   ����������� �� ��������� �����
    *   
    *   @return true - ���� ����� ����� ���� � �� ������������
    */
    bool SwitchChannel(unsigned int num) {}

    /**
    * @return ���������� ��������� ���������
    */
    unsigned int GetVolume() {}

    /**
    * ����������� ����
    * 
    * @return false - ���� ������������ ���������
    */
    bool VolumeUp() {}

    /**
    * ��������� ���������
    * 
    * @return false - ���� ����������� ���������
    */
    bool VolumeDown() {}

    /**
    *   ������ ���������� � ������� ������
    * 
    *   @return ���������� ������ ���� Channel
    */
    Channel GetChannelInfo() {}

    ~TV() {}
};

