#include<iostream>
using namespace std;
int main(){
//question 1
int a,b;
cout<<"enter first number";
cin>>a;
cout<<"enter second number";
cin>>b;
if(a>b) cout<<"a is greater than b";
else cout<<"b is greater than a";



//question 2

int r;
cout<<"enter radius of circle";
cin>>r;
int area=3.14*r*r;
int circum=2*3.14*r;
if(area>circum) cout<<"area is greater than the circumference";
else cout<<"cirumference is greater than the area";
}

//question 3
int a;
cout<<"enter year for check leap year";
cin>>a;
if(a%4==0) cout<<"year is leap year";
else cout<<"year is not a leap year";

//question 4
int len,bre;
cout<<"enter length";
cin>>len;
cout<<"enter breadth";
cin>>bre;
int area=len*bre;
int perimeter=2*(len+bre);
if(area>perimeter) cout<<"numerically area is greater than perimeter";
else cout<<"numerically perimeter is greater than area";

//question 5
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle ";
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            cout << "It is an equilateral triangle." << endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It is an isosceles triangle." << endl;
    }
        else {
            cout << "It is a scalene triangle." << endl;
        }
    }
    else {
        cout << "Invalid triangle! The sum of the lengths of any two sides must be greater than the length of the third side." << endl;
    }

//question 6
	int a,b,c;
	cout<<"enter the a b and c marks";
	cin>>a>>b>>c;
	if(a>b&&a>c)cout<<"a is having greatest marks";
	else if(b>a&&b>c) cout<<"b is having greatest marks";
	else if (c>a&&c>b) cout<<"c is having greatest marks";
    else if(a==b&&a==c&&b==c) cout<<"all student having same marks";

//question 7
    double x, y;
    cout << "Enter the coordinates of the point (x, y): ";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin (0, 0)." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point does not lie on the x-axis, y-axis, or at the origin." << endl;
    }

//question 8
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;
    double slope1 = (y2 - y1) / (x2 - x1);
    double slope2 = (y3 - y2) / (x3 - x2);
    if (slope1 == slope2) {
        cout << "The three points lie on the same straight line." << endl;
    } else {
        cout << "The three points do not lie on the same straight line." << endl;
        
//question 9
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "The entered character is an alphabet." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The entered character is a digit." << endl;
    } else {
        cout << "The entered character is a special character." << endl;
    }

//question 10
int main() { 
int a = 500, b, c ; 
if ( a >= 400 ) 
b = 300 ; 
c = 200 ; 
cout << "value of b and c are respectively “ <<b<<” and ” << c  ; 

//question11
the ouput of following code is => 300 200

