//
// Created by samlexxy on 06/04/2020.
//

#ifndef PROJECT6_COMPLEXTYPE_H
#define PROJECT6_COMPLEXTYPE_H

#include <iostream>

using namespace std;

class complexType //CLASS TO INPUT AND PRINT A COMPLEX NUMBER IN IT ORIGINAL FORMAT
{
    friend ostream& operator<<(ostream& ,const complexType&); // overloaded stream extraction / output  operator
    friend istream& operator>>(istream& , complexType&); // overloaded stream insertion / input operator

public:
    double getRealNumber() const; // function that returns the Real Number
    double getImaginaryNumber() const; // function that returns the Imaginary Number
    void setRealNumber(double realNum); // function that accepts and stores the Real Number
    void setImaginaryNumber(double imagNum); // function that accepts and stores the Imaginary Number


    complexType operator+(const complexType&) const; // overloaded addition operator
    complexType operator*(const complexType&) const; // overloaded multiplication operator
    complexType operator-(const complexType&) const; // overloaded subtraction operator
    complexType operator/(const complexType&) const; // overloaded division operator

    bool operator==(const complexType&) const; // overloaded equalTo operator
    bool operator!=(const complexType&) const; // overloaded not equalTo operator
    bool operator<=(const complexType&) const; // overloaded less than or equalTo operator
    bool operator<(const complexType&) const; // overloaded less than operator
    bool operator>=(const complexType&) const; // overloaded greater than or equalTo operator
    bool operator>(const complexType&) const; // overloaded greater than operator

    complexType operator++(); // overloaded pre-increment operator
    complexType operator++(int); // overloaded post-increment operator
    complexType operator--(); // overloaded pre-decrement operator
    complexType operator--(int); // overloaded post-decrement operator

    const complexType& operator=(const complexType&); // overloaded assignment operator

    complexType(double realNum = 1, double imaginaryNum = 1); // the default constructor with a parameters
    complexType(const complexType&); // the copy constructor

private:
    double realNumber; // variable that stores the Real Number
    double imaginaryNumber; // variable that stores the Imaginary Number
};


#endif //PROJECT6_COMPLEXTYPE_H
