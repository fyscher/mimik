# Mimik System Tree

Mimik System Tree, or Mimik for short, is a implementation of a POSIX-Like operating system, as well as many other free to use data. All under the same license and with the same goal.

## Goal

The goal of Mimik is to provide a completely free, and open, collection of everything someone would have on their computer. All of this work is designed to be objective, easy to use, for the user, and conforming to open source ideals. Compatibility with existing standards will hold, but new Mimik created standards are preferred.


# Building

Mimik uses [Tup](gittup.org) for its build system.

Just run:

`$ tup init`

`$ tup`

The system should be built into the `./dist/` directory. All build configuration is done in `tup.config`. All source configuration is done in `conf.h` files in the utility/function's directory, don't worry this will change in the future for obvious reasons.


# Source Tree Organization

## `/bin/ -> /bin/`

Executable binaries that are required for the system to boot.

## `/etc/ -> /etc/`

Full system configuration files, user independent.

## `/lib/ -> /lib/, /lib<arch>/, /usr/lib/, /usr/lib<arch>/`

Libraries that are required for the system to boot. 
The static version of these libraries should be distributed in the `/usr/lib...` directories.

## `/usr.bin/ -> /usr/bin/`

Executable binaries released with the distribution, not needing an addition installation step.

## `/usr.lib/ -> /usr/lib/`

Libraries released with the distribution, not needing an addition installation step.

## `/share/ -> /usr/share/`

Architecture independent work.

## `/share/<locale>/ -> /usr/share/locale/<locale>/`

Locale dependent work.

## `/external/ -> /`

The same organization of the root tree, but containing work under separate provided licensing.
