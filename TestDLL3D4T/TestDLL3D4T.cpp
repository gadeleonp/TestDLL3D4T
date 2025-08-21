// TestDLL3D4T.cpp : Define las funciones exportadas del archivo DLL.
//

#include "pch.h"
#include "framework.h"
#include "TestDLL3D4T.h"
#include <cstdlib> // Para malloc y free

// Ejemplo de variable exportada
TESTDLL3D4T_API int nTestDLL3D4T = 0;

// Ejemplo de función exportada
TESTDLL3D4T_API int fnTestDLL3D4T(void)
{
    return 42; // Puedes cambiar este valor si lo deseas
}

// Constructor de clase exportada
CTestDLL3D4T::CTestDLL3D4T()
{
    // Inicialización si es necesario
    return;
}

// ==============================
// Funciones exportadas en estilo C
// ==============================

extern "C" {

    TESTDLL3D4T_API int Sumar(int a, int b) {
        return a + b;
    }

    TESTDLL3D4T_API int Multiplicar(int a, int b) {
        return a * b;
    }

    TESTDLL3D4T_API Vertex* ThreeDVertex(int* count) {
        *count = 8;

        Vertex* vertices = static_cast<Vertex*>(malloc(sizeof(Vertex) * (*count)));
        if (!vertices) return nullptr;

        vertices[0] = { 0, 0, 0 };
        vertices[1] = { 0, 0, 1 };
        vertices[2] = { 0, 1, 0 };
        vertices[3] = { 0, 1, 1 };
        vertices[4] = { 1, 0, 0 };
        vertices[5] = { 1, 0, 1 };
        vertices[6] = { 1, 1, 0 };
        vertices[7] = { 1, 1, 1 };

        return vertices;
    }

    TESTDLL3D4T_API void FreeVertices(Vertex* vertices) {
        free(vertices);
    }
}
