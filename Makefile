.DEFAULT_GOAL := build

all: clean run

run: build
	./target/main.out

build:
	g++ -o ./target/main.out ./src/main/*.cpp

clean:
	@echo "Cleaning up..."
	rm -rvf ./target/*.out