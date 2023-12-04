driver: main.o 
	g++ -o driver

main.o: main.cpp
	g++ -c main.cpp

clean: 
	rm *.o driver