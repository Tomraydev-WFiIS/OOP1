CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab07.o CleverMatrix.o AssumptionError.o IllegalOperation.o MatrixException.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab07.o: lab07.cpp functions.h CleverMatrix.h AssumptionError.h IllegalOperation.h MatrixException.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

CleverMatrix.o: CleverMatrix.cpp functions.h CleverMatrix.h AssumptionError.h IllegalOperation.h MatrixException.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

AssumptionError.o: AssumptionError.cpp AssumptionError.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

IllegalOperation.o: IllegalOperation.cpp IllegalOperation.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

MatrixException.o: MatrixException.cpp MatrixException.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

