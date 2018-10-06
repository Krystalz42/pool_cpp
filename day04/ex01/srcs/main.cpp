#include <PlasmaRifle.hpp>
#include <PowerFist.hpp>
#include <Character.hpp>
#include <Enemy.hpp>
#include <RadScorpion.hpp>
#include <SuperMutant.hpp>
int main()
{
	Character* zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(&b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(&b);
	std::cout << *zaz;
	zaz->attack(&b);
	std::cout << *zaz;


	Character       *Arta = new Character("Arta");
	std::cout << *Arta;

	Enemy   *golem = new SuperMutant();
	Enemy   *bug = new RadScorpion();

	AWeapon *fist = new PowerFist();

	Arta->attack(&golem);
	std::cout << *Arta;

	Arta->equip(fist);

	Arta->attack(&golem);
	std::cout << *Arta;
	Arta->attack(&golem);
	std::cout << *Arta;
	Arta->attack(&golem);
	std::cout << *Arta;
	std::cout << std::endl;
	Arta->attack(&golem);
	std::cout << *Arta;
	Arta->attack(&golem);
	std::cout << *Arta;

	Arta->attack(&bug);
	std::cout << *Arta;
	Arta->attack(&bug);
	std::cout << *Arta;
	Arta->recoverAP();
	Arta->attack(&bug);
	std::cout << *Arta;

	return 0;
}