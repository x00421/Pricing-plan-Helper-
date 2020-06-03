Pricing_plan_Helper:./build/src/globals.o ./build/src/main.o ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o 
	g++ -std=c++17 ./build/src/globals.o ./build/src/main.o ./build/src/Menu.o ./build/src/ob_operatorax.o ./build/src/questions.o ./build/src/counting_for.o  ./build/src/comparison.o -o ./bin/Pricing_plan_Helper


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

./build/src/globals.o: ./src/globals.cpp
	g++ -std=c++17 -c ./src/globals.cpp -o ./build/src/globals.o -lm
