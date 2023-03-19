cmake_minimum_required(VERSION 3.19)
project(gdextension-{{ cookiecutter.project.lower() }})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(deps)

add_subdirectory(gameplay)

add_custom_target(create_link ALL
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${CMAKE_SOURCE_DIR}/gdproj/gameplay/bin"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different "gameplay/$<TARGET_FILE_NAME:{{ cookiecutter.project.lower() }}>" "${CMAKE_SOURCE_DIR}/gdproj/gameplay/bin/$<LOWER_CASE:${CMAKE_SYSTEM_NAME}>/$<TARGET_NAME:{{ cookiecutter.project.lower() }}>$<$<CONFIG:Debug>:_d>.dll"
        COMMENT "Copying output"
        DEPENDS {{ cookiecutter.project.lower() }}
)