Pricing_plan_Helper:./build/src/main.o
	g++ -std=c++17  ./build/src/main.o -o ./bin/Pricing_plan_Helper


./build/src/main.o: ./src/main.cpp
	g++ -std=c++17 -c ./src/main.cpp -o ./build/src/main.o -lm