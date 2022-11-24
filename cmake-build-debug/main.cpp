//13 implementing Methods

#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account franky_account;
    franky_account.set_name("Frank Lor Account");
    franky_account.set_balance(100);

    if(franky_account.deposit(200))
        cout << "Deposit OKay!"  <<  endl;
    else
        cout << "Deposit Failed!" << endl;
    if(franky_account.withdraw(600.0))
        cout << "Withdraw ok in the parameters" << endl;
    else
        cout << "Fatal Error in withdraw" << endl;
    if(franky_account.withdraw(1500.0))
        cout << "Operation Not Allowed Insuficient Fonds!/n" << endl;
    else
        cout << "Break the Operation\n" << endl;
    cout << "----Frank Acc----" << endl;
    return 0;
}