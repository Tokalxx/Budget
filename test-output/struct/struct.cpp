#include <iostream>
using namespace std;

struct transaction{
    string description;
    string cat;
    int amount;
};

int main() {
    
    transaction deposit_01 = {
        "Deposit funds from job",
        "Career Income",
        10000
    };
    std::cout << "Budget Displayed: " << '\n' << "Transaction Description: " << deposit_01.description << '\n'
    << "Transaction Category: " << deposit_01.cat << '\n'
    << "Transaction Amount: " << deposit_01.amount << '\n';
    return 0;
}