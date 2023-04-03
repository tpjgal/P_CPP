#define _CRT_SECURE_NO_WARNINGS
#include "Bitmap.h"

#include <stdexcept>
#include <fstream>
#include <iostream>
#include <thread>

void Bitmap::InternalLoad() {
	m_Buffer.clear();
	std::ifstream file{ GetFileName() };
	if (!file) {
		throw std::runtime_error{ "Failed to open file" };
	}
	using namespace std::chrono_literals;
	std::string line{};
	std::cout << "Loading bitmap[";
	while (std::getline(file, line)) {
		m_Buffer += line + '\n';
		std::this_thread::sleep_for(100ms);
		std::cout << '.';
	}
	std::cout << "] Done!\n";
}

Bitmap::Bitmap(const std::string& fileName) :Image{ fileName } {
	
}


void Bitmap::Display()const  {
	std::cout << m_Buffer;
}

void Bitmap::Load() {
	InternalLoad();
}

void Bitmap::Load(const std::string &fileName) {
	SetFileName(fileName);
	Load();
}
