#include "CRectangle.h"

int main() {
    CRectangle rectangle;
    int choice = 0;

    do {
        std::cout << "------------------------------------\n";
        std::cout << "Enter the value to select" << '\n';
        std::cout << "1 - input sides: \n";
        std::cout << "2 - output all informations\n";
        std::cout << "3 - if you want to increase the value of all sides\n";
        std::cout << "4 - if you want rotate sides\n";
        std::cout << "5 - if you want to erase previous data\n";
        std::cout << "0 - exit\n";
        std::cout << "------------------------------------\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            rectangle.console_input();
            break;
        case 2:
            rectangle.console_output();
            break;
        case 3:
            rectangle.increaseSize();
            break;
        case 4:
            rectangle.rotateRectangle();
            break;
        case 5:
            rectangle = CRectangle();  
            std::cout << "The operation is successful\n";
            break;
        default:
            std::cout << "Incorrect value entered, try again\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
