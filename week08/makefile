CXX = g++
CXXFLAGS = -Wall -g -pedantic -std=c++11 
NAME = program
OBJS = lab08.o mean.o MyTroubles.o MeanCalculator.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab08.o: lab08.cpp mean.h MyTroubles.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

mean.o: mean.cpp mean.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

MyTroubles.o: MyTroubles.cpp MyTroubles.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

MeanCalculator.o: MeanCalculator.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

