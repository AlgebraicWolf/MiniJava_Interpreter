CMAKE_BUILD_DIR = build
CMAKE_SOURCE_DIR = .

.PHONY: all $(CMAKE_BUILD_DIR)/build_executable

all : $(CMAKE_BUILD_DIR)/build_executable

$(CMAKE_BUILD_DIR)/Makefile: $(CMAKE_SOURCE_DIR)/CMakeLists.txt
	cmake -S $(<D) -B $(@D)

$(CMAKE_BUILD_DIR)/build_executable: $(CMAKE_BUILD_DIR)/Makefile
	$(MAKE) -C $(@D)
