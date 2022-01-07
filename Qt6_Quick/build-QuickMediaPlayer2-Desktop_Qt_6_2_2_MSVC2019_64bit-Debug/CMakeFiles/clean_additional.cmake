# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQuickMediaPlayer2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQuickMediaPlayer2_autogen.dir\\ParseCache.txt"
  "appQuickMediaPlayer2_autogen"
  )
endif()
