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
	* ��������� �����������
	* 
	* @param number ����� ������
	* @param seats ������ ���� ������ ������
	* @param services ������� ��������������� � ������
	*/
	Carriage(unsigned int number, vector<Seat> seats, vector<Service> services) {}

	/**
	* @return ��� ������
	*/
	static string GetCarriageType() {
		return CarriageType;
	}

	/**
	* ������ �����
	* 
	* @param seats ������ ���� ���� Seat
	*/
	void SetSeats(vector<Seat> seats) {}

	/**
	* ������ ����� ������
	* 
	* @param number ����� ������
	*/
	void SetNumber(unsigned int number) {}

	/**
	* ������ ������ ����� ��������������� �������
	* 
	* @param services ������ ����� ���� Service
	*/
	void SetServices(vector<Service> services) {}

	/**
	* @return ������ ���� ���� Seat
	*/
	vector<Seat> GetSeats() {}

	/**
	* @return ����� ������
	*/
	unsigned int GetNumber() {}

	/**
	* @return ������ ����� ��������������� � ������ ���� Service
	*/
	vector<Service> GetServices() {}

	virtual ostream& print(ostream& out) {
		return out << "����� ���� " << this->CarriageType <<
			" � ������� " << this->number << endl;
	}

	friend ostream& operator<< (ostream& out, Carriage& c) {
		return c.print(out);
	}

	~Carriage() {}
};

