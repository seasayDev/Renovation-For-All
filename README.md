# Renovation-For-All
### Description
R-F-A is a simple software that allows you to place orders for the installation of different floors or flooring (ceramic, tile), then automate order taking to facilitate the work of clerks and then provide activity statistics for owners.
### Usage 
To use the terminal software in UNIX(Mac, Linux, WSL)  terminal, we need some commands `compile`, `execute`, `clean`.\
Make sure you're in the same folder as the `main.cpp` file, then use this command to execute the program:
```sh
make
g++ -o main  main.cpp  
./main 
---------------------------------------------------------------------------------------
 Welcome to the Renovation-For-All billing system.
 This program makes it possible to calculate the invoice for the installation of a floor
 in the givensurface according to the price per square foot and the type of floor.
---------------------------------------------------------------------------------------

*** Menu of choice ***
1.  Invoice the installation of a floor
2.  Display the number of floors installed and the total amount of all installations
3.  Quit the program

Enter your choice : 

```
If you want to only compile the program, you can try this option:

```sh
make compile
g++ -o main  main.cpp  
```
Then finally, to clean all generated files, executions files and others garbage files you can be able to clean:

```sh
make clean
rm -rf main *.swp;
```

### Author
* Saliou [(seasayDev)](https://www.twitter.com/seasayDev)
