NAME		= Violence

CC			= c++

RM 			= rm -rf

FLAGS		= -Wall -Wextra -Werror -std=c++98

OBJDIR 		= .objs

FILES		= main HumanA HumanB Weapon

SRC			= $(FILES:=.cpp)

OBJS		= $(addprefix $(OBJDIR)/, $(FILES:=.o))

HEADERS		= HumanA.hpp HumanB.hpp Weapon.hpp

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