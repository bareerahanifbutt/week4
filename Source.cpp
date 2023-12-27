#include <iostream>
#include <cmath>

class Hexagon {
private:
    double side_length;

public:
    Hexagon(double side) : side_length(side) {}

    double calcArea() {
        return 1.5 * 1.732 * side_length;
    }

    double calcPeri() {
        return 6 * side_length;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        std::cout << "Hexagon:" << std::endl;
        std::cout << "Area: " << calcArea() << std::endl;
        std::cout << "Perimeter: " << calcPeri() << std::endl;
        std::cout << "Sum of Angles: " << calcAngleSum() << std::endl;
    }
};

class Square {
private:
    double side_length;

public:
    Square(double side) : side_length(side) {}

    double calcAreaSquare() {
        return pow(side_length, 2);
    }

    double calcPeriSquare() {
        return 4 * side_length;
    }

    void display() {
        std::cout << "\nSquare:" << std::endl;
        std::cout << "Area: " << calcAreaSquare() << std::endl;
        std::cout << "Perimeter: " << calcPeriSquare() << std::endl;
    }
};

int main() {
    std::string cnic = "XY210351532"; // Replace this with your CNIC number
    int last_digit = cnic[cnic.length() - 1] - '0';

    double hexagon_side_length = last_digit;
    double square_side_length = last_digit + 1;

    Hexagon hexagon(hexagon_side_length);
    Square square(square_side_length);

    char choice;

    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Hexagon" << std::endl;
        std::cout << "2. Square" << std::endl;
        std::cout << "Any other key to exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            hexagon.display();
            break;
        case '2':
            square.display();
            break;
        default:
            return 0;
        }
    } while (true);

    return 0;
}
