CXX = g++
CXXFLAGS = -g -L/opt/gtest/lib -lgtest -lgtest_main -lpthread
INCS = -I./ -I../test -I/opt/gtest/include
OBJS = test/Addition.o Addition_Test.o ../test/Multiply.o Multiply_Test.o

testAll: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) -o testAll  Main_TestAll.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm testAll *.o testAll.xml
