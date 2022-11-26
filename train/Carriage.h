#include <string>
#include <vector>
#include <iostream>

#pragma once

using namespace std;

enum SeatType {Upper, SideUpper, Down, SideDown};

struct Service
{
	string name;
	string description;
	unsigned int price;
};

struct Seat 
{
	unsigned int number;
	SeatType type;
	bool busy = false;
};

class Carriage
{
private:
	static string CarriageType;
protected:
	unsigned int number;

	vector<Seat> seats;
	vector<Service> services;
public:
	Carriage() {}

	/**
	* ƒефолтный конструктор
	* 
	* @param number номер вагона
	* @param seats массив мест внутри вагона
	* @param services сервисы предоставл€емые в вагоне
	*/
	Carriage(unsigned int number, vector<Seat> seats, vector<Service> services) {}

	/**
	* @return тип вагона
	*/
	static string GetCarriageType() {
		return CarriageType;
	}

	/**
	* «адать места
	* 
	* @param seats массив мест типа Seat
	*/
	void SetSeats(vector<Seat> seats) {}

	/**
	* «адать номер вагона
	* 
	* @param number номер вагона
	*/
	void SetNumber(unsigned int number) {}

	/**
	* «адать список услуг предостовл€емый вагоном
	* 
	* @param services массив услгу типа Service
	*/
	void SetServices(vector<Service> services) {}

	/**
	* @return массив мест типа Seat
	*/
	vector<Seat> GetSeats() {}

	/**
	* @return номер вагона
	*/
	unsigned int GetNumber() {}

	/**
	* @return список услуг предоставл€емые в вагоне типа Service
	*/
	vector<Service> GetServices() {}

	virtual ostream& print(ostream& out) {
		return out << "¬агон типа " << this->CarriageType <<
			" с номером " << this->number << endl;
	}

	friend ostream& operator<< (ostream& out, Carriage& c) {
		return c.print(out);
	}

	~Carriage() {}
};

