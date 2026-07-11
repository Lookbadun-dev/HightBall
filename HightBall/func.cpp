#include <iostream>
#include "constants.h"

// Функция запроса ввода числа от пользователя.
long double hight(void) {

	std::cout << "Введите начальную высоту падения мячика: ";
	long double Value;
	std::cin >> Value;

	return Value;
}

long double calculate(int16_t t, long double hight) {

	// Расчет высоты на которой находится мяч после падения с высоты hight через время t, по формуле: [ s = u * t + (a * t^2) / 2 ], где u(начальная скорость) = 0.
	long double h = (constants::g * t * t) / 2;

	return hight - h;
}

void resultCalculation(int16_t t, long double hight) {
	if (calculate(t, hight) > 0) {
		std::cout << "Через " << t << " секунд, " << "мячик находится на высоте " << calculate(t, hight) << " метров над землей." << std::endl;
	}
	else if (calculate(t, hight) < 0){
		std::cout << "Через " << t << " секунд, " << "мячик уже находится на змеле " << std::endl;
	}

}
