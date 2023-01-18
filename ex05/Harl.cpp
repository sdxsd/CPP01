#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I enjoy verily the taste of succulent cucumber." << std::endl;
}

void Harl::info(void) {
	std::cout << "Have you soiled my cucumber with the foul interference of your touch?" << std::endl;
}

void Harl::warning(void) {
	std::cout << "How dare thee! Prepare to duel me ye scallywag!" << std::endl;
}

void Harl::error(void) {
	std::cout << "* dies *" << std::endl;
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
			(this->*messageLevels[i].levelFunction)();
}
