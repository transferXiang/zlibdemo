# 工程名称
set(TARGET_NAME zlibio)

# 头文件
set(${TARGET_NAME}_INCLUDE_DIR 
    ${INCLUDE_DIR})
include_directories(${${TARGET_NAME}_INCLUDE_DIR})

# 库文件路径
set(${TARGET_NAME}_LIBDIR 
    ${LIB_DIR})
link_directories(${${TARGET_NAME}_LIBDIR})

# 依赖的库文件
set(${TARGET_NAME}_LIBS 
    zdll)
link_libraries(${${TARGET_NAME}_LIBS})

# 设置源文件目录
set(${TARGET_NAME}_SRC_DIR ${SRC_DIR}/zlibio)

# 设置源文件
set(${TARGET_NAME}_SRC_FILES 
    ${${TARGET_NAME}_SRC_DIR}/fileio.cpp)

# 生成可执行文件
add_library(${TARGET_NAME}  ${${TARGET_NAME}_SRC_FILES})

# 安装
install(TARGETS         ${TARGET_NAME}          DESTINATION ${INSTALL_DIR})
install(DIRECTORY       ${LIB_DIR}/             DESTINATION ${INSTALL_DIR})