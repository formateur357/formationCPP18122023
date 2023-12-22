#include "device.h"

int main()
{
    SmartPhone myPhone;

    Camera *cam = dynamic_cast<Camera *>(&myPhone);
    if (cam)
        cam->displayInfo();

    Speaker *spk = dynamic_cast<Speaker *>(&myPhone);
    if (spk)
        spk->displayInfo();

    // Appeler displayInfo sur myPhone
    myPhone.displayInfo();

    AdvancedSmartPhone myAdvancedPhone;

    // Polymorphisme avec MultimediaDevice* et appels de displayInfo()
    MultimediaDevice *device = dynamic_cast<MultimediaDevice *>(&myAdvancedPhone);
    device->displayInfo();

    // Testez activateFeature() avec différents paramètres
    myAdvancedPhone.activateFeature("GPS");
    myAdvancedPhone.activateFeature("Music");
    myAdvancedPhone.activateFeature("Camera");
}