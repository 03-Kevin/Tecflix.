cmake_minimum_required(VERSION 3.14)
project(TecFlix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lcurl")
set(SOURCE_FILES main.cpp)

find_package(Qt5Widgets REQUIRED)
find_package( Qt5Core REQUIRED )
find_package( Qt5Gui REQUIRED )
add_executable(TecFlix main.cpp Peliculas/pelicula.cpp Peliculas/pelicula.h Lista/list.cpp Lista/list.h Lista/node.cpp Lista/node.h IMDB/leerIMdB.cpp IMDB/leerIMdB.h Paginacion/Pagina.cpp Paginacion/Pagina.h Ventana/ventana.h Ventana/ventana.cpp IMDB/descarga.cpp IMDB/descarga.h Ventana/ventana2.cpp Ventana/ventana2.h)
target_link_libraries(TecFlix Qt5::Widgets Qt5::Core Qt5::Gui )

target_link_libraries(TecFlix curl)
qt5_use_modules( TecFlix Core Widgets Gui )