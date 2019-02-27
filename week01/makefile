CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = Main.o functions.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
functions.o: functions.cpp Division.h Exponentiation.h SumOfElements.h Operation.h
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
Main.o: Main.cpp Division.h Exponentiation.h SumOfElements.h Operation.h
	$(CXX) $(CXXFLAGS) -c $< -o $@


# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

