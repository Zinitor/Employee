#pragma once
#include <string>
#include <iostream>

using namespace std;

class Man
{
protected:
	string name;
	string surname;
public:
	void setName(string newname) {
		name = newname;
	}
	string getName() {
		return name;
	}
	void setSurname(string newname) {
		surname = newname;
	}
	string getSurname() {
		return surname;
	}

};

