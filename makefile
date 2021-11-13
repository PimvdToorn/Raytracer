output: main.o vec3D.o ray.o objects.o rayScanner.o
	g++ -std=c++17 main.o vec3D.o ray.o objects.o rayScanner.o -o rayTracer

main.o: main.cpp
	g++ -c main.cpp

vec3D.o: vec3D.cpp vec3D.hpp
	g++ -c vec3D.cpp

ray.o: ray.cpp ray.hpp
	g++ -c ray.cpp

objects.o: objects.cpp objects.hpp
	g++ -c objects.cpp

rayScanner.o: rayScanner.cpp rayScanner.hpp
	g++ -c rayScanner.cpp

clean:
	del *.o rayTracer