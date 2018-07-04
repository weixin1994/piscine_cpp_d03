#ifndef _PHASER_H_
#define _PHASER_H_

#include "Sounds.h"

class Phaser
{
	public:
		enum AmmoType
		{
			REGULAR = 20,
			PLASMA,
			ROCKET
		};
		Phaser(int maxAmmo, AmmoType type);
		~Phaser();

		void fire();
		void ejectClip();
		void changeType(AmmoType newType);
		void reload();
		void addAmmo(AmmoType type);
		int getCurrentAmmos() const;

	private:
		static const int Empty = 0;
		const int _maxAmmo;
		int _currentAmmo[3];
		AmmoType _type;
};
#endif
