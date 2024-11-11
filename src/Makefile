FLAGS := -std=c++17 -Wall -Werror -Wextra


OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lpthread -lcheck -pthread -lrt -lm -lsubunit -lgtest
else
	CHECK_FLAGS = -lcheck -lm -lpthread -lgtest 
endif


all: clean s21_matrix_oop.a test

s21_matrix_oop.a:
	g++ ${FLAGS} -c s21_matrix_oop.cpp
	ar rcs s21_matrix_oop.a s21_matrix_oop.o
	ranlib s21_matrix_oop.a

test: clean s21_matrix_oop.a
	g++ ${FLAGS} -c matrix_tests/*.cc $(CHECK_FLAGS)
	g++ *.o s21_matrix_oop.a -o test_matrix.out -lgtest
	rm *.o
	./test_matrix.out

style_check:
	clang-format -style=Google -n *.cpp *.h

clean:
	rm -rf obj *.o *.a a.out* test_matrix.out