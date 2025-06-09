# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_QT_Server_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED QT_Server_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(QT_Server_FOUND FALSE)
  elseif(NOT QT_Server_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(QT_Server_FOUND FALSE)
  endif()
  return()
endif()
set(_QT_Server_CONFIG_INCLUDED TRUE)

# output package information
if(NOT QT_Server_FIND_QUIETLY)
  message(STATUS "Found QT_Server: 0.0.0 (${QT_Server_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'QT_Server' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${QT_Server_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(QT_Server_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${QT_Server_DIR}/${_extra}")
endforeach()
