#include <iostream>
#include <Windows.h>

class Fraction {
private:
    int numerator_;
    int denominator_;

    void reduce() {
        int gcd = computeGCD(numerator_, denominator_);
        numerator_ /= gcd;
        denominator_ /= gcd;
    }

    int computeGCD(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction(int numerator = 0, int denominator = 1)
        : numerator_(numerator), denominator_(denominator) {
        if (denominator_ == 0) {
            throw std::invalid_argument("Не может быть 0!");
        }
        reduce();
    }

    Fraction operator+(const Fraction& other) const {
        return Fraction(
            numerator_ * other.denominator_ + other.numerator_ * denominator_,
            denominator_ * other.denominator_
        );
    }

    Fraction operator-(const Fraction& other) const {
        return Fraction(
            numerator_ * other.denominator_ - other.numerator_ * denominator_,
            denominator_ * other.denominator_
        );
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(
            numerator_ * other.numerator_,
            denominator_ * other.denominator_
        );
    }

   Fraction operator/(const Fraction& other) const {
        return Fraction(
            numerator_ * other.denominator_,
            denominator_ * other.numerator_
        );
    }

    Fraction operator-() const {
        return Fraction(-numerator_, denominator_);
    }

    Fraction& operator++() {
        numerator_ += denominator_;
        reduce();
        return *this;
    }

    Fraction operator++(int) {
        Fraction temp = *this;
        ++(*this);
        return temp;
    }

    Fraction& operator--() {
        numerator_ -= denominator_;
        reduce();
        return *this;
    }

   Fraction operator--(int) {
        Fraction temp = *this;
        --(*this);
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        os << frac.numerator_ << '/' << frac.denominator_;
        return os;
    }
};

int main() {
    int num1, den1, num2, den2;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num1;
    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> den1;
    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num2;
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << '\n';
    std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << '\n';
    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << '\n';
    std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << '\n';

    std::cout << "++" << f1 << " * " << f2 << " = " << (++f1 * f2) << '\n';
    std::cout << "Значение дроби 1 = " << f1 << '\n';

    std::cout << f1 << "-- * " << f2 << " = " << (f1-- * f2) << '\n';
    std::cout << "Значение дроби 1 = " << f1 << '\n';

    return 0;
}
