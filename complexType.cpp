//
// Created by samlexxy on 06/04/2020.
//

#include <iostream>
#include "complexType.h"

using namespace std;

double complexType::getRealNumber() const
{
    return realNumber;
}

double complexType::getImaginaryNumber() const
{
    return imaginaryNumber;
}

void complexType::setRealNumber(double realNum)
{
    realNumber = realNum;
}

void complexType::setImaginaryNumber(double imagNum)
{
    imaginaryNumber = imagNum;
}

complexType complexType::operator+(const complexType& otherComp) const
{
    complexType temp;

    temp.realNumber = realNumber + otherComp.realNumber;
    temp.imaginaryNumber = imaginaryNumber + otherComp.imaginaryNumber;

    return temp;
}

complexType complexType::operator*(const complexType& otherComp) const
{
    complexType temp;

    temp.realNumber = (realNumber * otherComp.realNumber) - (imaginaryNumber * otherComp.imaginaryNumber);
    temp.imaginaryNumber = (realNumber * otherComp.imaginaryNumber) + (imaginaryNumber * otherComp.realNumber);

    return temp;
}

complexType complexType::operator-(const complexType& otherComp) const
{
    complexType temp;

    temp.realNumber = realNumber - otherComp.realNumber;
    temp.imaginaryNumber = imaginaryNumber - otherComp.imaginaryNumber;

    return temp;
}

complexType complexType::operator/(const complexType& otherComp) const
{
    complexType temp;

    temp.realNumber = ((realNumber * otherComp.realNumber) + (imaginaryNumber * otherComp.imaginaryNumber)) /
                    ((otherComp.realNumber * otherComp.realNumber) + (otherComp.imaginaryNumber * otherComp.imaginaryNumber));
    temp.imaginaryNumber = ((-realNumber * otherComp.imaginaryNumber) + (imaginaryNumber * otherComp.realNumber)) /
                    ((otherComp.realNumber * otherComp.realNumber) + (otherComp.imaginaryNumber * otherComp.imaginaryNumber));

    return temp;
}

bool complexType::operator==(const complexType& otherComp) const
{
    return (realNumber == otherComp.realNumber && imaginaryNumber == otherComp.imaginaryNumber);
}

bool complexType::operator!=(const complexType& otherComp) const
{
    return (realNumber != otherComp.realNumber || imaginaryNumber != otherComp.imaginaryNumber);
}

bool complexType::operator<=(const complexType& otherComp) const
{
    return (realNumber <= otherComp.realNumber || imaginaryNumber <= otherComp.imaginaryNumber);
}

bool complexType::operator<(const complexType& otherComp) const
{
    return (realNumber < otherComp.realNumber || imaginaryNumber < otherComp.imaginaryNumber);
}

bool complexType::operator>=(const complexType& otherComp) const
{
    return (realNumber >= otherComp.realNumber || imaginaryNumber >= otherComp.imaginaryNumber);
}

bool complexType::operator>(const complexType& otherComp) const
{
    return (realNumber > otherComp.realNumber || imaginaryNumber > otherComp.imaginaryNumber);
}

ostream& operator<<(ostream& outp, const complexType& otherComp)
{
    outp<<"(";
    outp<<otherComp.realNumber;
    outp<<", ";
    outp<<otherComp.imaginaryNumber;
    outp<<")";

    return outp;
}

istream& operator>>(istream& inp, complexType& otherComp)
{
    char discard;

    inp.get(discard);
    inp>>otherComp.realNumber;
    inp.get(discard);
    inp>>otherComp.imaginaryNumber;
    inp.get(discard);

    return inp;
}

complexType complexType::operator++()
{
    realNumber++;
    imaginaryNumber++;

    return *this;
}

complexType complexType::operator++(int u)
{
    complexType temp = *this;

    realNumber++;
    imaginaryNumber++;

    return temp;
}

complexType complexType::operator--()
{
    realNumber--;
    imaginaryNumber--;

    return *this;
}

complexType complexType::operator--(int u)
{
    complexType temp = *this;

    realNumber--;
    imaginaryNumber--;

    return temp;
}

const complexType& complexType::operator=(const complexType& otherComp)
{

    if (this != &otherComp)
    {
        realNumber = otherComp.realNumber;
        imaginaryNumber = otherComp.imaginaryNumber;
    }

    return *this;
}

complexType::complexType(double realNum, double imaginaryNum)
{
    realNumber = realNum;
    imaginaryNumber = imaginaryNum;
}

complexType::complexType(const complexType& otherComp)
{
    realNumber = otherComp.realNumber;
    imaginaryNumber = otherComp.imaginaryNumber;
}
