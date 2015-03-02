all: script

script: MainSW.o funSW.o
		g++ MainSW.o funSW.o -o script

MainSW.o: MainSW.cpp
		g++ -c MainSW.cpp

funSW.o: funSW.cpp
		g++ -c funSW.cpp

clean:
		rm -rf *o script
