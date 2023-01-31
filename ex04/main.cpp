#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
	std::string			fileName;
	std::string			data;
	std::fstream		src;
	std::ofstream		dst;

	if (argc != 4)
		return (0);
	fileName = argv[1];
	src.open(fileName.c_str());
	if (src.rdstate() == std::_S_failbit) {
		std::cout << "Failed to open: " << fileName << std::endl;
		return (1);
	}
	dst.open(fileName.append(".replace").c_str());
	if (dst.rdstate() == std::_S_failbit) {
		std::cout << "Failed to open: " << fileName << std::endl;
		src.close();
		return (1);
	}
	while (src >> data) {
		if (data == argv[2])
			dst << argv[3];
		else
			dst << data;
		if (!src.eof())
			dst << " ";
	}
	dst << std::endl;
	dst.close();
	src.close();
	return (0);
}
