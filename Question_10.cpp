/*QUESTION :-
              Create a class Triangle. Include overloaded functions for calculating area. Overload 
assignment operator and equality operator. 
SOLUTION :-
*/
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float a, b, c, h;

public:
	
	Triangle() {}

    Triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Triangle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }


    float area(float a, float b, float c)
    {
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    // overloaded functions
    float area(float b, float h)
    {
        return (b * h) / 2;  
    }
    
    float area(float s)
    {
        return ((sqrt(3))*s*s)/4;  
    }
    


    // equality operator.
    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c);
    }

};

int main()
{
	Triangle tri;
	float a,b,c;
	int x;
	cout << "Calculate area of a triangle " << endl;
    cout << "1:- Using base and height" << endl;
    cout << "2:- Using sides of triangle" << endl;
    cout << "3:- Equilateral Triangle" << endl;
	cin >> x;
    
    if(x == 1) 
    {
    	cout << "Enter the base and height of triangle " << endl;
    	cin >> a >> b;
    	cout << tri.area(a,b) << endl;
	}
    else if(x == 2)
    {
		cout << "Enter the sides of triangle " << endl;
    	cin >> a >> b >> c;
    	cout << tri.area(a,b,c) << endl << endl;
	} 
    else if(x == 3) 
    { 
		cout << "Enter the side of triangle " << endl;
    	cin >> a;
    	cout << tri.area(a) << endl;
	}
    else
    {
		cout << "Invalid option " << endl << endl << endl;
	}
	
	float m,n,o;
	cout << "TO CHECK EQUALITY OF TWO TRIANGLES." << endl;
    cout << "Enter the sides of first triangle: " << endl;
	cin >> m >> n >> o;
	Triangle t1(m,n,o);
	
	cout << "Enter the sides of second triangle: " << endl;
	cin >> m >> n >> o;
	Triangle t2(m,n,o);
	if (t1 == t2)
    {
        cout << "The triangles are equal." << endl;
    }
    else
    {
        cout << "The triangles are not equal." << endl;
    }

    return 0;
}