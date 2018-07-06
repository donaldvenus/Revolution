all:		revolution
	    	echo "all done"

revolution:	main.o game.o
			g++ main.o game.o -o revolution

main.o:		main.cpp
			g++ main.cpp -c

game.o:		game.cpp game.h
	    	g++ game.cpp -c

clean:  
	  		rm -f *.o revolution

tar:		game.tgz
	    	echo "tar made"

game.tgz:	Makefile README game.cpp game.h
			tar -zcvf game.tgz Makefile README game.cpp game.h