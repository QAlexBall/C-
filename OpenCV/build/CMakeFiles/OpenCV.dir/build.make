# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/derenzhu/Desktop/github/my_github/C-/OpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenCV.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenCV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenCV.dir/flags.make

CMakeFiles/OpenCV.dir/main.cpp.o: CMakeFiles/OpenCV.dir/flags.make
CMakeFiles/OpenCV.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenCV.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenCV.dir/main.cpp.o -c /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/main.cpp

CMakeFiles/OpenCV.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenCV.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/main.cpp > CMakeFiles/OpenCV.dir/main.cpp.i

CMakeFiles/OpenCV.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenCV.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/main.cpp -o CMakeFiles/OpenCV.dir/main.cpp.s

# Object files for target OpenCV
OpenCV_OBJECTS = \
"CMakeFiles/OpenCV.dir/main.cpp.o"

# External object files for target OpenCV
OpenCV_EXTERNAL_OBJECTS =

OpenCV: CMakeFiles/OpenCV.dir/main.cpp.o
OpenCV: CMakeFiles/OpenCV.dir/build.make
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_gapi.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_stitching.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_aruco.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_bgsegm.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_bioinspired.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_ccalib.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_cvv.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_dnn_objdetect.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_dpm.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_face.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_fuzzy.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_hfs.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_img_hash.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_line_descriptor.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_quality.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_reg.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_rgbd.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_saliency.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_stereo.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_structured_light.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_superres.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_surface_matching.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_tracking.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_videostab.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_xfeatures2d.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_xobjdetect.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_xphoto.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_shape.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_datasets.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_plot.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_text.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_dnn.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_highgui.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_ml.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_phase_unwrapping.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_optflow.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_ximgproc.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_video.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_videoio.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_imgcodecs.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_objdetect.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_calib3d.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_features2d.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_flann.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_photo.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_imgproc.4.1.0.dylib
OpenCV: /Users/derenzhu/Desktop/github/Other/installation/OpenCV-4.1.0/lib/libopencv_core.4.1.0.dylib
OpenCV: CMakeFiles/OpenCV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpenCV"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenCV.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenCV.dir/build: OpenCV

.PHONY : CMakeFiles/OpenCV.dir/build

CMakeFiles/OpenCV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenCV.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenCV.dir/clean

CMakeFiles/OpenCV.dir/depend:
	cd /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/derenzhu/Desktop/github/my_github/C-/OpenCV /Users/derenzhu/Desktop/github/my_github/C-/OpenCV /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build /Users/derenzhu/Desktop/github/my_github/C-/OpenCV/build/CMakeFiles/OpenCV.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenCV.dir/depend

