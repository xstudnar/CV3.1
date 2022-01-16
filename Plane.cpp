//
// Created by Martin Studňař on 14.01.2022.
//

#include <iostream>
#include "Plane.h"

Plane::Plane(std::string type, float planePrice, float fuelConsumptionPerHundredKm, int planeCapacity,
             float pricePerLiter) {
    m_type=type;
    m_planePrice=planePrice;
    m_planeCapacity=planeCapacity;
    m_fuelConsumptionPerHundredKm=fuelConsumptionPerHundredKm;
    m_pricePerLiter=pricePerLiter;
}

void Plane::printInfo() {
    std::cout<< "Type: " << m_type << std::endl;
    std::cout<< "Price: " << m_planePrice << " $" << std::endl;
    std::cout<< "Capacity: "  << m_planeCapacity << std::endl;
    std::cout<< "Fuel consumption per 100km: " << m_fuelConsumptionPerHundredKm << " l" << std::endl;
    std::cout<< "Fuel price per 1l: " << m_pricePerLiter << " $" << std::endl;
    std::cout<< "Fuel price per 100km: " << Plane::getFuelPricePerHundredKm() << " $" <<std::endl;
    std::cout<< "Fuel price per fly around Earth: " << Plane::getFuelPricePerTravel(40075) << " $" << std::endl;
    std::cout<< "Fuel price per person per 100km: " << Plane::getFuelPricePerHundredKmPerPassenger() << " $" << std::endl;
    std::cout<< "Plane price after 5 years: " << Plane::getPlanePriceAfterXYears() << " $" << std::endl;

}

float Plane::getFuelPricePerTravel(int numOfKm) {
    return ((m_fuelConsumptionPerHundredKm*m_pricePerLiter)/100)*numOfKm;
}

void Plane::setPlanePrice(float planePrice) {
    m_planePrice=planePrice;
}

float Plane::getFuelPricePerHundredKm() {
    return m_fuelConsumptionPerHundredKm*m_pricePerLiter;
}

float Plane::getFuelPricePerHundredKmPerPassenger() {
    return (m_fuelConsumptionPerHundredKm*m_pricePerLiter)/m_planeCapacity;
}

float Plane::getPlanePriceAfterXYears() {
    return ((((((m_planePrice*0.8)*0.95)*0.95)*0.95)*0.95)*0.95);
}
