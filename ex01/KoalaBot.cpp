#include "KoalaBot.h"

KoalaBot::KoalaBot(const std::string &serial)
{
	this->_serial = serial;
}

void KoalaBot::setParts(Arms& arms)
{
	this->_arms = arms;
}

void KoalaBot::setParts(Legs& legs)
{
	this->_legs = legs;
}

void KoalaBot::setParts(Head& head)
{
	this->_head = head;
}

void KoalaBot::swapParts(Arms& arms) 
{
	Arms temp;
	temp = this->_arms;
	this->_arms = arms;
	arms = temp;
}

void KoalaBot::swapParts(Legs& legs) 
{
	Legs temp;
	temp = this->_legs;
	this->_legs = legs;
	legs = temp;
}

void KoalaBot::swapParts(Head& head) 
{
	Head temp;
	temp = this->_head;
	this->_head = head;
	head = temp;
}

void KoalaBot::informations() const
{
	std::cout << "[KoalaBot] " << this->_serial << '\n';
	this->_arms.informations();
	this->_legs.informations();
	this->_head.informations();
}

bool KoalaBot::status() const
{
	return (this->_arms.isFunctionnal() &&
	 this->_legs.isFunctionnal() && this->_head.isFunctionnal());
}

KoalaBot::~KoalaBot()
{
	
}
