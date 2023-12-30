
Lab9: Lab9.o Package.o
        g++ Lab9.o Package.o -o Lab9

Lab9.o: Lab9.cpp
        g++ -c Lab9.cpp

Packago.o: Package.cpp Package.h
        g++ -c Package.cpp

TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp

clean:
        rm *.o Lab9

