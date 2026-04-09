#include <iostream>
#include <cctype>
#include "SmartLight.h"
#include "SmartThermostat.h"

using namespace std;

SmartDevice* devices[5] = {nullptr};
int countDevices = 0;

void createAll()
{
    char choice;

    while (countDevices < 5)
    {
        cout << "\nChoose device type\n";
        cout << "L - Light\n";
        cout << "T - Thermostat\n";
        cout << "X - Finish\n";
        cout << "Choice: ";

        cin >> choice;
      

        if(choice == 'x')
        {
            if(countDevices == 0)
            {
                cout << "Create at least one device\n";
                continue;
            }
            break;
        }

        string name;

        if(choice == 'l')
        {
            cout << "Enter device name: ";
            cin >> name;
            devices[countDevices++] = new SmartLight(name);
        }

        else if(choice == 't')
        {
            cout << "Enter device name: ";
            cin >> name;
            devices[countDevices++] = new SmartThermostat(name);
        }

        else
        {
            cout << "Invalid choice\n";
        }
    }
}

void activateAll()
{
    cout << "\nActivating Devices\n";

    for(int i=0;i<countDevices;i++)
        devices[i]->performAction();
}

int main()
{
    createAll();
    activateAll();

    for(int i=0;i<countDevices;i++)
        delete devices[i];

    return 0;
}