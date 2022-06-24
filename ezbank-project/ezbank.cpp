#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;



int main(){
    FILE *y;
    y = fopen("data", "w");
    string x = "hello";
    if(y){
        for(int i = 0; i<x.length(); i++){
            putc(x[i],y);
        }
    }
    fclose(y);

    Bank account1(100);

    return 0;
}