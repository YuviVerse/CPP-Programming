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
      cout << "I went by CAR";
    }
  };

  class Bus
  {
    void GoBy()
    {
      cout << "I went by BUS";
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
      cout << "I sailed by the BOAT";
    }
  };
}