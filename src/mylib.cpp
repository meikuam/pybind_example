#include <vector>
#include <iostream>
#include <pybind11/stl.h>
#include <pybind11/pybind11.h>


std::vector<int> add(std::vector<int> &a, std::vector<int> &b, int num) {
    std::vector<int> c;

      for (int  i = 0 ; i < num; i++) {
          c.push_back(a[i] + b[i]);
      }
    return c;
}

namespace py = pybind11;

PYBIND11_MODULE(pybind_example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("add", &add, "A function which adds a to b and writes it to c with num elements");
}