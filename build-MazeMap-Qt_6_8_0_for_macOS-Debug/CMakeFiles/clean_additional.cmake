# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MazeMap_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MazeMap_autogen.dir/ParseCache.txt"
  "MazeMap_autogen"
  )
endif()
