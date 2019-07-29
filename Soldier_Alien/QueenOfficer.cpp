
#include <string>
#include "QueenOfficer.h"

void QueenOfficer::setControlDrones(bool controlDronesIn) {
	controlDrones = controlDronesIn;
}

bool QueenOfficer::getControlDrones() {
	return controlDrones;
}

void QueenOfficer::orderDrones() {
	if (controlDrones) {
		cout << "The Queen Officer is now controlling her Drones!" << endl;
	}
	else {
		cout << "The Queen Officer has lost control of her Drones!!" << endl;
	}
}