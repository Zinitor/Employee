#pragma once
#include "man.h"
#include <ctime>
#include <list>

class Room {
private:
    int number;
public:
    Room(int n) {
        number = n;
    }
    bool operator==(const Room& obj) const {
        if (number == obj.number) {
            return true;
        }
        else {
            return false;
        }
    }
    void setNumber(int newNumber) {
        number = newNumber;
    }
    int getNumber() {
        return number;
    }
};

class IdCard {
private:
    time_t dateExpire;
    int number;
public:
    IdCard(int n) {
        number = n;
    }
	IdCard(){}
    void setNumber(int newNumber) {
        number = newNumber;
    }
    int getNumber() {
        return number;
    }
    void setDateExpire(time_t nDE) {
        dateExpire = nDE;
    }
    time_t getDE() {
        return dateExpire;
    }

};

class Employee :
    public Man
{
private: 
    string position;
    IdCard iCard;
    list<Room*> rooms;
public:
    Employee(string n, string s, string p) {
        name = n;
        surname = s;
        position = p;
}
    void setPosition(string NewProfession) {
        position = NewProfession;
    }
    string getPosition() {
        return position;
    }
    void setIdCard(IdCard c) {
        iCard = c;
    }
    IdCard getIdCard() {
        return iCard;
    }
	void setRoom (Room* newRoom){
        rooms.push_back(newRoom);
	}
	


};



