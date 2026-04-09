#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>

class SmartDevice {
protected:
    std::string deviceName;

public:
    SmartDevice(std::string name);
    virtual ~SmartDevice();
    virtual void performAction() = 0;
};

#endif