all:
	@echo "make run"

compile:
	clang++ -std=c++11 hello-regexp.cpp -o hello-regxp

run: compile
	./hello-regxp

clean:
	rm -f hello-regxp