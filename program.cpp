#include <iostream>

/* 
    input 1 is ingang
    input 0 is uitgang
*/

std::string greenLed = "green led";
std::string redLed = "red led";
int aantalPersonen = 0;
int decision; 

int main() {
    std::cout << "\n" << "decision: "; std::cin >> decision;
    if (decision == 1) {
        std::cout << "\n" << "personen: " << aantalPersonen++ << std::endl;
        if (aantalPersonen <= 19 && aantalPersonen >= 0) {
            std::cout << greenLed << std::endl << "\n";
        } else {
            std::cout << redLed << std::endl << "\n";
        }
    } else if (decision == 0) {
        if (aantalPersonen < 0) {
            aantalPersonen = 0;
            std::cout << "\n" << "personen: " << aantalPersonen << std::endl << "\n";
            std::cout << greenLed << std::endl << "\n";
        } else {
            std::cout << "\n" << "personen: " << aantalPersonen-- << std::endl;
            if (aantalPersonen <= 19 && aantalPersonen >= 0) {
                std::cout << greenLed << std::endl << "\n";
            }
        }
    }
    return main();
}
