#include <iostream>
#include "operations.h"

int main() {

    operations<float> calculator;

    bool active = true;
    char input;
    float x,y;
    while(active)
    {
        std::cout << "What would you like to do today: \n_______________________________________\n [A] Addition\n [S] Subtraction\n "
                     "[M] Multiplication\n [D] Division \n [Q] Square\n [E] Exit\n";
        std::cin >> input;
        switch(input){
            case 'A':
                while(std::cout << "First Number: " && !(std::cin >> x))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                while(std::cout << "Second Number: " && !(std::cin >> y))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                std::cout <<"\nResult: " << calculator.addition(x,y) << "\n-------------------\n";
                break;

            case 'S':
                while(std::cout << "First Number: " && !(std::cin >> x))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                while(std::cout << "Second Number: " && !(std::cin >> y))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                std::cout <<"\nResult: " << calculator.subtraction(x,y) << "\n-------------------\n";
                break;

            case 'M':
                while(std::cout << "First Number: " && !(std::cin >> x))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                while(std::cout << "Second Number: " && !(std::cin >> y))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                std::cout <<"\nResult: " << calculator.multiplication(x,y) << "\n-------------------\n";
                break;


            case 'D':
                while(std::cout << "First Number: " && !(std::cin >> x))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                while(std::cout << "Second Number: " && !(std::cin >> y))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                std::cout <<"\nResult: " << calculator.division(x,y) << "\n-------------------\n";
                break;

            case 'Q':
                while(std::cout << "Number to Square: " && !(std::cin >> x))
                {
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                }
                std::cout << "\nResult: " << calculator.square(x) << "\n-------------------\n";
                break;


            case 'E':
                active = false;
                break;

            default:
                std::cout << "Please Enter One of the Following Choices\n";
        }
    }


    return 0;
}
