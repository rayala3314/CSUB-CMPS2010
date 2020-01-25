#include <iostream>

using namespace std;

struct circle{
    float radius;
    float area;
    float circumference;


};
struct rectangle{
    int width;
    int length;
    int area;

};
struct polygon{
    int num_of_sides;
    int *sides;
    int perimeter;

};

void circleCalculations(circle &);
void rectangleArea(rectangle &);
void polygonCalc(polygon &);
void polygonCopy(polygon &, polygon &);
int main() {

    circle x;
    circleCalculations(x);
    rectangle y;
    rectangleArea(y);
    polygon w;
    polygonCalc(w);
    polygon f;
    polygonCopy(w,f);
    delete [] w.sides;
    delete [] f.sides;

return 0;
}

void circleCalculations(circle &r){
    const float PI = 3.14159;
    cout << "Enter a raduis: \n";
    cin >> r.radius;
    r.area = r.radius * r.radius * PI;
    r.circumference = 2 * r.radius * PI;
    

}
void rectangleArea(rectangle &y){
    cout <<"Enter a width then a length(space separated): \n";
    cin >> y.width >> y.length;
    y.area = y.width * y.length;

}
void polygonCalc(polygon &n){
    cout << "Enter number of sides: \n";
    cin >>n.num_of_sides;
    if(n.num_of_sides >= 3){
        n.sides = new int[n.num_of_sides];
        n.perimeter = 0;
        for ( int i = 0; i < n.num_of_sides; i++ ){
            cout << "Enter side length for " << i + 1 << " : \n";
            cin >> n.sides[i];
            n.perimeter += n.sides[i]; 

        }
        
    }else {

        cout << "You must have atleast 3 sides \n";

    }


}
void polygonCopy (polygon &one, polygon &two){
    if ( one.num_of_sides >= 3){
    two.num_of_sides = one.num_of_sides;
    two.perimeter = one.perimeter;
    two.sides = new int[two.num_of_sides];
        for(int j = 0; j < two.num_of_sides; j++){
            two.sides[j] = one.sides[j];
   
        }
     
    }else{
        cout << " \n";

    }

}
