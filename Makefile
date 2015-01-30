GCC=gcc
SortArray: SortArray.o
	${GCC} SortArray.o -o SortArray

	rm -f *.o
