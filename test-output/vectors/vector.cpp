#include <iostream>
#include <vector>
using namespace std;

struct transaction{
    string description;
    string cat;
    int amount;
};

int main() {
    vector<transaction> budget_list {
    // Income
    {"Salary", "Career Income", 25000},
    {"Freelance Web Development", "Career Income", 4500},
    {"Side Project Payment", "Career Income", 2500},

    // Housing
    {"Monthly Rent", "Housing", -8500},
    {"Electricity Bill", "Housing", -1200},
    {"Water Bill", "Housing", -450}
};
    int count = 0;
    
    for( const auto& i : budget_list){
        count++;
        std::cout << '\n' << count  << "-Budget Displayed: " << '\n' << "Transaction Description: " << i.description << '\n'
    << "Transaction Category: " << i.cat << '\n'
    << "Transaction Amount: " << i.amount << '\n';
    }
    
    return 0;
}