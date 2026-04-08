# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/HttpSv_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HttpSv_autogen.dir/ParseCache.txt"
  "HttpSv_autogen"
  )
endif()
