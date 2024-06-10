NAME		= Account

CC			= c++

RM 			= rm -rf

FLAGS		= -Wall -Wextra -Werror

OBJDIR 		= .objs

FILES		= tests Account

SRC			= $(FILES:=.cpp)

OBJS		= $(addprefix $(OBJDIR)/, $(FILES:=.o))

HEADERS		= Account.hpp


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