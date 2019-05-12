# Simple makefile to compile MKL dgemm example
# By: Nick from CoffeeBeforeArch

COMPILER_FLAGS = -fopenmp -lmkl_intel_lp64 -lmkl_core -lmkl_gnu_thread -lpthread -lm -ldl

dgemm : dgemm.cpp
	g++ -L$(MKL_LIB_DIR) -I$(MKL_INCLUDE_DIR) dgemm.cpp -o dgemm $(COMPILER_FLAGS)

.PHONY : clean

clean:
	rm dgemm

