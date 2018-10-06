#include <Squad.hpp>
#include <ISpaceMarine.hpp>

/** Static **/
/** Constructor **/

Squad::Squad() :
	_lst(nullptr), _unit(0) {
	
}
Squad::Squad(Squad const &s) {
	*this = s;
}

/** Public **/

int Squad::getCount() const {
	return _unit;
}
ISpaceMarine* Squad::getUnit(int _unit) const {
	t_marines *ret = nullptr;

	ret = _lst;
	for (; _unit != 0 && ret != nullptr; _unit--) {
		ret = ret->next;
	}
	return ret->space_marine;
}
int Squad::push(ISpaceMarine*	sm) {
	if (_lst != nullptr) {
		t_marines *it = _lst;
		for (; it->next != nullptr; it = it->next);
		t_marines *element = new t_marines;
		element->space_marine = sm;
		element->next = nullptr;
		it->next = element;
	} else {
		_lst = new t_marines;
		_lst->space_marine = sm;
		_lst->next = nullptr;
	}
	_unit++;
	return _unit;
}

/** Private **/
/** Operator **/

Squad	&Squad::operator=(Squad const & s) {
	if (this != &s) {
		this->_lst = s._lst;
		this->_unit = s._unit;
	}
	return *this;
}

/** Destructor **/

Squad::~Squad() {
	t_marines *temp;

	for (t_marines *it = _lst; it != nullptr;) {
		temp = it;
		it = it->next;
		delete temp->space_marine;
		delete temp;
	}
}

