#include "Carriage.h"

Carriage::Carriage()  {
	this->number = 1;
}

Carriage::Carriage(unsigned int number, vector<Seat> seats, vector<Service> services) {
	this->number = number;
	this->seats = seats;
	this->services = services;
}

void Carriage::SetSeats(vector<Seat> seats) {
	this->seats = seats;
}

void Carriage::SetNumber(unsigned int number) {
	this->number = number;
}

void Carriage::SetServices(vector<Service> services) {
	this->services = services;
}


vector<Seat> Carriage::GetSeats() {
	return this->seats;
}

unsigned int Carriage::GetNumber() {
	return this->number;
}

vector<Service> Carriage::GetServices() {
	return this->services;
}