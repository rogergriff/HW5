#inlude<iostream>
 using std::cout;
  using std::endl;
  
 -class Point{
 +class Point {
  private:
  	double x;
  	double y;
  
  public:
 -	Point(double a, double b){
 +	Point(double a, double b) {
  		x = a;
  		y = b;
  	}
 -	Point(){
 +	Point() {
  		x = 0;
  		y = 0;
  	}
 -	void get(){
 -		cout << "x = " << x << " y = " << y << endl;
 +	Point get() {
 +		Point a(x, y);
 +		return a;
  	}
 -	~Point(){}
 +	~Point() {}
  };
  
 -int main(){
 +int main() {
  	Point a(2.2, 4.4);
  	Point b;
  	cout << "a" << endl;
//shape class is virtual as its default for our actual shapes
class Shape {

virtual ~Shape() = default; //destructs to default

virtual bool contains(const Point & p); //virtual function to determine a point 

}

