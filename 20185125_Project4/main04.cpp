#include <iostream>
#include <string>

using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
	int computeSalary() {
		return salary;
	}
};

class Manager :public Employee {
	int bonus;
public:
	Manager(string name, int salary, int bonus) : Employee(name, salary) {
		this->bonus = bonus;
	}
	int getBonus() {
		return bonus;
	}
	void setBonus(int salary) {
		this->bonus = bonus;
	}
	int computeSalary() {
		return Employee::computeSalary() + bonus;
	}
};

int main() {
	Manager m("��ö��", 200, 100);
	cout << "�̸�: " << m.getName() << endl;
	cout << "����: " << m.getSalary() << endl;
	cout << "���ʽ�: " << m.getBonus() << endl;
	cout << "��ü �޿�: " << m.computeSalary() << endl;
}