project(model_library)

set(HEADER_FILES clock.h)
set(SOURCE_FILES clock.cpp)

add_library(model_library ${SOURCE_FILES} ${HEADER_FILES})