cmake_minimum_required(VERSION 3.14)
project(Hospital)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Trabajador.h Trabajador.cpp Secretaria.h Secretaria.cpp Gerente.h Gerente.cpp Vendedor.h Vendedor.cpp)

add_executable(ProyectoHospitalSierra ${SOURCE_FILES}))
