#include <iostream>
using std::cout;
using std::endl;

class Point {
private:
	double x;
	double y;

public:
	Point(double a, double b) {
		x = a;
		y = b;
	}
	Point() {
		x = 0;
		y = 0;
	}
	Point get() {
		Point a(x, y);
		return a;
	}
	~Point() {}
};

int main() {
	Point a(2.2, 4.4);
	Point b;
	cout << "a" << endl;
	a.get();
	cout << "b" << endl;
	b.get();
	system("pause");
	return 0;
}
