#include "device.h"

void MultimediaDevice::displayInfo()
{
    cout << "Multimedia device \n";
}

void Camera::displayInfo()
{
    cout << "Camera device\n";
}

void Speaker::displayInfo()
{
    cout << "Speaker device\n";
}

void SmartPhone::displayInfo()
{
    // resolvez l'ambiguite et appelez displayInfo de Camera et de Speaker
    Camera::displayInfo();
    Speaker::displayInfo();

    cout << "SmartPhone device\n";
}

void GPS::displayInfo()
{
    cout << "GPS functionnality\n";
}

void MusicPlayer::displayInfo()
{
    cout << "MusicPlayer functionnality\n";
}

void AdvancedSmartPhone::displayInfo()
{
    SmartPhone::displayInfo();
    GPS::displayInfo();
    MusicPlayer::displayInfo();
    cout << "Advanced Smartphone device\n";
}

void AdvancedSmartPhone::activateFeature(const string &feature)
{
    if (feature == "GPS")
        cout << "GPS Activated\n";
    else if (feature == "Music")
        cout << "Music Activated\n";
    else
        cout << "Feature not recognized\n";
}
