CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab06.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab06.o: lab06.cpp Shape.h Rectangle.h Circle.h ColorFilledShape.h ColorBorderShape.h ColoredShape.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

