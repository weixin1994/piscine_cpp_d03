#ifndef _KREOGCOM_H_
#define _KREOGCOM_H_

#include <iostream>
#include <cctype>

class KreogCom
{
	public:
		KreogCom(int x, int y, int serial);
		~KreogCom();
		void addCom(int x, int y, int serial);
		KreogCom *getCom();
		void removeCom();
		void ping() const;
		void locateSquad() const;

	private:
		int _x;
		int _y;
		KreogCom *next;
		const int _serial;
};

#endif
