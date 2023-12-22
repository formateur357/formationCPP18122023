#pragma once

#include <iostream>
#include <string>

using namespace std;

class MultimediaDevice
{
public:
    virtual void displayInfo();
};

class Camera : virtual public MultimediaDevice
{
public:
    void displayInfo() override;
};

class Speaker : virtual public MultimediaDevice
{
public:
    void displayInfo() override;
};

class SmartPhone : public Camera, public Speaker
{
public:
    void displayInfo() override;
};

class GPS : virtual public MultimediaDevice
{
public:
    void displayInfo() override;
};

class MusicPlayer : virtual public MultimediaDevice
{
public:
    void displayInfo() override;
};

class AdvancedSmartPhone : public SmartPhone, public GPS, public MusicPlayer
{
public:
    void displayInfo() override;
    void activateFeature(const string &feature);
};