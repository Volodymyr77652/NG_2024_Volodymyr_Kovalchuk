cmake_minimum_required(VERSION 3.16)

project(Task_2 LANGUAGES C)

add_executable(Task_2 main.c)

include(GNUInstallDirs)
install(TARGETS Task_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
