CXX = c++
NAME = ex01
SRCS = main.cpp Bureaucrat.cpp Form.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
HEADERS = Bureaucrat.hpp 

all: $(NAME)

$(NAME) : $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp 
	$(CXX) -c -g3 $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean