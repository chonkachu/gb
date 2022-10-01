SRCS=main.cpp
run: compile
	./release/main
compile:
	g++ --std=c++17 -Wall -Werror -O2 $(SRCS) -o release/main
