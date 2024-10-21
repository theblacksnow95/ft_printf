# Choose the compiler

CC = gcc

# Choose the flags to use

FLAGS = -Wall -Werror -Wextra

# Set the name of the library to create

NAME = printf.a

# Include the source files with all the functions to compile

SOURCES = ft_printf.c

# Set the rule to all the transformations to the files, from .c ot an object file to be able to use by the library.

OBJECTS = $(SOURCES:.c=.o)

# create the rules for the compilation

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fcleanL: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
