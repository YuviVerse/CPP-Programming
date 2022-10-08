#include <iostream>

using namespace std;

namespace PublicTransportByLand
{
  void TransportOptions()
  {
    cout << "You can drive a Car or a Bus";
  }

  class Car
  {
    void GoBy()
    {
      cout << "I drove a CAR";
    }
  };

  class Bus
  {
    void GoBy()
    {
      cout << "I drove a BUS";
    }
  };
}

namespace PublicTransportBySea
{
  void TransportOptions()
  {
    cout << "You can sail by Boat";
  }
  class Boat
  {
    void GoBy()
    {
      cout << "I sailed on a BOAT";
    }
  };
}