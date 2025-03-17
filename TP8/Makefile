CXX = g++
CXXFLAGS = -std=c++11 -Wall

movieApp: main.o Movies.o Movie.o
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o movieApp
