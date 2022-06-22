#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex{
    public:
        int realPart;
        int imgPart;

        
        Complex(int x,int y){
            realPart = x;
            imgPart = y;
        }
};

string printComplex(int x,int y){
    return x+" "+ y+'i';
}

int main(){
    int input1,intput2;
    cout << "please,enter the real part : ";
    cin >> input1;
    cout << "please,enter the imaginary part : ";
    cin >> intput2;

    Complex complex1(input1,intput2);

    string out = "complex1.realPart++complex1.imgPart";

    cout << complex1.realPart ;
    

    return 0;
}
