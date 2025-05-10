#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iostream>
#include <cstring>

int main() {

	char buffer[10];
	const char* input = "Esta cadena es demasiado larga";
	std::strcpy(buffer, input);  // <- Esto genera alerta
	std::cout << "Contenido: " << buffer << std::endl;
	return 0;

}