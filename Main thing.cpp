#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//just testing things out lol
class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};
class Ballin : public Triangle{
    public:
        void description(){
            cout<<"In an isosceles triangle two sides are equal\n";
        }  
};

class Isosceles : public Ballin{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
          //Write your code here.
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
