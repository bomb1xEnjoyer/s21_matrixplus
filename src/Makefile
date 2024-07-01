FLAGS := -std=c++17 -Wall -Werror -Wextra -lstdc++ -pedantic 


OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lpthread -lcheck -pthread -lrt -lm -lsubunit -lgtest
else
	CHECK_FLAGS = -lcheck -lm -lpthread -lgtest 
endif


all: clean s21_matrix_oop.a test
	g++ -D NOT_TEST ${FLAGS} s21_matrix_oop.cpp -o a.out  && ./a.out

s21_matrix_oop.a:
	g++ ${FLAGS} -c *.cpp
	ar rcs s21_matrix_oop.a *.o
	ranlib s21_matrix_oop.a

test: clean s21_matrix_oop.a
	g++ -D TEST ${FLAGS} -c matrix_tests/*.cc $(CHECK_FLAGS)
	g++ *.o s21_matrix_oop.a -o test_matrix.out -lgtest
	rm *.o
	./test_matrix.out

style_check:
	cp ../materials/linters/.clang-format .
	clang-format -style=Google -n *.cpp *.h

clean:
	rm -rf obj *.o *.a a.out* test_matrix.out .clang-format