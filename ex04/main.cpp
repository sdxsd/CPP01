#include <iostream>
#include <fcntl.h>
#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
	std::string			fileName;
	std::string			data;
	std::fstream		src;
	std::ofstream		dst;

	if (argc < 4 || argc > 4)
		return (0);
	fileName = argv[1];
	src.open(fileName.c_str());
	dst.open(fileName.append(".replace").c_str());
	while (src >> data) {
		if (data == argv[2])
			dst << argv[3];
		else
			dst << data;
	}
	dst << std::endl;
	dst.close();
	src.close();
	return (0);
}
