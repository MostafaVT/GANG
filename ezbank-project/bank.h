#ifndef BANK_H
#define BANK_H
class Bank{
    public:
        string username,password;
        int withdrawl, debosit, money;
        Bank(int x){
            money = x;
        }
};
#endif