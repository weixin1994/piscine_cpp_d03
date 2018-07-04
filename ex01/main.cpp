#include <iostream>
#include "Parts.h"
#include "KoalaBot.h"
int main()
{
	KoalaBot kb;
	std::cout << std::boolalpha << kb.status() << std::endl;
	kb.informations(); 
	return 0; 
}
