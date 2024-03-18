all:
	@echo "make run"
	@echo "make matching"

hello:
	clang++ -std=c++11 hello-regexp.cpp -o hello-regxp

run: hello
	./hello-regxp

clean:
	rm -f hello-regxp hello-matching

matching:
	clang++ -std=c++11 hello-matching.cpp -o hello-matching
	./hello-matching
