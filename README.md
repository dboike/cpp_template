# cpp_template
Template for creating CPP projects with gtest support.  This is intended to be a very simple c++ project based on GNU make.  If you need more complexity to cross-compile in multiple environments, use cmake or autotools.
# Assertions
All source files added to the src/ folder are expected to have a companion ".h" file of the same name.

All files in src/ are expected to have unit test code in the test/ folder.

# Dependencies
This project assues you have installed googletest (git clone https://github.com/google/googletest.git)
