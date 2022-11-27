#include <iostream>
using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bomb :public Weapon {
public:
	Bomb() { load(); }
	void load() {
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};

class Gun :public Weapon {
public:
	Gun() { load(); }
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};

int main() {
	Weapon* wp[3]{new Gun(), new Bomb(), new Bomb()};
}