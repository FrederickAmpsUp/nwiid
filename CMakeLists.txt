cmake_minimum_required(VERSION 3.10)

project(nwiid
  DESCRIPTION "NWiid Wiimote Interface"
  VERSION 0.6.1
  LANGUAGES C
)

add_subdirectory(impl)
add_library(nwiid ${NWIID_SOURCES})
target_include_directories(nwiid PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)
target_link_libraries(nwiid PUBLIC bluetooth rt)

option(NWIID_ENABLE_TESTING ON)
if (NWIID_ENABLE_TESTING)
  add_subdirectory(tests)
endif()
