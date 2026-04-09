#ifndef SMARTLIGHT_H
#define SMARTLIGHT_H

#include "SmartDevice.h"

class SmartLight : public SmartDevice {
public:
    SmartLight(std::string name);
    void performAction();
};

#endif