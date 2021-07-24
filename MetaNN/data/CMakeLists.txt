add_library(data INTERFACE)
target_include_directories(data INTERFACE
    "${PROJECT_SOURCE_DIR}/data"
    "${PROJECT_SOURCE_DIR}/data/batch"
    "${PROJECT_SOURCE_DIR}/data/facilities")
