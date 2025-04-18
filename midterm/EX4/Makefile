CXX = g++
CXXFLAGS = -std=c++17 -Wall

BanqueApp:  main.o CompteBancaire.o Banque.o
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o BanqueApp
