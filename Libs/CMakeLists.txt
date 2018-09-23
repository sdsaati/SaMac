
# we can add as many as .cxx files using space
add_library (SASELib SHARED SASELib.cpp)

# when other targets want to use our Hello library, they need our include files:
# PUBLIC : include path search for both INTERFACE_INCLUDE_DIRECTORIES AND INCLUDE_DIRECTORIES
# PRIVATE : include path will search for INCLUDE_DIRECTORIES
# INTERFACE : include path will search for INTERFACE_DIRECTORIES
target_include_directories (SASELib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
