add_library(libPID SHARED PID.cpp newPID.cpp PID.cpp)

add_executable(shell-app main.cpp)
target_link_libraries(shell-app libPID)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
