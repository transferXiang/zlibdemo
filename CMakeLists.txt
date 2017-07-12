# 项目名称
project (ZlibDemo)

# 检查Cmake版本
cmake_minimum_required (VERSION 2.6)

# 设置当前项目目录
set(SRC_DIR ${PROJECT_SOURCE_DIR}/src)

# 设置安装目录
set(INSTALL_DIR ${PROJECT_SOURCE_DIR}/install)

# 设置头文件目录
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/3rdparty/include)

# 设置库目录
if(WIN32)
    set(LIB_DIR ${PROJECT_SOURCE_DIR}/3rdparty/lib/win32)
else(WIN32)
    set(LIB_DIR ${PROJECT_SOURCE_DIR}/3rdparty/lib/linux)
endif(WIN32)

# 添加子目录
add_subdirectory(src)
