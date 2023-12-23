# Компиляторы
CXX := clang++
CXX_FLAGS := -g -Wall -Wl,-O1 -pipe -fPIC -mtune=native -march=native

# Директории
SRC_DIR := src
BIN_DIR := bin

# Исходные коды
CXXSOURCES := $(wildcard $(SRC_DIR)/*.cpp)
BIN_CPP_FILES := $(patsubst src/%.cpp,$(BIN_DIR)/%,$(CXXSOURCES))

BINS := $(wildcard $(BIN_DIR)/*)

SUDO		  	= sudo
DEL_FILE      	= rm -f
CHK_DIR_EXISTS	= test -d
MKDIR         	= mkdir -p
COPY          	= cp -f
COPY_FILE     	= cp -f
COPY_DIR      	= cp -f -R
INSTALL_FILE   	= install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   	= cp -f -R
DEL_FILE      	= rm -f
SYMLINK       	= ln -f -s
DEL_DIR       	= rmdir
MOVE          	= mv -f
TAR           	= tar -cf
COMPRESS      	= gzip -9f
LIBS_DIRS     	= -I./include/
LIBS 		  	= $(LIBS_DIRS)
SED           	= sed
STRIP         	= strip

all: build install clean

build: $(BIN_CPP_FILES)

install:
	@for file in $(wildcard $(BIN_DIR)/*); do \
		$(SUDO) $(INSTALL_PROGRAM) $$file /usr/local/bin/; \
	done

# Компиляция C++ файлов
$(BIN_DIR)/%: src/%.cpp
	$(CXX) $(CXX_FLAGS) -o $@ $<

clean:
	$(DEL_FILE) bin/*

.PHONY: build install clean
