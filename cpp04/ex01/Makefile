NAME		= Brain
CC			= c++

RM 			= rm -rf

FLAGS		= -Wall -Wextra -Werror -std=c++98

OBJDIR 		= .objs

FILES		= main Animal Dog Cat WrongAnimal WrongCat Brain

SRC			= $(FILES:=.cpp)

OBJS		= $(addprefix $(OBJDIR)/, $(FILES:=.o))

HEADERS		= Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp


all:		${NAME}

${NAME}: 	$(OBJS) $(HEADERS)
			${CC} $(OBJS)  -o ${NAME}

$(OBJDIR)/%.o: %.cpp $(HEADERS)
			mkdir -p $(dir $@)
			$(CC) $(FLAGS)  -c $< -o $@

clean:
			${RM} $(OBJDIR) $(OBJS)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re