#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
	std::string			fileName;
	std::string			data;
	std::fstream		src;
	std::fstream		dst;

	fileName = argv[1];
	src.open(fileName.c_str());
	dst.open(fileName.append(".replace").c_str());
	while (src >> data) {
		if (data == argv[2])
			dst << argv[3];
		else
			dst << data;
	}
	return (0);
}
