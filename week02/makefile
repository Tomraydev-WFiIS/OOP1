CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab02.o Function.o Derivative.o Quadratic.o Sin.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab02.o: lab02.cpp Function.h Derivative.h Quadratic.h Sin.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Function.o: Function.cpp Function.h Derivative.h Quadratic.h Sin.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Derivative.o: Derivative.cpp Function.h Derivative.h Quadratic.h Sin.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Quadratic.o: Quadratic.cpp Function.h Derivative.h Quadratic.h Sin.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Sin.o: Sin.cpp Function.h Derivative.h Quadratic.h Sin.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

