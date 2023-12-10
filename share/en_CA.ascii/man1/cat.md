# Prologue

This manuel is part of the Mimik System Distribution, other implementation may differ.
Some compatibility with existing standards may be met but to do not expect any.


# Name

cat - concatenate files


# Synopsis

`cat [-u] [file...]`


# Description

concatenate *file*(s), in sequence, to standard output. If `-` is given as a *file*, or no *file* is given, then read from standard input.


# Options

## -u

Disable all buffering.


# Operands

## file

The file to concatenated in the sequence it appears to standard output. If `-` is given then standard input shall be read, but not closed nor reopened.


# Environment Variables

## Lang

Default value for all LC values.

## LC_ALL

Override all LC values.

## LC_MESSAGES

The locale for diagnostic messages.

## NLSPATH

A list of paths to check for locale data.


# StdIn

Used is no *file* is given, or if `-` is given as a *file*.


# StdOut

The contents of *file* concatenated in sequence.


# StdErr

Used for diagnostic messages.


# Input Files

No particular format.


# Output Files

None.


# Exit Status

## 0

Success.

## >0

Failure.


# Extended Description

None.


# Future Directions

None.


# See Also

[more](more.1) - A paging version of *cat*
