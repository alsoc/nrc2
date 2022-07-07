cmake_minimum_required(VERSION 3.2)

project(nrc)

# CMake options ---------------------------------------------------------------
# -----------------------------------------------------------------------------
option(NRC_FP16 "Add half precision functions (FP16)" OFF)

# Print CMake options values --------------------------------------------------
# -----------------------------------------------------------------------------
message(STATUS "NRC options: ")
message(STATUS "  * NRC_FP16: '${NRC_FP16}'")

# Define CMake variables ------------------------------------------------------
# -----------------------------------------------------------------------------
set(src_dir src)
set(inc_dir include)
set(lib_dir lib)

# Declare source files to compile ---------------------------------------------
# -----------------------------------------------------------------------------
list(APPEND src_files
	${src_dir}/nralloc1.c
	${src_dir}/nralloc2.c
	${src_dir}/nralloc2x.c
	${src_dir}/nralloc3.c
	${src_dir}/nrarith0.c
	${src_dir}/nrarith1.c
	${src_dir}/nrarith2.c
	${src_dir}/nrarith2x.c
	${src_dir}/nrbool1.c
	${src_dir}/nrbool2.c
	${src_dir}/nrio0.c
	${src_dir}/nrio1.c
	${src_dir}/nrio1x.c
	${src_dir}/nrio2.c
	${src_dir}/nrio2x.c
	${src_dir}/nrio3.c
	${src_dir}/nrkernel.c
	${src_dir}/nrlinalg.c
	${src_dir}/nrlut.c
	${src_dir}/nrmem1.c
	${src_dir}/nrmem1x.c
	${src_dir}/nrmem2.c
	${src_dir}/nrmem2x.c
	${src_dir}/nrset1.c
	${src_dir}/nrset2.c
	${src_dir}/nrset2x.c
	${src_dir}/nrset3.c
	${src_dir}/nrsort1.c
	${src_dir}/nrsort2.c
	${src_dir}/nrwrap1.c
	${src_dir}/nrwrap2.c)

if(NRC_FP16)
	list(APPEND src_files ${src_dir}/nrfp16.c)
endif()

# Compiler generic options ----------------------------------------------------
# -----------------------------------------------------------------------------
# enable C99
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Specify the library paths ---------------------------------------------------
# -----------------------------------------------------------------------------
set(EXECUTABLE_OUTPUT_PATH ${bin_dir})
set(LIBRARY_OUTPUT_PATH ${lib_dir})

# Create the library ----------------------------------------------------------
# -----------------------------------------------------------------------------
# objects
add_library(nrc-obj OBJECT ${src_files})
set_target_properties(nrc-obj PROPERTIES POSITION_INDEPENDENT_CODE ON) # set -fpic
# library
add_library(nrc-slib STATIC $<TARGET_OBJECTS:nrc-obj>)
set_target_properties(nrc-slib PROPERTIES OUTPUT_NAME nrc POSITION_INDEPENDENT_CODE ON) # set -fpic

# Add definitions -------------------------------------------------------------
# -----------------------------------------------------------------------------
target_compile_definitions(nrc-obj PUBLIC GTODay) # C_OS_FLAGS
target_compile_definitions(nrc-obj PUBLIC CLI) # C_CONFIG_FLAGS

# Set include directory -------------------------------------------------------
# -----------------------------------------------------------------------------
target_include_directories(nrc-obj PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${inc_dir}/>)
target_include_directories(nrc-slib PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${inc_dir}/>)

# Export target ---------------------------------------------------------------
# -----------------------------------------------------------------------------
export(TARGETS nrc-slib NAMESPACE nrc:: FILE "${lib_dir}/cmake/nrc/nrc-config.cmake")



