project (Hello)
set(HEADERS contacts.h phone1.h)
set(SOURCES contacts.cpp main.cpp phone1.cpp)
add_executable(Hello ${HEADERS} ${SOURCES})
