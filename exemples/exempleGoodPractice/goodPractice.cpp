#include <iostream>
#include "goodPractice.h"

MyClass::MyClass(int initialValue) : value(initialValue) {}

int MyClass::getValue() const
{
    std::cout << value;
    return value;
}

void MyClass::setValue(int newValue)
{
    if (newValue > 0)
        value = newValue;
}