//using inheriantnce

#include <iostream>

class Number {
public:
    virtual double getAverage() = 0;
};

class FiveNumberAverage : public Number {
private:
    double numbers[5];

public:
    FiveNumberAverage(double num1, double num2, double num3, double num4, double num5) {
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
};

int main() {
    FiveNumberAverage number(1.0, 2.0, 3.0, 4.0, 5.0);
    double average = number.getAverage();
    std::cout << "The average of the numbers is: " << average << std::endl;

    return 0;
}




#include <iostream>
using namespace std;
class FiveNumberAverage   {
private:
    double numbers[5];

public:
    FiveNumberAverage(double num1, double num2, double num3, double num4, double num5) {
        numbers[0] =num1;
        numbers[1] = num2;
        numbers[2] = num3;
        numbers[3] = num4;
        numbers[4] = num5;
    }
  friend void tryF();
    double getAverage() {
        double sum = 0.0;
        for (int i = 0; i < 5; i++) {
            sum += numbers[i];
        }
        return sum / 5.0;
    }
};

void tryF()
{
 FiveNumberAverage obj(10.0,20.0,30.0,40.0,50.0);
    for (int i = 0; i < 5; i++) {
        cout << obj.numbers[i] << " ";
    }
}

int main() {
    FiveNumberAverage number(1.0, 2.0, 3.0, 4.0, 5.0);
    double average = number.getAverage();
    cout << "The average of the numbers is: " << average << std::endl;
 
 tryF();
    return 0;
}
