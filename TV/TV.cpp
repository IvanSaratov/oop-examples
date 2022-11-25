#include "TV.h"
#include <vector>

using namespace std;

TV::TV() {
	this->on = false;
	this->currentChannel = 1;
	this->volumes = 50;
};

TV::TV(vector<Channel> ch) {
	this->on = false;
	this->volumes = 50;
	this->channels = ch;
	this->currentChannel = this->channels.front().getChannelNumber();
}

void TV::TurnOn() {
	this->on = true;
}

void TV::TurnOff() {
	this->on = false;
}

bool TV::isOn() {
	return this->on;
}

void TV::SetChannels(vector<Channel> ch) {
	this->channels = ch;
	this->currentChannel = this->channels.front().getChannelNumber();
}

vector<Channel> TV::GetChannels() {
	return this->channels;
}

bool TV::NextChannel() {
	if (!this->on || this->channels.empty()) {
		return false;
	}

	bool found = false;
	for (unsigned int c = 0; c < this->channels.size(); c++) {
		if (found) {
			this->currentChannel = this->channels[c].getChannelNumber();
			found = false;
		}
		
		if (this->currentChannel == channels[c].getChannelNumber()) {
			found = true;
		}
	}

	if (found) {
		this->currentChannel = this->channels.front().getChannelNumber();
	}

	return true;
}

bool TV::PrevChannel() {
	if (!this->on || this->channels.empty()) {
		return false;
	}

	bool found = false;
	for (unsigned int c = this->channels.size() - 1; c >= 0; c--) {
		if (found) {
			this->currentChannel = this->channels[c].getChannelNumber();
			found = false;
		}

		if (this->currentChannel == channels[c].getChannelNumber()) {
			found = true;
		}
	}

	if (found) {
		this->currentChannel = this->channels.back().getChannelNumber();
	}

	return true;
}

bool TV::SwitchChannel(unsigned int num) {
	if (!this->on || channels.empty()) {
		return false;
	}

	for (unsigned int c = 0; c < this->channels.size(); c++) {
		if (this->channels[c].getChannelNumber() == c) {
			this->currentChannel = this->channels[c].getChannelNumber();
			return true;
		}
	}

	return false;
}

unsigned int TV::GetVolume() {
	return this->volumes;
}

bool TV::VolumeUp() {
	if (this->volumes < 100) {
		this->volumes++;
		return true;
	}

	return false;
}

bool TV::VolumeDown() {
	if (this->volumes > 0) {
		this->volumes--;
		return true;
	}

	return false;
}

Channel TV::GetChannelInfo() {
	if (!this->on || channels.empty()) {
		return false;
	}

	for (unsigned int c = 0; c < this->channels.size(); c++) {
		if (this->channels[c].getChannelNumber() == this->currentChannel) {
			return this->channels[c];
		}
	}
}

TV::~TV() {}