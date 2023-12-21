#pragma once

#include <iostream>

class MyClass
{
public:
    MyClass(int initialValue) : value(initialValue) {}
    ~MyClass() {}

    int getValue() const { return value; }
    void setValue(int newValue) { value = newValue; }

    void myMethod() { std::cout << "une methode"; }

private:
    int value;
};