//using exception handling
#include <iostream>
class Number {
public:
    virtual double getAverage() = 0;
};

class InvalidInputException : public std::exception {
public:
    InvalidInputException(const std::string& message) : message(message) {}

    const std::string& getMessage() const {
        return message;
    }

private:
    std::string message;
};

class FiveNumberAverage : public Number {
private:
    double numbers[5];

public:
    FiveNumberAverage(double num1, double num2, double num3, double num4, double num5) {
        try {
            validateInput(num1, num2, num3, num4, num5);
        } catch (InvalidInputException& e) {
            throw e;
        }

        numbers[0] = num1;
        numbers[1] = num2;
        numbers[2] = num3;
        numbers[3] = num4;
        numbers[4] = num5;
    }

    double getAverage() override {
        double sum = 0.0;
        for (int i = 0; i < 5; i++) {
            sum += numbers[i];
        }
        return sum / 5.0;
    }

private:
    void validateInput(double num1, double num2, double num3, double num4, double num5) {
        if (std::isnan(num1) || std::isnan(num2) || std::isnan(num3) || std::isnan(num4) || std::isnan(num5)) {
            throw InvalidInputException("Invalid input: Input cannot be NaN.");
        }
    }
};

int main() {
    try {
        FiveNumberAverage number(1.0, 2.0, 3.0, std::numeric_limits<double>::infinity(), 5.0);
        double average = number.getAverage();
        std::cout << "The average of the numbers is: " << average << std::endl;
    } catch (InvalidInputException& e) {
        std::cerr << "Error: " << e.getMessage() << std::endl;
    }

    return 0;
}
