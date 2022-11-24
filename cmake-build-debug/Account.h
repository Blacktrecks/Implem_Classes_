//
// Created by petri on 11/24/2022.
//

#ifndef INC_07_IMPLEMENTING_METHODS_ACCOUNT_H
#define INC_07_IMPLEMENTING_METHODS_ACCOUNT_H
#include <string>

class Account {
private:
    //attribbutes
    std::string name;
    double balance;

public:
    //methods
    //declared inline
    void set_balance(double bal){balance = bal; }
    double get_balance(){return balance; }

    //methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};


#endif //INC_07_IMPLEMENTING_METHODS_ACCOUNT_H
