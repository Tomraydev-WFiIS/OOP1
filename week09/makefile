CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab09.o Rational.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab09.o: lab09.cpp Rational.h tools.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Rational.o: Rational.cpp Rational.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

