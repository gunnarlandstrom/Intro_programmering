runtime_error:	runtime_error.o
	g++ -o runtime_error runtime_error.o
runtime_error.o:	runtime_error.cpp
	g++ -c runtime_error.cpp


# This is a comment 
#.PHONY 
# @ at the start means do not echo the command in the terminal
run: 
	@./runtime_error     

clean:
	rm -f runtime_error runtime_error.o

