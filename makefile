all:Pricing_plan_Helper test

Pricing_plan_Helper: ./build/src/main.o ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o 
	g++ -std=c++17 ./build/src/main.o ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o -o ./bin/Pricing_plan_Helper


./build/src/main.o: ./src/main.cpp
	g++ -std=c++17 -c ./src/main.cpp -o ./build/src/main.o -lm

./build/src/Menu.o: ./src/Menu.cpp
	g++ -std=c++17 -c ./src/Menu.cpp -o ./build/src/Menu.o -lm

./build/src/comparison.o: ./src/comparison.cpp
	g++ -std=c++17 -c ./src/comparison.cpp -o ./build/src/comparison.o -lm

./build/src/counting_for.o: ./src/counting_for.cpp
	g++ -std=c++17 -c ./src/counting_for.cpp -o ./build/src/counting_for.o -lm

./build/src/ob_operatorax.o: ./src/ob_operatorax.cpp
	g++ -std=c++17 -c ./src/ob_operatorax.cpp -o ./build/src/ob_operatorax.o -lm

./build/src/questions.o: ./src/questions.cpp
	g++ -std=c++17 -c ./src/questions.cpp -o ./build/src/questions.o -lm

clean:
	rm -rf ./build/src/*.o ./build/test/*.o

test:  ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o ./build/test/test.o
	g++ -std=c++17 -o ./bin/test ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o  ./build/test/test.o -lm
	./bin/test

./build/test/test.o: ./test/test.cpp
	g++ -std=c++17 -c ./test/test.cpp  -o  ./build/test/test.o -lm
