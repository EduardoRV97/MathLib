#pragma once
#include "Utilities.h"
#include "Vector3.h"
class Quaternion {
public:
  float w, x, y, z;

  // Constructor por defecto que inicializa el cuaternión a 0
  Quaternion() : w(0), x(0), y(0), z(0) {}

  // Constructor parametrizado que inicializa los valores de w, x, y, z
  Quaternion(float w, float x, float y, float z) : w(w), x(x), y(y), z(z) {}

  // Constructor que inicializa un cuaternión a partir de un ángulo y un eje (Vector3)
  Quaternion(float angle, const Vector3& axis) {
    float halfAngle = angle / 2;
    float sinHalfAngle = sin(halfAngle);
    w = cos(halfAngle);
    x = axis.x * sinHalfAngle;
    y = axis.y * sinHalfAngle;
    z = axis.z * sinHalfAngle;
  }

  // Sobrecarga del operador + para sumar dos cuaterniones
  Quaternion operator+(const Quaternion& q) const {
    return Quaternion(w + q.w, x + q.x, y + q.y, z + q.z);
  }

  // Sobrecarga del operador * para multiplicar un cuaternión por un escalar
  Quaternion operator*(float scalar) const {
    return Quaternion(w * scalar, x * scalar, y * scalar, z * scalar);
  }

  // Sobrecarga del operador * para multiplicar dos cuaterniones
  Quaternion operator*(const Quaternion& q) const {
    return Quaternion(
      w * q.w - x * q.x - y * q.y - z * q.z,  // Parte escalar
      w * q.x + x * q.w + y * q.z - z * q.y,  // Parte vectorial x
      w * q.y - x * q.z + y * q.w + z * q.x,  // Parte vectorial y
      w * q.z + x * q.y - y * q.x + z * q.w   // Parte vectorial z
    );
  }

  // Método para calcular la magnitud del cuaternión
  float magnitude() const {
    return sqrt(w * w + x * x + y * y + z * z);
  }

  // Método para normalizar el cuaternión (magnitud 1)
  Quaternion normalize() const {
    float mag = magnitude();
    return Quaternion(w / mag, x / mag, y / mag, z / mag);
  }

  // Método para calcular el conjugado del cuaternión
  Quaternion conjugate() const {
    return Quaternion(w, -x, -y, -z);
  }

  // Método para calcular el inverso del cuaternión
  Quaternion inverse() const {
    float magSquared = w * w + x * x + y * y + z * z;
    return conjugate() * (1.0f / magSquared);
  }

  // Método para rotar un vector utilizando el cuaternión
  Vector3 rotate(const Vector3& v) const {
    Quaternion qv(0, v.x, v.y, v.z);  // Convertir vector en cuaternión
    Quaternion result = (*this) * qv * inverse();  // Rotación
    return Vector3(result.x, result.y, result.z);  // Convertir de nuevo a vector
  }

  // Método para acceder a los componentes del cuaternión (no constante)
  float* data() {
    return &w;  // Devuelve un puntero al primer elemento (w)
  }

  // Método para acceder a los componentes del cuaternión (constante)
  const float* data() const {
    return &w;  // Devuelve un puntero constante al primer elemento (w)
  }
};