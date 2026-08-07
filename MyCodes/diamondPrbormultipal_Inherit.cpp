#include <iostream>
using namespace std;

class Device
{
public:
    int deviceId;
    Device(int id) : deviceId(id)
    {
        std::cout << "Device constructor called for Id: " << id << std::endl;
    }
    void powerOn()
    {
        std::cout << "Device " << deviceId << " is powered on." << std::endl;
    }
};

class Phone : virtual public Device
{
public:
    Phone(int id) : Device(id)
    {
        std::cout << "Phone constructor." << std::endl;
    }
    void makeCall()
    {
        cout << "Making a call from device. " << deviceId << std::endl;
    }
};

class Camara : virtual public Device
{
public:
    Camara(int id) : Device(id)
    {
        std::cout << "Camara constructor." << std::endl;
    }
    void takePhoto()
    {
        cout << "Taking a photo from device. " << deviceId << std::endl;
    }
};
class SmartPhone : public Phone, public Camara
{
public:
    SmartPhone(int id) : Device(id), Phone(id), Camara(id)
    {
        std::cout << "SmartPhone constructor." << std::endl;
    }
};

int main()
{
    SmartPhone myPhone(123);

    // These work perfectly now!++
    myPhone.powerOn();
    myPhone.makeCall();
    myPhone.takePhoto();

    return 0;
}