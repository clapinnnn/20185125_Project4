#include <iostream>

using namespace std;

static int num = 0;

class Box {
private:
	int length;
	int width;
	int height;
	int volume;
public:
	Box(int l, int w, int h) :length{ l }, width{ w }, height{ h }{
		volume = length * width * height;
		cout << "상자 #" << ++num << endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << volume << endl;
		cout << endl;
	}
	string operator<(Box& box) const {
		if (this->volume < box.volume)
			return "true";
		else
			return "false";
	}
};

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
	cout << (a < b);
}