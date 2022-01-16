//
// Created by Martin Studňař on 14.01.2022.
//

#ifndef OPCV3_PLANE_H
#define OPCV3_PLANE_H


#include <string>

class Plane {
std::string m_type;
float m_planePrice;
float m_fuelConsumptionPerHundredKm;
int m_planeCapacity;
float m_pricePerLiter;
public:
    Plane(std::string type, float planePrice, float fuelConsumptionPerHundredKm, int planeCapacity, float pricePerLiter);
    void printInfo();
    float getFuelPricePerTravel(int numOfKm);
    void setPlanePrice(float planePrice);
private:
    float getPlanePriceAfterXYears();
    float getFuelPricePerHundredKm();
    float getFuelPricePerHundredKmPerPassenger();
};


#endif //OPCV3_PLANE_H
