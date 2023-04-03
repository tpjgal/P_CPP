#pragma once
#include <ostream>

class String
{
	char *m_pBuffer{} ;
	size_t m_Length{} ;
	void Allocate(const char *pstr) ;
public:
	String() ;
	String(const char *pstr) ;
	~String() ;
	String(const String &other) ;
	String(String &&other)noexcept ;
	String &operator =(const String &other) ;
	String &operator =(String &&other)noexcept ;
	size_t GetLength()const ;
	const char * GetString()const ;
	void Assign(const char *pstr) ;
	void Assign(const String &other) ;

	friend std::ostream& operator<<(std::ostream& os, const String& obj) {
		return os << obj.m_pBuffer;
	}
};

