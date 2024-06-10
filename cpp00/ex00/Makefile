NAME		= megaphone

CC			= c++

RM 			= rm -rf

FLAGS		= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

${NAME}: 	megaphone.cpp
			${CC} ${FLAGS} megaphone.cpp -o ${NAME}

clean:
			${RM}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re