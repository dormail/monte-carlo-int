main.o: main.cpp
	g++ main.cpp -o main.o

output.csv: main.o
	./main.o # creates output.csv

all: output.csv

clear:
	rm -rf *.o
	rm -rf *.csv
