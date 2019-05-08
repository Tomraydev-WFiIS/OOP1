CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab10.o Array.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab10.o: lab10.cpp Array.h Functions.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Array.o: Array.cpp Array.h Functions.h
	$(CXX) $(CXXFLAGS) -c $< -o $@


# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

