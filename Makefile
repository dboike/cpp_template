# Setup common project environment
include make_env.in

# Define sources for this project
SOURCES := $(SRC_DIR)/main.cpp
SOURCES += $(SRC_DIR)/utils.cpp

# Name of IMAGE(s) to be generated and installed
IMAGE := $(IMAGE_DIR)/template1
INSTALL_FILES = $(IMAGE)

# Optional: Define system services to be installed
SERVICE_NAME = myservice 
SERVICE_DIR = $(SRC_DIR)

#INCLUDES += -I/usr/include/libxml2
#LDFLAGS += -lcurl -lxml2
CXXFLAGS += -Wno-unused-variable -Wno-unused-function

# Custom Rules

# Common project defined rules
include make_rules.in	
