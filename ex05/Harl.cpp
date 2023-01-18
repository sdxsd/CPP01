#include "Harl.hpp"

void Harl::debug(void) {

}

void Harl::info(void) {

}

void Harl::warning(void) {

}

void Harl::error(void) {

}

Harl::Harl(void) {
	messageLevels[0].levelName = "debug";
	messageLevels[0].levelFunction = &Harl::debug;
	messageLevels[1].levelName = "info";
	messageLevels[1].levelFunction = &Harl::info;
	messageLevels[2].levelName = "warning";
	messageLevels[2].levelFunction = &Harl::warning;
	messageLevels[3].levelName = "error";
	messageLevels[3].levelFunction = &Harl::error;
}

void Harl::complain(std::string level) {
	for (int i = 0; i < sizeof(messageLevels); i++)
		if (messageLevels[i].levelName == level)
			messageLevels[i].levelFunction();
}
