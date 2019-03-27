CXX = g++
CXXFLAGS = -Wall -g -pedantic
NAME = program
OBJS = lab04.o Block.o Paragraph.o Header.o PlainText.o Element.o


all: $(NAME)

# Linking, $@ = left side :  $^ = right side, $< = first dependency
$(NAME): $(OBJS)
	$(CXX) $^ -o $@

# Compiling source files to object files
lab04.o: lab04.cpp Block.h Header.h Paragraph.h PlainText.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Block.o: Block.cpp Block.h Element.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Paragraph.o: Paragraph.cpp Paragraph.h Element.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Header.o: Header.cpp Header.h Element.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

PlainText.o: PlainText.cpp PlainText.h Element.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

Element.o: Element.cpp Element.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# The following are commands not files
.PHONY: all clean run

clean:
	rm *.o $(NAME)

run:
	./$(NAME)

