# repo-template

Template for Tachyon projects

![GitHub Actions](https://github.com/tachyon-computer/repo-template/actions/workflows/build_and_test.yml/badge.svg?branch=master) &nbsp;
[![codecov](https://codecov.io/gh/tachyon-computer/repo-template/branch/master/graph/badge.svg?token=17P7YFDXYU)](https://codecov.io/gh/tachyon-computer/repo-template) &nbsp;
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Ftachyon-computer%2Frepo-template.svg?type=shield)](https://app.fossa.com/projects/git%2Bgithub.com%2Ftachyon-computer%2Frepo-template?ref=badge_shield) &nbsp;
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template)  

[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=sqale_rating)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template) &nbsp;
[![Reliability Rating](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=reliability_rating)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template) &nbsp;
[![Technical Debt](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=sqale_index)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template)<br/>
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=bugs)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template) &nbsp;
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template) &nbsp;
[![Lines of Code](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_repo-template&metric=ncloc)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_repo-template)

## What's included

* Modern CMake skeleton (building an application and a library)
* Tests powered by [Catch2](https://github.com/catchorg/Catch2) framework
* GitHub Actions CI for build and running tests
* Configuration for generating documentation with Doxygen
* pre-commit hook for checking commit message format
* pre-commit hook for checking license header
* Code formatting with clang-format
* Static code analysis with clang-tidy
* Tags generation with ctags
* Integration with [codecov](https://about.codecov.io/)
* Integration with [SonarCloud](https://sonarcloud.io/)
* Integration with [FOSSA](https://fossa.com/)

## How to use
This is a repository template, and as such should be used as a new project starter.  

However this is a completely working project, which can be build using CMake:
```
mkdir build && cd build
cmake -S .. -B . -G Ninja
ninja
```
CMake options can be configured with `ccmake`


## License

Tachyon repository template is licensed under a 3-clause BSD license.
