#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[DEBUG] " << "I enjoy verily the taste of succulent cucumber." << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO] " << "Have you soiled my cucumber with the foul interference of your touch?" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING] " << "How dare thee! Prepare to duel me ye scallywag!" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR] " << "* dies *" << std::endl;
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

Harl::~Harl(void) {
	;
}

void Harl::complain(std::string level) {
	for (unsigned long i = 0; i <= 3; i++)
		if (messageLevels[i].levelName == level)
			(this->*messageLevels[i].levelFunction)();
}
