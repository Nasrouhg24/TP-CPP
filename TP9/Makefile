# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Output executable
TARGET = main

# Source files
SRC = main.cpp \
      Account.cpp \
      Account_Util.cpp \
      Checking_Account.cpp \
      Savings_Account.cpp \
      Trust_Account.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Header files (for dependencies)
DEPS = Account.h \
       Account_Util.h \
       Checking_Account.h \
       Savings_Account.h \
       Trust_Account.h

# Make the target
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Rule to compile .cpp files to .o files
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the object and executable files
clean:
	rm -f $(OBJ) $(TARGET)
