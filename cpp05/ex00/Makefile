NAME		= Bureaucrat
CC			= c++

RM 			= rm -rf

FLAGS		= -Wall -Wextra -Werror -std=c++98

OBJDIR 		= .objs

FILES		= main Bureaucrat

SRC			= $(FILES:=.cpp)

OBJS		= $(addprefix $(OBJDIR)/, $(FILES:=.o))

HEADERS		= Bureaucrat.hpp


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