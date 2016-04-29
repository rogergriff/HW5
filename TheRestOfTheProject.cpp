

//shape class is virtual as its default for our actual shapes
class Shape {

virtual ~Shape() = default; //destructs to default

virtual bool contains(const Point & p); //virtual function to determine a point 

}

