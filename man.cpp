#include "man.h"
#include "employee.h"


int main() {
	IdCard card(123);
	card.setDateExpire(10);
	Employee sysEngineer("Andrew","ghost","sysEngineer");
	sysEngineer.setIdCard(card);
	cout << sysEngineer.getName();
	cout << sysEngineer.getIdCard().getNumber();
	getchar();
	return 0;
}

