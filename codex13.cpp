#include <iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    

    return 7 - today;
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    cout << "Number of Days remaining in the week is: " << daysRemaining <<endl;
    return 0;
}