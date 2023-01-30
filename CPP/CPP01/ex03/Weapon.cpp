#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
	return;
}

Weapon::Weapon(void) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

std::string const &Weapon::getType(void) {
	return (this->_type);
}

void Weapon::setType(std::string new_type) {
	this->_type = new_type;
	return;
}