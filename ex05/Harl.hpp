#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl;

typedef struct s_level {
	std::string	levelName;
	void		(Harl::*levelFunction)();
} t_level;

class Harl {
	private:
		t_level	messageLevels[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif // HARL_H
