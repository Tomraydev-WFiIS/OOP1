CXX=g++
CXXFLAGS=-Wall -std=c++11

OUTPUT_FILE=w
MAIN=lab11
LIB01=PyArray
LIB02=myerror

$(OUTPUT_FILE): $(MAIN).o $(LIB01).o $(LIB02).o 
	$(CXX) $(CXXFLAGS) -o $(OUTPUT_FILE) $(MAIN).o $(LIB01).o $(LIB02).o
	make clean
	make run

$(MAIN).o: 
	$(CXX) -w -c $(MAIN).cpp $(LIB01).h $(LIB02).h

$(LIB01).o:
	$(CXX) -w -c $(LIB01).cpp $(LIB01).h

$(LIB02).o:
	$(CXX) -w -c $(LIB02).cpp $(LIB02).h


clean:
	rm -f *.o
	rm -f *.gch
	#rm $(OUTPUT_FILE)#

mem:
	valgrind --leak-check=full ./w

run:
	./$(OUTPUT_FILE)

.PHONY: clean run