#ifndef INCLUDES_H
#define INCLUDES_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>

#include <vector>
#include <map>
#include <chrono>
#include <fstream>
#include <thread>

#include <pthread.h>
#include <dirent.h>
#include <libgen.h>

#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/uio.h>
#include <fcntl.h>

#define TAG ("@cheatbot_owner")

// C++ aur Objective-C dono ke liye kaam karega
#define LOGD(...) printf("[DEBUG] " __VA_ARGS__); printf("\n")
#define LOGE(...) printf("[ERROR] " __VA_ARGS__); printf("\n")
#define LOGI(...) printf("[INFO] " __VA_ARGS__); printf("\n")
#define LOGW(...) printf("[WARN] " __VA_ARGS__); printf("\n")

#endif
