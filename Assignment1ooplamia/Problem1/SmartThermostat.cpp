#include <iostream>
#include "SmartThermostat.h"

SmartThermostat::SmartThermostat(std::string name)
    : SmartDevice(name) {}

void SmartThermostat::performAction()
{
    std::cout << deviceName << ": Setting Temperature\n";
}