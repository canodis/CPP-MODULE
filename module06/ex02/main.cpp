#include <iostream>

class Base{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void)
{
	srand(time(NULL));
	Base *result;
	int number = rand() % 3;
	if (number == 0) {
		std::cout << "A generated" << std::endl;
		result = new A();
	}
	else if (number == 1) {
		std::cout << "B generated" << std::endl;
		result = new B();
	}
	else {
		std::cout << "C generated" << std::endl;
		result = new C();
	}
	return (result);
}

void	identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "the type is A" << std::endl;
	else if (b)
		std::cout << "the type is B" << std::endl;
	else if (c)
		std::cout << "the type is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "the type is A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "the type is B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "the type is C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main()
{
	Base *_base;

	_base = generate();
	identify(_base);
	identify(*_base);
	delete _base;
}