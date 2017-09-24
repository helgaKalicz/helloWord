#include <iostream>
#include <zconf.h>

using namespace std;

static string stringToPrint = "*Hello, Word!*";


void printColoredStars() {
    cout << "\n\n";
    for (int i = 0; i < stringToPrint.size(); i++) {
        cout << "\033[40;97;1m*\033[0m";
        fflush(stdout);
        usleep(300000);
    }
    cout << "\n\n";
}


void printHelloWord() {
    for (unsigned i = 0; i < stringToPrint.size(); i++) {
        if (i < 7) {
            cout << "\033[" << (i + 31) << "m" << stringToPrint.at(i) << "\033[0m";
        }
        else {
            cout << "\033[" << (i + 83) << "m" << stringToPrint.at(i) << "\033[0m";
        }
        fflush(stdout);
        usleep(500000);
    }
}


int main(int argc, char *argv[]) {
    printColoredStars();
    printHelloWord();
    printColoredStars();
    for (int i = 1 ; i < argc; i++) {
        std::cout << "Hello, " << argv[i] << "!" << std::endl;
    }
    return 0;
}