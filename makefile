slither:main.cpp food.cpp game.cpp snake.cpp ui.cpp smath.cpp constants.h 
		g++ main.cpp food.cpp game.cpp snake.cpp ui.cpp smath.cpp -finput-charset=UTF-8 -lncursesw -o slither && ./slither

clean:
		rm -f ./slither

