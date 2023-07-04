#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    int getReal()
    {
        return real;
    }
    int getImaginary()
    {
        return imag;
    }
    Complex operator+(Complex c2)
    {
        Complex c3(0, 0);
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }
    Complex operator-(Complex c2)
    {
        Complex c3(0, 0);
        c3.real = real - c2.real;
        c3.imag = imag - c2.imag;
        return c3;
    }
    Complex operator*(Complex c2)
    {
        Complex c3(0, 0);
        c3.real = (c2.real) - (c2.imag);
        c3.imag = (c2.real) + (c2.imag);
        return c3;
    }
    Complex operator/(Complex c2)
    {
        Complex c3(0, 0);
        c3.real = ((c2.real) + ( c2.imag)) / ((c2.real *c2.real) + (c2.imag* c2.imag));
        c3.imag = ((c2.real) - ( c2.imag)) / ((c2.real* c2.real) + (c2.imag *c2.imag));
        return c3;
    }
    bool operator==(Complex c2)
    {
        return real == c2.real && imag == c2.imag ? true : false;
    }
    friend istream &operator>>(istream &input, Complex &c);
    friend ostream &operator<<(ostream &output, Complex &c);
};
istream &operator>>(istream &input, Complex &c)
{
    cout << "Enter a and b for complex number a+bi : ";
    input >> c.real >> c.imag;
    return input; // return c.a >> c.b;
}
ostream &operator<<(ostream &output, Complex &c)
{
    output << c.real;
    if (c.imag < 0)
        cout << c.imag << "i";
    else
        cout << "+" << c.imag << "i";
    return output;
       //1return "a: " << c.a << "b: " << c.b;
}
// This method check if a complex number is a root of the Quadratic equation
int isRoot(Complex comp, int a, int b, int c)
{
    // // A complex number c is a root of ax^2 + bx + c iff // b = -1 2 c.real c.real and D = -1 (2 c.imag) (2 * c.imag)
    // int real = comp.getReal();
    // int imag = comp.getImaginary();
    // if (b != -1 2 real * real)
    //     return -1;
    // int D = b * b - 4 * a * c;
    // if (D != -1(2 imag)(2 imag))
    //     return -1;

    return 0;
}
int main()
{
    while (1)
    {
        cout << "\nSelect an option - " << endl;
        cout << "(1) Perform complex number arithmetic\n"
             << "(2) Check for quadratic equation solution\n"
             << "(3) exit\n";
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            Complex x(0, 0), y(0, 0), res(0, 0);
            // input the first complex number
            cin >> x;
            char op;
            cout << "Enter an operation (+, -, *, /) : ";
            cin >> op;
            // input the second complex number
            cin >> y;
            switch (op)
            {
            case '+':
                res = x + y;
                break;
            case '-':
                res = x - y;
                break;
            case '*':
                res = x * y;
                break;
            case '/':
                res = x / y;
                break;
            default:
                cout << "Invalid operation...." << endl;
            }
            cout << x << " " << op << " " << y << " = " << res << endl;
        }
        else if (opt == 2)
        {
            Complex x(0, 0);
            int a, b, c;
            cout << "Enter the coefficients of a quadratic equation : ";
            cin >> a >> b >> c;
            // input the complex number cin >> x;
            if (isRoot(x, a, b, c) == -1)
            {
                cout << "The complex number: " << x << " is not a solution of the quadratic equation." << endl;
            }
            else
            {
                cout << "The complex number: " << x << " is a solution of the quadratic equation." << endl;
            }
        }
        else if (opt == 3)
        {
            cout << "Exiting ...";
            return 0;
        }
    }
}
