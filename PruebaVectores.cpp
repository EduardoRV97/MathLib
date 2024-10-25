// MathLib.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Utilities.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Quaternion.h"


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
  
  Vector3 v31(5.0f, 6.0f, 13.0f);
  Vector3 v32;
  Vector3 v33 = v31 + Vector3(3.0f, 6.0f, 13.0f);
  Vector3 v34 = v31 - Vector3(3.0f, 6.0f, 13.0f);
  Vector3 v35 = v31 * 4.0f;
  float mag3 = v31.magnitud();
  Vector3 v36 = v31.normalize();
  const float* data3 = v31.data();
  
  Vector4 v41(5.0f, 6.0f, 13.0f, 18.0f);
  Vector4 v42;
  Vector4 v43 = v41 + Vector4(3.0f, 6.0f, 13.0f, 2.0f);
  Vector4 v44 = v41 - Vector4(3.0f, 6.0f, 13.0f, 2.0f);
  Vector4 v45 = v41 * 4.0f;
  float mag4 = v41.magnitud();
  Vector4 v46 = v41.normalize();
  const float* data4 = v31.data();

  Quaternion q1(1.0f, 0.0f, 0.0f, 0.0f);
  Vector3 axis(0.0f, 1.0f, 0.0f);
  float angle = 90.0f;
  Quaternion q2 = Quaternion(angle, axis);
  Quaternion q3 = q1 + q2;
  Quaternion q4 = q1 * q2;
  Quaternion q5 = q2 * 0.5f;
  float magq = q2.magnitude();
  Quaternion qConjugate = q2.conjugate();
  Quaternion qInverse = q2.inverse();
  Vector3 v(1.0f, 0.0f, 0.0f);
  Vector3 vRotated = q2.rotate(v);

  cout << "Pruebas Vector 2" << "\n";
  cout << "v1: (" << v1.x << ", " << v1.y << ")\n";
  cout << "v3: (" << v3.x << ", " << v3.y << ")\n";
  cout << "v4: (" << v4.x << ", " << v4.y << ")\n";
  cout << "v5: (" << v5.x << ", " << v5.y << ")\n";
  cout << "Magnitud de v1: " << mag << "\n";
  cout << "v6 (normalizado): (" << v6.x << ", " << v6.y << ")\n";
  cout << "Datos de v1: (" << data[0] << ", " << data[1] << ")\n";

  cout << "Pruebas Vector 3" << "\n";
  cout << "v31: (" << v31.x << ", " << v31.y << ", " << v31.z << ")\n";
  cout << "v33: (" << v33.x << ", " << v33.y << ", " << v33.z << ")\n";
  cout << "v34: (" << v34.x << ", " << v34.y << ", " << v34.z << ")\n";
  cout << "v35: (" << v35.x << ", " << v35.y << ", " << v35.z << ")\n";
  cout << "La magnitud del vector 31 es " << mag3 << "\n";
  cout << "La normalizacion del vector 31 es " << v36.x << ", " << v36.y << ", " << v36.z <<"\n";
  cout << "La data es " << data[0] << ", " << data[1] << ", " << data[2] << "\n";
  
  cout << "Pruebas Vector 4" << "\n";
  cout << "v41: (" << v41.x << ", " << v41.y << ", " << v41.z << ", " << v41.w << ")\n";
  cout << "v43: (" << v43.x << ", " << v43.y << ", " << v43.z << ", " << v43.w << ")\n";
  cout << "v44: (" << v44.x << ", " << v44.y << ", " << v44.z << ", " << v44.w << ")\n";
  cout << "v45: (" << v45.x << ", " << v45.y << ", " << v45.z << ", " << v45.w << ")\n";
  cout << "La magnitud del vector 41 es " << mag4 << "\n";
  cout << "La normalizacion del vector 41 es " << v46.x << ", " << v46.y << ", " << v46.z <<"\n";
  cout << "La data es " << data[0] << ", " << data[1] << ", " << data[2] << ",  " << data[3] << "\n";
  
  cout << "Pruebas Quaternion" << "\n";
  cout << "q1: (" << q1.x << ", " << q1.y << ", " << q1.z << ", " << q1.w << ")\n";
  cout << "q2: (" << q2.x << ", " << q2.y << ", " << q2.z << ", " << q2.w << ")\n";
  cout << "q3: (" << q3.x << ", " << q3.y << ", " << q3.z << ", " << q3.w << ")\n";
  cout << "q4: (" << q4.x << ", " << q4.y << ", " << q4.z << ", " << q4.w << ")\n";
  cout << "q5: (" << q5.x << ", " << q5.y << ", " << q5.z << ", " << q5.w << ")\n";
  cout << "La magnitud del Quaternion 2 es " << magq << "\n";
  cout << "La conjacion del Quaternion 2 es " << qConjugate.x << ", " << qConjugate.y << ", " << qConjugate.z << ", " << qConjugate.w << "\n";
  cout << "La inversa del Quaternion 2 es " << qInverse.x << ", " << qInverse.y << ", " << qInverse.z << ", " << qInverse.w << "\n";
  cout << "Se rota un vector 3 " << vRotated.x << ", " << vRotated.y << ", " << vRotated.z << "\n";




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
