#include<iostream>
using namespace std;

class Vehicle{
    public:
    //pure virtual function
    virtual void printVehicle() = 0;
};

class TwoWheeler : public Vehicle
{

public:
    void printVehicle()
    {
        cout << "I am two wheeler" <<endl;
    }
};

class FourWheeler : public Vehicle
{

public:
    void printVehicle()
    {
        cout << "I am Four wheeler" <<endl;
    }
};
// Client (or user) class
class Client
{
  private:
    Vehicle *pVehicle;

  public:
    Client(int type)
    {
        if (type == 1)
        {
            pVehicle = new TwoWheeler();
        }
        else if (type == 2)
        {
            pVehicle = new FourWheeler();
        }
        else
        {
            pVehicle = nullptr;
        }
    }

    void cleanup()
    {
        if (pVehicle != nullptr)
        {
            delete pVehicle;
            pVehicle = nullptr;
        }
    }

    Vehicle *getVehicle()
    {
        return pVehicle;
    }
};

// Driver Code
int main()
{
    Client pClient(1);
    Vehicle *pVehicle = pClient.getVehicle();
    if (pVehicle != nullptr)
    {
        pVehicle->printVehicle();
    }
    pClient.cleanup();
    return 0;
}