#pragma once

#include "Car.hpp"
#include "PetrolEngine.hpp"

class PetrolCar : virtual public Car {
public:
    PetrolCar(std::shared_ptr<PetrolEngine> engine);
    ~PetrolCar();
    void restore() override;
    void changeEngine(std::shared_ptr<PetrolEngine> engine);
    //int getPower() const override;
    void changeGear(int gear);
    int getGear() const;

//protected:
  //  PetrolEngine* engine_;

private:
    std::shared_ptr<PetrolEngine> engine_;
    void refuel();
};
