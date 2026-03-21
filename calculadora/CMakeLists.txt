cmake_minimum_required(VERSION 3.16)
project(calculadora LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)   # Genera automáticamente los archivos moc
set(CMAKE_AUTOUIC ON)   # Procesa automáticamente los .ui
set(CMAKE_AUTORCC ON)   # Procesa automáticamente los .qrc si los usas

# Busca Qt6 (cambia a Qt5 si lo prefieres)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Fuentes y cabeceras
set(SOURCES
    src/main.cpp
    src/calculadora.cpp
    src/mainwindow.cpp
)

set(HEADERS
    src/calculadora.hpp
    src/mainwindow.hpp
)

set(FORMS
    src/gui/calculadora.ui
)

# Crea el ejecutable
add_executable(calculadora ${SOURCES} ${HEADERS} ${FORMS})

# Enlaza con Qt
target_link_libraries(calculadora Qt6::Widgets)
