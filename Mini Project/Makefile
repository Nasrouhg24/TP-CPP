CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
OBJS = main2.o Ressource.o Container.o Pod.o Server.o KubernetesCluster.o Cloud_Util.o CloudExceptions.o

all: cloud_2

cloud_2: $(OBJS)
	$(CXX) $(CXXFLAGS) -o cloud_2 $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o cloud_2