cmake_minimum_required(VERSION 3.16)

project(Task_5 LANGUAGES C)

add_executable(Task_5 main.c)

include(GNUInstallDirs)
install(TARGETS Task_5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
