#ifndef SMARTTHERMOSTAT_H
#define SMARTTHERMOSTAT_H

#include "SmartDevice.h"

class SmartThermostat : public SmartDevice {
public:
    SmartThermostat(std::string name);
    void performAction();
};

#endif