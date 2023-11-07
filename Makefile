# MASK=@ # add $(MASK) TO HIDE THE OUTPUT OF THE COMMAND

NAME=ft_lstadd_back.c ft_lstadd_front.c 

OBJ=$(NAME:%.c=%.o)

OBJ_BONUS=ft_lstadd_back.o ft_lstclear.o ft_lstiter.o ft_lstmap.o ft_lstsize.o ft_lstadd_front.o ft_lstdelone.o ft_lstlast.o ft_lstnew.o

%.o: %.c
	gcc -c $<

all: $(OBJ_BONUS)
	ar -r libft.a $^

clean:
	rm $(OBJ_BONUS) -f

fclean: clean
	rm libft.a -f

bonus: $(OBJ_BONUS)

.PHONY: all clean fclean
