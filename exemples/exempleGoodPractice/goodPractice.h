#pragma once

class MyClass
{
public:
    MyClass(int value);
    void myMethod();
    int getValue() const;        // Getter
    void setValue(int newValue); // Setter

private:
    int value;
};