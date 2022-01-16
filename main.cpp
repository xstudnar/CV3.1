#include <iostream>
#include "Plane.h"


int main() {
    Plane* plane1 = new Plane("Privet plane", 18000, 150, 300, 5);
    plane1->printInfo();
    return 0;
}
