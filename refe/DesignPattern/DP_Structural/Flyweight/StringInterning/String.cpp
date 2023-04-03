#include "String.h"

#include <cstring>

void String::Allocate(const char* pstr) {
	m_Length = strlen(pstr) ;
	m_pBuffer = new char[m_Length + 1] ;
	strcpy_s(m_pBuffer, m_Length + 1, pstr) ;
}

String::String() {
	m_pBuffer = new char[1]{'\0'} ;
}

String::String(const char* pstr) {
	Allocate(pstr) ;
}

String::~String() {
	delete []m_pBuffer ;
}

String::String(const String& other) {
	Allocate(other.m_pBuffer) ;
}

String::String(String&& other)noexcept {
	m_Length = other.m_Length ;
	m_pBuffer = other.m_pBuffer ;
	other.m_Length = 0 ;
	other.m_pBuffer = nullptr ;
}

String& String::operator=(const String& other) {
	Assign(other) ;
	return *this ;
}

String& String::operator=(String&& other)noexcept {
	if (this != &other) {
		delete[]m_pBuffer;
		m_Length = other.m_Length;
		m_pBuffer = other.m_pBuffer;
		other.m_Length = 0;
		other.m_pBuffer = nullptr;
	}
	return *this;
}

size_t String::GetLength() const {
	return  m_Length ;
}

const char* String::GetString() const {
	return m_pBuffer ;
}

void String::Assign(const char* pstr) {
	delete []m_pBuffer ;
	Allocate(pstr) ;
}

void String::Assign(const String& other) {
	if(this != &other) {
		Allocate(other.m_pBuffer) ;
	}
}
