#include <iostream>

using namespace std;

class Square {
protected:
	int a;
public:
	Square() : a(1) {}
	Square(int line) {
		a = line;
	}
};

class Circle {
protected:
	int r;
public:
	Circle() : r(2) {}
	Circle(int radius) {
		r = radius;
	}
};

class Circle_in_a_Square : public Square, public Circle {
public:
	Circle_in_a_Square(int a, int r) : Square(a), Circle(r) {
	}
	bool Check() {
		if (r * 2 <= a) {
			return false;
		}
		else {
			return true;
		}
	}
};

int main() {
	Circle_in_a_Square obj1(5, 2);
	cout << obj1.Check() << endl;
}