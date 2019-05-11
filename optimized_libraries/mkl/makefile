# Simple makefile to compile MKL dgemm example
# By: Nick from CoffeeBeforeArch

COMPILER_FLAGS = -fopenmp -lmkl_intel_lp64 -lmkl_core -lmkl_gnu_thread -lpthread -lm -ldl

dgemm : dgemm.cpp
	g++ -L$(MKL_LIB) -I$(MKL_INCLUDE) dgemm.cpp -o dgemm $(COMPILER_FLAGS)

.PHONY : clean
	rm dgemm

