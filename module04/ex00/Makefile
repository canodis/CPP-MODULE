NAME = animals
CMP = c++
FLAGS = -Wall -Wextra -Werror
INCDIR = inc
SRCS = src/*.cpp

all:
	$(CMP) $(FLAGS) -I $(INCDIR) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean : clean

re: fclean all