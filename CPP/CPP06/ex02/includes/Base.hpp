#ifndef BASE_H
# define BASE_H

# include <iostream>
# include <stdexcept>
# include <stdlib.h>
# include <time.h> 

class	Base {
public:
	virtual ~Base(void);

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif
