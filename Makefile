# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra

# Alvo principal: compila todos os programas
all: primo vetor matriz

# Compila primo.cpp -> executável: primo
primo: primo.cpp
	$(CXX) $(CXXFLAGS) -o primo primo.cpp

# Compila vetor.cpp -> executável: vetor
vetor: vetor.cpp
	$(CXX) $(CXXFLAGS) -o vetor vetor.cpp

# Compila matriz.cpp -> executável: matriz
matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) -o matriz matriz.cpp

# Remove os executáveis
clean:
	rm -f primo vetor matriz
