#include <iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time() :hours(0), minutes(0) {}
	Time(int h, int m) :hours{ h }, minutes{ m }{};
	~Time() {}
	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}
	void operator++() {
		if (minutes >= 59) {
			++hours;
			minutes = 0;
		}
		else
			++minutes;
	}
};

int main() {
	Time t(10, 59);
	t.displayTime();

	++t;
	t.displayTime();

	++t;
	t.displayTime();
}