#pragma once
#include <iostream>
using namespace std;

class PhoneBook {
    int n;//колво контактов
	char* name = new char[100];
	char* homePhone = new char[100];
	char* jobPhone = new char[100];
	char* info = new char[100];

public:
    PhoneBook():
    n{0}, name{nullptr},homePhone{ nullptr },jobPhone{ nullptr },info{ nullptr }{

    }
	void add();
	void show();

	PhoneBook Enter(PhoneBook* x, int& n);
	void Add(PhoneBook* x, int& n);
	void Dell(PhoneBook* x, int& n);
	void ShowAll(PhoneBook* x, int& n);

	~PhoneBook() {
        name == nullptr;
        info = nullptr;
        homePhone = nullptr;
        jobPhone = nullptr;
    }
};



void PhoneBook::add() {
    cout << "write name \n"; cin >> name;
    cout << "write homePhone \n"; cin >> homePhone;
    cout << "write workPhone \n"; cin >> jobPhone;
    cout << "write dop information \n"; cin >> *info;
}
void PhoneBook::show() {
    cout << "name: " << name << "\n";
    cout << "homePhone: " << homePhone << "\n";
    cout << "workPhone: " << jobPhone << "\n";
    cout << "dop information: " << info << "\n";
}
PhoneBook PhoneBook::Enter(PhoneBook* x, int& n) {
    cout << "write kol-vo people: "; cin >> n;
    for (int i = 0; i < n; i++) {
        x[i].add();
    }
    return *x;
}
void PhoneBook::Add(PhoneBook* x, int& n) {
    cout << "how many people u want add: ";
    int m; cin >> m;
    for (int i = n; i < m; i++) {
        x[i].add();
    }
    n = n + m;
}
void PhoneBook::Dell(PhoneBook* x, int& n) {
    cout << "number people kotorogo u want delete?\n";
    int del; cin >> del;
    for (int i = 0; i < n - 1; i++) {
        if (i >= del)
            x[i] = x[i + 1];
    }
    n = n - 1;
}
void PhoneBook::ShowAll(PhoneBook* x, int& n) {
    for (int i = 0; i < n; i++) {
        x[i].show();
    }
}