#include <iostream>
#include <string>
#include "Phaser.h"
#include "Sounds.h"

Phaser::Phaser(int maxAmmo, AmmoType type) : _maxAmmo(maxAmmo), _type(type)
{
	for(int i = 0; i <= ROCKET; i++)
		_currentAmmo[i] = _maxAmmo;
	if (type > ROCKET)
		type = REGULAR;
	_type = type;
}
Phaser::~Phaser()
{

}


void Phaser::fire()
{
    if (_currentAmmo[_type] == Empty) 
    {
		std::cout << "Clip empty, please reload" << std::endl;
		return;
    }
    _currentAmmo[_type]--;
    if (_type == REGULAR)
	    std::cout << Sounds::Regular << std::endl;
    if (_type == PLASMA)
	    std::cout << Sounds::Plasma << std::endl;
    if (_type == ROCKET)
	    std::cout << Sounds::Rocket << std::endl;
}

void Phaser::ejectClip()
{
	_currentAmmo[_type] = 0;
}

void Phaser::changeType(AmmoType newType)
{
	if (newType > ROCKET)
		return;
	_type = newType;
	std::cout << "Switching ammo to type : ";
	if (_type == REGULAR)
		std::cout << "regular" << std::endl;
	if (_type == PLASMA)
		std::cout << "plasma" << std::endl;
	if (_type == ROCKET)
		std::cout << "rocket" << std::endl;
}

void Phaser::addAmmo(AmmoType type)
{
	if (type > ROCKET)
		return;
	if (_currentAmmo[type] == _maxAmmo) {
		std::cout << "Clip full" << std::endl;
		return;
	}
	_currentAmmo[type]++;
}

void Phaser::reload()
{
	std::cout << "Reloading ..." << std::endl;
	_currentAmmo[_type] = _maxAmmo;
}

int Phaser::getCurrentAmmos() const
{
	return (_currentAmmo[_type]);
}
