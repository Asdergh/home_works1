#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
//#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio
#include<stdbool.h>


bool bissectrice(double, double);
bool vertical(double, double);
bool horizontal(double, double);
 
// Конструкция с void main работает только на Си. Си++ такое уже не примет.
// Дело в том, что при выполнении функции main() запускается новый Процесс (Process), к которой автоматически подколючается Runtime Library.
// return 0; - является кодом выхода из этого Process. Поэтому необходим int main(){return0;}
bool main() {
	//Тестировщик Вам сказал, что с вводными данными (-5,4) вывод не тот, что ожидаем. Исправьте это.
	double x, y;
	printf("input the x, y:\n");
	printf("input the x: \t");
	scanf("%d \n", x);
	printf("input the y: \t");
	scanf("%d \n", y);
	printf("%d", bissectrice(x, y) || (vertical(x, y) && horizontal(x, y)) || (!vertical(x, y) && !horizontal(x, y)));

	return 0;
}

bool bissectrice(double x, double y) {
	bool res = false;
	res = (y <= -x);
	return res;
}

/*
ЛОГИЧЕСКИЕ ВЫРАЖЕНИЯ:
	!
	&&
	||

ЛОГИЧЕСКИЕ ПОБИТОВЫЕ ВЫРАЖЕНИЯ:
	~
	&
	|
	^
	>>
	<<

*/
bool vertical(double x, double y) {
	bool res = false;
	res = (x > 4);
	return res;
}
bool horizontal(double x, double y) {
	bool res = false;
	res = (y > 3);
	return res;
}

/*
Черновик:
На вход (double x, double y)

3 функции:
bissectrice(double x, double y)
vertical(double x, double y)
horizontal(double x, double y)

выход int result;
*/