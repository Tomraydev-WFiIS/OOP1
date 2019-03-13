CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab03.o Book.o Magazine.o Order.o Publication.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab03.o: lab03.cpp Book.h Magazine.h Order.h Publication.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Magazine.o: Magazine.cpp Magazine.h Publication.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Book.o: Book.cpp Book.h Publication.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Order.o: Order.cpp Order.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Publication.o: Publication.cpp Publication.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

