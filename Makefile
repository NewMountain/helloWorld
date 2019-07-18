
build:
	gcc -o ./bin/hello ./src/main.c

run:
	./bin/hello

dev:
	echo "\nCompiling Program:"
	gcc -o ./bin/hello ./src/main.c

	echo "\nRunning Program:"
	./bin/hello
