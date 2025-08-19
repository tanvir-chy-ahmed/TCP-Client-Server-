# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ClientSide_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ClientSide_autogen.dir\\ParseCache.txt"
  "ClientSide_autogen"
  )
endif()
