//
// Created by ubuntu on 18-4-29.
//

#ifndef UTIL_UTIL_H
#define UTIL_UTIL_H

#include <vector>
#include <string>
#include <boost/filesystem.hpp>
#include <iostream>

namespace u_util {
    std::vector<std::string> list_dir(const std::string& path, const std::string& pattern="");
    std::vector<std::string> split(const std::string& path, char* characters);
}


#endif //UTIL_UTIL_H
