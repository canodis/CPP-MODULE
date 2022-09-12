NAME = abstract
CMP = c++
FLAGS = -Wall -Wextra -Werror
INC = inc
SRCS = src/*.cpp

all:
	$(CMP) $(FLAGS) $(SRCS) -I $(INC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean : clean

re: fclean all