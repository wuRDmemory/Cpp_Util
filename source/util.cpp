//
// Created by ubuntu on 18-4-29.
//

#include "util.h"

using namespace std;
namespace fs = boost::filesystem;

namespace u_util{
    vector<string> list_dir(const string& path, const string& pattern) {
        vector<string> ret;
        const fs::path root_path(path);
        if (fs::exists(root_path)==false) {
            cout << "Your path is not exist!" << endl;
            return ret;
        }

        fs::directory_iterator dir_iter(root_path), iter_end;
        for (; dir_iter != iter_end; ++dir_iter) {
            if (pattern == ""){
                ret.push_back(dir_iter->path().string());
            } else {
                string file_name = dir_iter->path().filename().string();
                if (file_name.find(pattern)!=std::string::npos) {
                    ret.push_back(file_name);
                }
            }
        }
        return ret;
    }

    vector<string> split(const std::string& path, char* characters) {
        vector<string> ret;
        if (path.length() == 0) {
            printf("Your path is empty! Please check it!");
            return ret;
        }
        const char* c_path = path.c_str();
        char* __s = strdup(c_path);
        for(char* p = strsep(&__s, characters); p!=NULL; p=strsep(&__s, characters)) {
            if (strlen(p) != 0)
                ret.push_back(string(p));
        }
        return ret;
    }
}

