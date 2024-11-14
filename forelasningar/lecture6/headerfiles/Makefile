# This is a simple example of a Makefile.
# -Wall -Wextra are options to force the complier to show warnings

CXX = g++
CFLAGS = -g -std=c++17
WARNINGS = -Wall -Wextra
OBJS = main.o functions.o
FINAL = main_product

$(FINAL): main.o functions.o
	$(CXX) $(OBJS) -o $(FINAL)

main.o: main.cpp 
	$(CXX) $(WARNINGS) $(CFLAGS) -c main.cpp 

functions.o: functions.cpp 
	$(CXX) $(CFLAGS) -c functions.cpp 


clean:
	@rm -f *.o main_product