#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class Bank{
    public:
        string username, password;
        int withdrawl, debosit, money;
        Bank(int x){
            money = x;
        }
};
