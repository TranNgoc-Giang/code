#include <iostream>
#include <iomanip>

int main() {
    int numberOfDays;

    // Get the number of days from the user
    while (true) {
        std::cout << "Enter the number of days worked: ";
        std::cin >> numberOfDays;

        if (numberOfDays < 1) {
            std::cout << "Please enter a number greater than or equal to 1." << std::endl;
        }
        else {
            break;
        }
    }

    // Display the table header
    std::cout << "Day\tSalary" << std::endl;
    std::cout << "------------------------" << std::endl;

    // Calculate the salary for each day and accumulate the total pay
    double totalPay = 0.0;
    double salary = 0.01;

    for (int day = 1; day <= numberOfDays; day++) {
        totalPay += salary;
        std::cout << day << "\t$" << std::fixed << std::setprecision(2) << salary << std::endl;
        salary *= 2;
    }

    // Display the total pay
    std::cout << "------------------------" << std::endl;
    std::cout << "Total pay: $" << std::fixed << std::setprecision(2) << totalPay << std::endl;

    return 0;
}