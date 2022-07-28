# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/obstruction_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/obstruction_autogen.dir/ParseCache.txt"
  "obstruction_autogen"
  )
endif()
