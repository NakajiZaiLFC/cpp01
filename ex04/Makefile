NAME := replace
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -pedantic
FILE := main.cpp
OBJDIR := obj
OUTPUT := num.txt

OBJ := $(addprefix $(OBJDIR)/, $(FILE:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	$(MAKE) re
	clear
	@for i in $$(seq 1 9); do \
		printf "%0.s$$i" $$(seq 1 $$i); \
		echo ""; \
	done > $(OUTPUT)
	valgrind --leak-check=full --show-leak-kinds=all -q ./$(NAME) $(OUTPUT) 9 1

.PHONY: re clean fclean all run