//Function overload
#include <iostream>
using namespace std;
//same function name
double average(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5.0;
}
double average(double a, double b, double c, double d, double e) {
    return (a + b + c + d + e) / 5.0;
}

int main()
{
    int intAvg = average(1, 2, 3, 4, 5);
    double doubleAvg = average(1.5, 2.5, 3.5, 4.5, 5.5);

    cout << "Average of 5 integers: " << intAvg <<endl;
    cout << "Average of 5 doubles: " << doubleAvg << endl;

    return 0;
}
