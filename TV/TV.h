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
    * @param ch список каналов
    */
	TV(vector<Channel> ch) {}

    /**
    *  Включает телевизор
    */
	void TurnOn() {}

    /**
    *   Выключает телевизор
    */
    void TurnOff() {}

    /**
    * @return true если телевизор включен
    */
    bool isOn() {}

    /**
    * Выставляет программу каналов
    * 
    * @param ch список каналов
    */
	void SetChannels(vector<Channel> ch) {}

    /**
    *  @return возвращает список каналов
    */
	vector<Channel> GetChannels() {}

    /**
    * Переключает на следующий канал
    * 
    * @return true - если переключился
    */
    bool NextChannel() {}

    /**
    *   Переключает на предыдующий канал
    * 
    *   @return true - если переключился
    */
    bool PrevChannel() {}

    /**
    *   Переключает на указанный канал
    *   
    *   @return true - если такой канал есть и он переключился
    */
    bool SwitchChannel(unsigned int num) {}

    /**
    * @return возвращает громкость динамиков
    */
    unsigned int GetVolume() {}

    /**
    * Увеличивает звук
    * 
    * @return false - если максимальная громкость
    */
    bool VolumeUp() {}

    /**
    * Уменьшает громкость
    * 
    * @return false - если минимальная громкость
    */
    bool VolumeDown() {}

    /**
    *   Отдает информацию о текущем канале
    * 
    *   @return возвращает объект типа Channel
    */
    Channel GetChannelInfo() {}

    ~TV() {}
};

