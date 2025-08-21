// El siguiente bloque ifdef muestra la forma estándar de crear macros que hacen la exportación
// de un DLL más sencillo. Todos los archivos de este archivo DLL se compilan con TESTDLL3D4T_EXPORTS
// símbolo definido en la línea de comandos. Este símbolo no debe definirse en ningún proyecto
// que use este archivo DLL. De este modo, otros proyectos cuyos archivos de código fuente incluyan el archivo verán
// interpretan que las funciones TESTDLL3D4T_API se importan de un archivo DLL, mientras que este archivo DLL interpreta los símbolos
// definidos en esta macro como si fueran exportados.
#pragma once

#ifdef TESTDLL3D4T_EXPORTS
#define TESTDLL3D4T_API __declspec(dllexport)
#else
#define TESTDLL3D4T_API __declspec(dllimport)
#endif

// Clase exportada del DLL
class TESTDLL3D4T_API CTestDLL3D4T {
public:
    CTestDLL3D4T(void);
    // TODO: agregar métodos aquí.
};

// Variable y función de ejemplo generada por Visual Studio
extern TESTDLL3D4T_API int nTestDLL3D4T;
TESTDLL3D4T_API int fnTestDLL3D4T(void);

// Estructura para representar un vértice 3D
struct Vertex {
    float x;
    float y;
    float z;
};

// Funciones exportadas para C++
extern "C" {
    TESTDLL3D4T_API int Sumar(int a, int b);
    TESTDLL3D4T_API int Multiplicar(int a, int b);
    TESTDLL3D4T_API Vertex* ThreeDVertex(int* count);
    TESTDLL3D4T_API void FreeVertices(Vertex* vertices);
}
