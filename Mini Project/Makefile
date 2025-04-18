CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
OBJS = main.o Ressource.o Container.o Pod.o Server.o KubernetesCluster.o Cloud_Util.o

all: cloud

cloud: $(OBJS)
	$(CXX) $(CXXFLAGS) -o cloud $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o cloud