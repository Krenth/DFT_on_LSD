//
// Created by brian on 11/20/18.
//

#include "complex.h"

#include <cmath>


Complex::Complex() : real(0.0f), imag(0.0f) {}

Complex::Complex(float r) : real(r), imag(0.0f) {}

Complex::Complex(float r, float i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex &b) const {
  return Complex(this->real + b.real, this->imag + b.imag);
}

Complex Complex::operator-(const Complex &b) const {
  return Complex(this->real - b.real, this->imag - b.imag);
}

Complex Complex::operator*(const Complex &b) const {
  return Complex(this->real * b.real - this->imag * b.imag,
                 this->real * b.imag + this->imag * b.real);
}

Complex Complex::mag() const {

}

Complex Complex::angle() const {

}

Complex Complex::conj() const {
  return Complex(this->real, -1 * this->imag);
}

std::ostream& operator<< (std::ostream& os, const Complex& rhs) {
    Complex c(rhs);
    if(fabsf(rhs.imag) < 1e-10) c.imag = 0.0f;
    if(fabsf(rhs.real) < 1e-10) c.real = 0.0f;

    if(c.imag == 0) {
        os << c.real;
    }
    else {
        os << "(" << c.real << "," << c.imag << ")";
    }
    return os;
}
