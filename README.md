# Sequential Line Search

This repository contains a part of the source codes used in our research project on the **sequential line search** method (which is a variant of Bayesian optimization). The core algorithm is implemented in the source codes in the "sequential_line_search" folder. This repository also contains the following example applications:

- **bayesian_optimization_1d**: A simple demo of the standard Bayesian optimization applied to a one-dimensional test function. 
- **sequential_line_search_nd**: A simple demo of the sequential line search method applied to a multi-dimensional test function.
- **bayesian_optimization_1d_gui**: A visual demo of the standard Bayesian optimization applied to a one-dimensional test function. (Qt5 required)
- **bayesian_optimization_2d_gui**: A visual demo of the standard Bayesian optimization applied to a two-dimensional test function. (Qt5 required)
- **sequential_line_search_2d_gui**: A visual interactive demo of the sequential line search method applied to a two-dimensional test function. (Qt5 required)

## Project Web Site

<http://koyama.xyz/project/sequential_line_search/>

## Publication

Yuki Koyama, Issei Sato, Daisuke Sakamoto, and Takeo Igarashi. 2017. Sequential Line Search for Efficient Visual Design Optimization by Crowds. ACM Trans. Graph. 36, 4, pp.48:1--48:11 (2017). (a.k.a. Proceedings of SIGGRAPH 2017)
DOI: https://doi.org/10.1145/3072959.3073598

## Dependencies

### Required for Core Algorithms

- Eigen <http://eigen.tuxfamily.org/> (`brew install eigen`)
- NLopt <https://nlopt.readthedocs.io/> (included via gitsubmodule)
- timer <https://github.com/yuki-koyama/timer> (included via gitsubmodule)

### Required for Command Line Demos

- (None)

### Required for Visual Demos

- Qt5 <http://doc.qt.io/qt-5/> (`brew install qt`)
- OpenGL
- tinycolormap <https://github.com/yuki-koyama/tinycolormap> (included via gitsubmodule)

### Required for Photo Enhancement Demos

- Qt5 <http://doc.qt.io/qt-5/> (`brew install qt`)
- OpenGL
- tinycolormap <https://github.com/yuki-koyama/tinycolormap> (included via gitsubmodule)
- enhancer <https://github.com/yuki-koyama/enhancer> (included via gitsubmodule)
- parallel-util <https://github.com/yuki-koyama/parallel-util> (included via gitsubmodule)

## How to Compile and Run

We use [cmake](https://cmake.org/) for managing the source codes. You can compile the core module and the demo applications at once by, for example, 
```
git clone https://github.com/yuki-koyama/sequential-line-search.git
cd sequential-line-search
mkdir build
cd build
cmake ../
make
```
Then you can run the applications by, for example,
```
./demos/sequential_line_search_2d_gui/SequentialLineSearch2dGui
```
Note that you might need to specify CMAKE_PREFIX_PATH adequately so that cmake can find Qt5.

We tested on macOS 10.13 only.

## License

MIT License.

## Contact and Feedback

Yuki Koyama (<yuki@koyama.xyz>)
