#include <iostream>
#include "SmartLight.h"

SmartLight::SmartLight(std::string name)
    : SmartDevice(name) {}

void SmartLight::performAction()
{
    std::cout << deviceName << ": Adjusting Brightness\n";
}