#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    std::string message;
    bool de = false;
    bool file = false;

    int seed;
    std::cout << "Enter seed: ";
    std::cin >> seed;
    srand(seed);

    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "-d"){
            de = true;
        } else {
            file = true;
        }
    }

    if (file){
        std::ifstream inf(argv[1]);
        char c;

        if (inf.good()) {
            while (inf.get(c)) {
                char x;

                de?x = c - ((rand() % 10) + 1):x=c + ((rand() % 10) + 1);

                message.push_back(x);
            }
        } else {
            std::cerr << "Could not open file!" << std::endl << std::flush;
            return 1;
        }
    } else {
        std::string in;
        std::cout << "Enter message: ";
        std::cin.ignore(1000, '\n');
        std::getline(std::cin, in);

        for (char c: in) {
            char x;

            de?x = c - ((rand() % 10) + 1):x=c + ((rand() % 10) + 1);

            message.push_back(x);
        }
    }

    std::cout << message << std::endl << std::flush;

    return 0;
}