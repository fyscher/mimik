# Mimik System Tree

Mimik System Tree, or Mimik for short, is a implementation of a POSIX-Like operating system, as well as many other free to use data. All under the same license and with the same goal.


## Goal

The goal of Mimik is to provide a completely free, and open, collection of everything someone would have on their computer. All of this work is designed to be objective, easy to use, for the user, and conforming to open source ideals. Compatibility with existing standards will hold, but new Mimik created standards are preferred.


# Building

Mimik uses [Tup](gittup.org) for its build system.

Just run:

`$ tup init`

`$ tup`

The system should be build into the `./dist/` directory. All build configuration is done in `Tuprules.tup`. All source configuration is done in `conf.h` files in the utility/function's directory, don't worry this will change in the future for obvious reasons.
