CXX = g++
CXXFLAGS = -std=c++17

EXERCISES = exo1 exo2 exo3 exo4 exo5 exo6

all: $(EXERCISES)

exo%: exo%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm  -f $(EXERCISES)
