#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Complex numbers class generator
class Complex{                                               
    public:
        // Specifc vars. for each object will be created
        int realPart;                                      
        int imgPart;                                                                    
        // Constructors for initailzing the vars. of the object
        Complex(){                              
            realPart = 0;
            imgPart = 0;
        }
        Complex(int x){                              
            realPart = x;
            imgPart = 0;
        }
        Complex(int x,int y){                              
            realPart = x;
            imgPart = y;
        }
        // "Getters"
        int getReal(){                        
            return realPart;
        }
        int getImgOf(){
            return imgPart;
        }
        // "Setters"
        void setReal(int x){                   
            realPart = x;
        }
        void setImg(int x){
            imgPart = x;
        }
        // Displaying 
        void display(){                         
            cout << to_string(realPart)+" + " + to_string(imgPart)+"i " <<endl;
        }

};
int main(){

    // User_input_prompt  [Disabled Temporary!]
    /*
    int input1,intput2;                                   
    cout << "Enter the realPart: ";
    cin >> input1;
    cout << "Enter the imaginaryPart: ";
    cin >> intput2;
    */

    // Creating new instance and sending values to the object instance attribute
    Complex Mycomplex1(5,3);
    Complex Mycomplex2(0,0);
    Complex Mycomplex3(73);
    Complex Mycomplex4(10,5);

    // ____________________TESTING____________________

    Mycomplex1.display();
    Mycomplex2.display();
    Mycomplex3.display();
    Mycomplex4.display();
    
    //cout << Mycomplex1.getImgOf()<<endl;

    Mycomplex4.setReal(22);
    Mycomplex4.setImg(7);

    Mycomplex4.display();
    
    return 0;
}
