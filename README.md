# Some useful function of cpp

## CMakeLists.txt
1.在CMakeLists.txt中添加Boost的依赖，首先要确保系统中加入了Boost库的相关文件
2.在文件中添加find_package(Boost REQUIRED COMPONENTS serialization filesystem)，注意不要省事儿少些后面的COMPONENTS
