#include <iostream>
#include <cmath>

using namespace std;

class Complex
{
public:
    // Default constructor initializes to 0+0i
    Complex() : real(0), imag(0) {}

    // Constructor with real and imaginary parts
    Complex(double r, double i) : real(r), imag(i) {}

    // Addition of complex numbers
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Subtraction of complex numbers
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    // Multiplication of complex numbers
    Complex operator*(const Complex &other) const
    {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Division of complex numbers
    Complex operator/(const Complex &other) const
    {
        double denom = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denom,
                       (imag * other.real - real * other.imag) / denom);
    }

    // User input of a complex number
    void read()
    {
        cin >> real >> imag;
        char i;
        cin >> i;
    }

    // Display of a complex number
    void display() const
    {
        cout << real << " + " << imag << "i";
    }

    // Conversion of a real number to a complex number
    static Complex fromReal(double r)
    {
        return Complex(r, 0);
    }

    // Check for equality of two complex numbers
    bool operator==(const Complex &other) const
    {
        const double epsilon = 0.000001;
        return (fabs(real - other.real) < epsilon && fabs(imag - other.imag) < epsilon);
    }

private:
    double real;
    double imag;
};

// Function to check if a complex number is a solution of a quadratic equation
bool isSolutionOfQuadraticEquation(const Complex &z, double a, double b, double c)
{
    Complex discriminant = Complex::fromReal(b * b - 4 * a * c);
    Complex root1 = (-Complex::fromReal(b) + sqrt(discriminant)) / Complex::fromReal(2 * a);
    Complex root2 = (-Complex::fromReal(b) - sqrt(discriminant)) / Complex::fromReal(2 * a);
    return (z == root1 || z == root2);
}

// Main function
int main()
{
    int choice;
    do
    {
        cout << "Select an option:\n";
        cout << "(1) perform complex number arithmetic\n";
        cout << "(2) check for quadratic equation solution\n";
        cout << "(3) exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Complex a, b;
            char op;
            cout << "Enter a complex number a+bi: ";
            a.read();
            cout << "Enter an operation (+,-,*,/): ";
            cin >> op;
            cout << "Enter a complex number a+bi: ";
            b.read();

            Complex result;
            switch (op)
            {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                result = a / b;
                break;
            default:
                cout << "Invalid operation\n";
            }
            case 2:
            {
                Complex x(0, 0);
                int a, b, c;
                cout << "Enter the coefficients of a quadratic equation : ";
                cin >> a >> b >> c;
                // input the complex number cin >> x;
                if (isSolutionOfQuadraticEquation(x, a, b, c) == -1)
                {
                    cout << "The complex number: " << x << " is not a solution of the quadratic equation." << endl;
                }
                else
                {
                    cout << "The complex number: " << x << " is a solution of the quadratic equation." << endl;
                }
            }
            case 3:
            {
                cout << "Exiting ...";
                return 0;
            }
        }