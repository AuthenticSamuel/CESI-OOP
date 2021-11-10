#pragma once
#ifndef DEF_INSTRUMENT
#define DEF_INSTRUMENT
#include <string>

class Instrument
{
public:
	virtual void jouer();
};

class Saxophone : public Instrument
{
private:
	std::string son;
	void jouer();
};

class Piano : public Instrument
{
private:
	std::string m_son;
};

#endif