
run: compile
	./main
compile:
	g++ --std=c++17 -Wall -Werror -O2 main.cpp -o main
