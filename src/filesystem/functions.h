#include <Arduino.h>
#include <ArduinoJson.h>
#include <FS.h>
#include <LittleFS.h>

#include "math\functions.h"
#include "variables.h"

String isType();

int totalBytes();

int usedBytes();

void initFileSystem();

uint16_t read16(fs::File &);

uint32_t read32(fs::File &);

void appendFile(const char *, const char *);

void deleteFile(const char *);

boolean existsFile(const char *);

void renameFile(const char *, const char *);

void writeFile(const char *, const char *);

void writeConfig();

void readConfig();