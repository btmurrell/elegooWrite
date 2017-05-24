#include <ElegooCar.h>
ElegooCar car;

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  // put your main code here, to run repeatedly:
  car.forward(100, 300);

  car.fwdLeft(160, 1300);

  car.forward(100, 1500);

  car.fwdLeft(160, 1500);

}
