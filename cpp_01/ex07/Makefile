
SRCS		=		main.cpp Replace.cpp

NAME		=		replace

CC			=		clang++

CFLAGS		=		-Wall -Werror -Wextra

HEADER		=		Replace.hpp

# создаём скрытую директорию, в которой будут .o файлы
OBJS_DIR	=		.obj

# VPATH = *перечесление папок*

# прописываем (добавляем) путь для каждого .o файла
OBJS		= 		$(addprefix $(OBJS_DIR)/, $(patsubst %.cpp, %.o, $(SRCS)))

all:				$(NAME)

$(NAME): 			$(OBJS)
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
					@printf "$(LIGHT_PURPLE)$(BOLD)$(NAME) $(NO_COLOR)–– $(LIGHT_PURPLE)$(BOLD)[Success compiling]        $(NO_COLOR)\n"

$(OBJS_DIR)/%.o:	%.cpp $(HEADER)
					@test -d $(OBJS_DIR) || mkdir $(OBJS_DIR)
					@printf "$(GREEN)$(BOLD)Compilation $(UNDER_LINE)$(YELLOW)$<$(NO_COLOR)  $(BOLD)–– $(RED)[KO]        $(NO_COLOR)\r"
					@$(CC) $(CFLAGS) -c $< -o $@
					@printf "$(GREEN)$(BOLD)Compilation $(UNDER_LINE)$(YELLOW)$<$(NO_COLOR)  $(BOLD)–– $(GREEN)[OK]$(NO_COLOR)\n"

clean:
					@rm -rf $(OBJS)
					@rm file1.replace file2.replace
					@/bin/rm -rf $(OBJS_DIR)

fclean: 			clean
					@rm -rf $(NAME)
					@printf "$(UNDER_LINE)$(BOLD)$(NAME)$(NO_COLOR) $(LIGHT_RED)deleted$(NO_COLOR)\n"

re: 				fclean all

test:
					./$(NAME) file1 world aquinoa
					@echo
					./$(NAME) file2 a aa
					@echo
					./$(NAME) file lol olo
					@echo
					./$(NAME) file1 lol ''
					@echo
					./$(NAME) file2 '' olo

################
##   COLORS   ##
################

UNDER_LINE	= \033[4m
BOLD	 	= \033[1m

NO_COLOR 	= \033[0m
BLACK	 	= \033[0;30m
RED 	 	= \033[0;31m
GREEN 	 	= \033[0;32m
BROWN 	 	= \033[0;33m
BLUE 		= \033[0;34m
PURPLE 	 	= \033[0;35m
CYAN 	 	= \033[0;36m
LIGHT_GRAY	= \033[0;37m

DARK_GRAY	= \033[1;30m
LIGHT_RED	= \033[1;31m
LIGHT_GREEN	= \033[1;32m
YELLOW 		= \033[1;33m
LIGHT_BLUE	= \033[1;34m
LIGHT_PURPLE= \033[1;35m
LIGHT_CYAN	= \033[1;36m
WHITE 		= \033[1;37m
