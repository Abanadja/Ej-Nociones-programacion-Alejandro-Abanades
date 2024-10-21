cmake_minimum_required(VERSION 3.29)
project(Ej_Nociones_programacion_Alejandro_Abanades_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

include_directories(project1)
include_directories(project2)

add_executable(Ej_Nociones_programacion_Alejandro_Abanades_main
        project1/Estudiante.cpp
        project1/Estudiante.h
        project1/main.cpp
        project1/main.h
        project1/Persona.cpp
        project1/Persona.h
)
add_executable(Ej_Nociones_programacion_Alejandro_Abanades_main2

        project2/funciones.cpp
        project2/funciones.h
        project2/main2.cpp
        project2/main2.h
)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(Ej_Nociones_programacion_Alejandro_Abanades_main2 PRIVATE fmt::fmt)

add_library(matematicas STATIC "project2/matematicas.cpp")
add_library(matematicas2 SHARED "project2/matematicas.cpp")