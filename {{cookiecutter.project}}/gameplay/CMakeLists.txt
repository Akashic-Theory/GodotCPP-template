project({{ cookiecutter.project.lower() }})

set(SRCS src/gdextension_registration.cpp)

add_library(${PROJECT_NAME} SHARED ${SRCS})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} PUBLIC godot::cpp)
