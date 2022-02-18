# Zeta

Systems programming language for Tachyon computer

![GitHub Actions](https://github.com/tachyon-computer/zeta/actions/workflows/build_and_test.yml/badge.svg?branch=master) &nbsp;
[![codecov](https://codecov.io/gh/tachyon-computer/zeta/branch/master/graph/badge.svg?token=17P7YFDXYU)](https://codecov.io/gh/tachyon-computer/zeta) &nbsp;
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Ftachyon-computer%2Fzeta.svg?type=shield)](https://app.fossa.com/projects/git%2Bgithub.com%2Ftachyon-computer%2Fzeta?ref=badge_shield) &nbsp;
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta)  

[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=sqale_rating)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta) &nbsp;
[![Reliability Rating](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=reliability_rating)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta) &nbsp;
[![Technical Debt](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=sqale_index)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta)<br/>
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=bugs)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta) &nbsp;
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta) &nbsp;
[![Lines of Code](https://sonarcloud.io/api/project_badges/measure?project=tachyon-computer_zeta&metric=ncloc)](https://sonarcloud.io/summary/new_code?id=tachyon-computer_zeta)

## How to build

```
mkdir build && cd build
cmake -S .. -B . -G Ninja
ninja
```
CMake options can be configured with `ccmake`

## How to run

Compiler can be run from the `build/bin` directory, but a more convinient way is to install it by
```
ninja install
```
By default that will install the compiler to the `/usr/local` directory.

## License

Tachyon repository template is licensed under a 3-clause BSD license.
