NAME = Animal
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRCS = Main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:			all clean fclean re
