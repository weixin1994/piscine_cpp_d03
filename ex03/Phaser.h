#ifndef _PHASER_H_
#define _PHASER_H_

#include <string>
#include <iostream>
#include <queue>

class Phaser 
{
	public:
		enum AmmoType 
		{
			REGULAR,
			PLASMA,
			ROCKET
		};

		Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
		~Phaser();
		void fire();
		void ejectClip();
		void changeType(AmmoType newType);
		void reload();
		void addAmmo(AmmoType type);
		int getCurrentAmmos() const;

	private:
		int _maxAmmo;
		AmmoType _defaultType;
		std::queue<AmmoType> _ammos;
};

#endif
