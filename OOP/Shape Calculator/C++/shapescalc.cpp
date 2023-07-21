#include <iostream>
using namespace std;

class shapes {
public:
    double circleArea() {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;
        double area = 22.0/7 * radius * radius;
        cout << "Area of the circle is " << area << endl;
        return area;
        }

    double squareArea() {
        double side;
        cout << "Enter the side of a square : ";
        cin >> side;
        double area = side * side;
        cout << "Area of the square is " << area << endl;
        return area;

    }

     double rectangleArea() {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        double area = length * width;
        cout << "Area of the rectangle is " << area << endl;
        return area;
    }
};

int main() {
    shapes shapeCalc;

    int choice;
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "Enter choices (1,2,3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            shapeCalc.circleArea();
            break;
        case 2:
            shapeCalc.squareArea();
            break;
        case 3:
            shapeCalc.rectangleArea();
            break;
        default:
            cout << "Sorry, wrong choice. Select 1, 2, or 3." << endl;
    }

    return 0;
}
