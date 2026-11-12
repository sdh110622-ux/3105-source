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

// iOS Logging
#import <Foundation/Foundation.h>

#define TAG ("@cheatbot_owner")

#define LOGD(...) NSLog(@"[DEBUG] " __VA_ARGS__)
#define LOGE(...) NSLog(@"[ERROR] " __VA_ARGS__)
#define LOGI(...) NSLog(@"[INFO] " __VA_ARGS__)
#define LOGW(...) NSLog(@"[WARN] " __VA_ARGS__)

#endif
