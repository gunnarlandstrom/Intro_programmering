logical_error:	logical_error.o
	g++ -o logical_error logical_error.o
logical_error.o:	logical_error.cpp
	g++ -c logical_error.cpp


# This is a comment 
#.PHONY 
# @ at the start means do not echo the command in the terminal
run: 
	@./logical_error     

clean:
	rm -f logical_error logical_error.o

