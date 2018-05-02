#include "util.h"

using namespace std;

int main() {
    const string path("/home/ubuntu/APR/zhang_test/");
    vector<string> file_list = u_util::list_dir(path, string(".py"));
    for (auto iter = file_list.begin(); iter!=file_list.end();iter++) {
        cout << *iter << endl;
    }
    cout << path << endl;
    char* split_cs = "/";
    vector<string> splits = u_util::split(path, split_cs);
    cout << splits.size()<<endl;
    for (auto iter = splits.begin(); iter!=splits.end();iter++) {
        cout << *iter << endl;
    }
    return 0;
}