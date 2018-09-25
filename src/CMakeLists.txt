add_subdirectory(model)
add_executable(model_ main.cpp)
target_link_libraries(model_  model_library)

