NAME	=	act2

CCW		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -o $(NAME)

SRCS	=	srcs/main.c srcs/utils.c
OBJS	=	$(SRCS:.c=.o)

.all:	$(NAME)

$(NAME): $(OBJS)
	@$(CCW) $(CFLAGS) $(SRCS)
	@echo "> Make executed"

%.o: %.c
	@$(CCW) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "> Make clean executed"

fclean: clean
	@rm -f $(NAME)
	@echo "> Make clean executed"