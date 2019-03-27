CXX = g++
CXXFLAGS = -Wall -g -pedantic -std=c++11 
NAME = program
OBJS = lab05.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab05.o: lab05.cpp Drawable.h PointArray.h Rectangle.h Shape.h Transformable.h Triangle.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

