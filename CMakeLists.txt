set(SCAF_VAR_PROJECT_NAME "StockAPI")
set(SCAF_VAR_SCAFFOLD_RELATIVE_DIR "Scaffold")

cmake_minimum_required(VERSION 3.8)
project(${SCAF_VAR_PROJECT_NAME})

include(${SCAF_VAR_SCAFFOLD_RELATIVE_DIR}/Project.cmake NO_POLICY_SCOPE)
add_subdirectory(${SCAF_VAR_MODULES_RELATIVE_DIR})
