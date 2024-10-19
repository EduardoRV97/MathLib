// MathLib.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Prerequisitos.h"
#include "Vector2.h"

int main()
{
  /*
  * Prueba de Vector 2
  */
  Vector2 v1(3.0f, 4.0f);
  Vector2 v2;
  Vector2 v3 = v1 + Vector2(1.0f, 2.0f);
  Vector2 v4 = v1 - Vector2(0.5f, 0.5f);
  Vector2 v5 = v1 * 2.0f;

  float mag = v1.magnitude();
  Vector2 v6 = v1.normalize();
  const float* data = v1.data();

  std::cout << "v1: (" << v1.x << ", " << v1.y << ")\n";
  std::cout << "v3: (" << v3.x << ", " << v3.y << ")\n";
  std::cout << "v4: (" << v4.x << ", " << v4.y << ")\n";
  std::cout << "v5: (" << v5.x << ", " << v5.y << ")\n";
  std::cout << "Magnitud de v1: " << mag << "\n";
  std::cout << "v6 (normalizado): (" << v6.x << ", " << v6.y << ")\n";
  std::cout << "Datos de v1: (" << data[0] << ", " << data[1] << ")\n";

  return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
