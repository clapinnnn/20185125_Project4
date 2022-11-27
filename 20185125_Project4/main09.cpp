#include <iostream>

using namespace std;

template <typename T>
class Circle {
private:
	T x, y, r;
public:
	Circle(T x, T y, T r) :x{ x }, y{ y }, r{ r }{}
	T area() {
		return 3.14 * r * r;
	}
};

int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "면적: " << circleA.area() << endl;
	
	Circle<int> circleB(0, 0, 5);
	cout << "면적: " << circleB.area() << endl;

	return 0;
}