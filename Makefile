all:		game
	    	echo "all done"

game:		game.o 
	    	gcc game.o -o

game.o:		game.cpp game.h
	    	gcc game.cpp -c -0

clean:  
	  		rm -f *.o game

tar:		game.tgz
	    	echo "tar made"

game.tgz:	Makefile README game.cpp game.h
			tar -zcvf game.tgz Makefile README game.cpp game.h