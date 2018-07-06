all:			revolution
	    		echo "all done"

revolution:		main.o game.o empire.o rebels.o nation.o city.o map.o
				g++ main.o game.o empire.o rebels.o nation.o city.o map.o -o revolution

main.o:			main.cpp
				g++ main.cpp -c

game.o:			game.cpp game.h
	    		g++ game.cpp -c

map.o:			map.cpp map.h
				g++ map.cpp -c

city.o:			city.cpp city.h
				g++ city.cpp -c

empire.o:		empire.cpp empire.h
				g++ empire.cpp -c

rebels.o:		rebels.cpp rebels.h
				g++ rebels.cpp -c

nation.o:		nation.cpp nation.h
				g++ nation.cpp -c

clean:  
	  			rm -f *.o revolution

tar:			revolution.tgz
	    		echo "tar made"

revolution.tgz:	Makefile README game.cpp game.h main.cpp
				tar -zcvf revolution.tgz Makefile README game.cpp game.h main.cpp