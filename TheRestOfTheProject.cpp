#inlude<iostream>
 using std::cout;
  using std::endl;
  
 class Point{
  private:
  	double x;
  	double y;
  
  public:
	Point(double a=0, double b=0): x(a), y(b) {}
 Point get(){
 		Point a(x, y);
 		return a;
  	}
 ~Point(){}
  };
  
//shape class is virtual as its default for our actual shapes
class Shape {

virtual ~Shape() = default; //destructs to default

virtual bool contains(const Point & p); //virtual function to determine a point 

};

class Rectangle : Shape() {
	bool contains(const Point & p);
	~Rectangle(){}
};

class Ellipse : Shape() {
	bool contains(const Point & p);
	~Ellipse(){};
};

class Square : Rectangle() {
	~Square(){}
};

class Cirlce : Ellipse() {
	~Circle()	
};

 int main(){
  	Point a(2.2, 4.4);
  	Point b;
  	cout << "a" << endl;
 }
