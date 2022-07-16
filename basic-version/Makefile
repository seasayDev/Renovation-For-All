GCC=g++
file=main

all:  compile execute 


compile: 
	$(GCC) -o $(file)  $(file).cpp  

execute: 
	./$(file) 

.PHONY: clean 

clean: 
	rm -rf $(file) *.swp;
