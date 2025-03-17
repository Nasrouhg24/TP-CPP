## Compilation Instructions

To compile the project, follow these steps:

1. Open a terminal and navigate to the project directory.
2. Run the following command to compile the source files:

   ```sh
   make
   ```

3. To execute the compiled program, run:

   ```sh
   ./movieApp
   ```

If `make` is not installed on your system, you can manually compile the files using:

```sh
g++ -std=c++11 -Wall -c Movie.cpp -o Movie.o
g++ -std=c++11 -Wall -c Movies.cpp -o Movies.o
g++ -std=c++11 -Wall -c main.cpp -o main.o
g++ Movie.o Movies.o main.o -o movieApp
```

Then, run:

```sh
./movieApp
```

