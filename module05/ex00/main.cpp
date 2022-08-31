#include "Bureaucrat.h"


int	main()
{
	Bureaucrat c("can", 31);
	Bureaucrat e("erdoggy", 62);

	try
	{
		std::cout << c << std::endl;
		std::cout << e << std::endl;
		c.decGrade(666);
		e.incGrade(555);
	}
	catch (std::exception &e)
	{
		std::cout << "Hata : " << e.what() << std::endl;
	}
}