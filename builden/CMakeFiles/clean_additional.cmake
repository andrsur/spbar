# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/spbar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/spbar_autogen.dir/ParseCache.txt"
  "spbar_autogen"
  )
endif()
