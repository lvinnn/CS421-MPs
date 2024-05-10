#include "solution.hpp"

std::vector<int> get_ints_from_file(std::string file_name) {
  std::ifstream ifs(file_name);
  int value = 0;
  std::vector<int> v;
  while (ifs.good()) {
    ifs >> value;
    if (ifs.fail()) {
      ifs.clear();
      ifs.ignore(1, '\n');
    } else {
      v.push_back(value);
    }
  }
  return v;
}
