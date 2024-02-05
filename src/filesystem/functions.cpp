#include <Arduino.h>
#include <ArduinoJson.h>
#include <FS.h>
#if defined(ESP32)
#include <FFat.h>
#endif
#include <LittleFS.h>

#include "math\functions.h"
#include "variables.h"

#define FS_NO_GLOBALS
#define FORMAT_FFAT false
#define FORMAT_SPIFFS_IF_FAILED false

String isType()
{
  if (spiffs_active == true)
  {
    return F("SPIFFS");
  }
  else if (littlefs_active == true)
  {
    return F("LITTLEFS");
  }
  else
  {
    return F("FAT");
  }
}

int totalBytes()
{
#if defined(ESP32)
  if (spiffs_active == true)
  {
    return SPIFFS.totalBytes();
  }
  else if (littlefs_active == true)
  {
    return LittleFS.totalBytes();
  }
  else
  {
    return FFat.totalBytes();
  }
#elif defined(ESP8266)
  if (spiffs_active == true)
  {
    FSInfo fs_info;
    SPIFFS.info(fs_info);
    return fs_info.totalBytes;
  }
  else if (littlefs_active == true)
  {
    FSInfo fs_info;
    LittleFS.info(fs_info);
    return fs_info.totalBytes;
  }
  else
  {
    return 0;
  }
#endif
}

int usedBytes()
{
#if defined(ESP32)
  if (spiffs_active == true)
  {
    return SPIFFS.usedBytes();
  }
  else if (littlefs_active == true)
  {
    return LittleFS.usedBytes();
  }
  else
  {
    return FFat.usedBytes();
  }
#elif defined(ESP8266)
  if (spiffs_active == true)
  {
    FSInfo fs_info;
    SPIFFS.info(fs_info);
    return fs_info.usedBytes;
  }
  else if (littlefs_active == true)
  {
    FSInfo fs_info;
    LittleFS.info(fs_info);
    return fs_info.usedBytes;
  }
  else
  {
    return 0;
  }
#endif
}

void initFileSystem()
{
  if (spiffs_active == true)
  {
    if (!SPIFFS.begin())
    {
    }
  }
  else if (littlefs_active == true)
  {
    if (!LittleFS.begin())
    {
    }
  }
  else
  {
#if defined(ESP32)
    if (!FFat.begin())
    {
    }
#endif
  }
}

uint16_t read16(fs::File &f)
{
  uint16_t result;
  ((uint8_t *)&result)[0] = f.read(); // LSB
  ((uint8_t *)&result)[1] = f.read(); // MSB
  return result;
}

uint32_t read32(fs::File &f)
{
  uint32_t result;
  ((uint8_t *)&result)[0] = f.read(); // LSB
  ((uint8_t *)&result)[1] = f.read();
  ((uint8_t *)&result)[2] = f.read();
  ((uint8_t *)&result)[3] = f.read(); // MSB
  return result;
}

void appendFile(const char *path, const char *message)
{
  fs::File file;
  if (spiffs_active == true)
  {
#if defined(ESP32)
    file = SPIFFS.open(path, FILE_APPEND);
#elif defined(ESP8266)
    file = SPIFFS.open(path, "a");
#endif
  }
  else if (littlefs_active == true)
  {
#if defined(ESP32)
    file = LittleFS.open(path, FILE_APPEND);
#elif defined(ESP8266)
    file = LittleFS.open(path, "a");
#endif
  }
  else
  {
#if defined(ESP32)
    file = FFat.open(path, FILE_APPEND);
#endif
  }
  if (!file)
  {
    return;
  }
  if (file.print(message))
  {
  }
  else
  {
  }
  file.close();
}

void deleteFile(fs::FS &fs, const char *path)
{
  if (spiffs_active == true)
  {
    SPIFFS.remove(path);
  }
  else if (littlefs_active == true)
  {
    LittleFS.remove(path);
  }
  else
  {
#if defined(ESP32)
    FFat.remove(path);
#endif
  }
}

boolean existsFile(const char *path)
{
  fs::File file;
  if (spiffs_active == true)
  {
#if defined(ESP32)
    file = SPIFFS.open(path, FILE_READ);
#elif defined(ESP8266)
    file = SPIFFS.open(path, "r");
#endif
  }
  else if (littlefs_active == true)
  {
#if defined(ESP32)
    file = LittleFS.open(path, FILE_READ);
#elif defined(ESP8266)
    file = LittleFS.open(path, "r");
#endif
  }
  else
  {
#if defined(ESP32)
    file = FFat.open(path, FILE_READ);
#endif
  }
  if (!file || file.isDirectory())
  {
    file.close();
    return false;
  }
  file.close();
  return true;
}

void renameFile(const char *path1, const char *path2)
{
  if (spiffs_active == true)
  {
    SPIFFS.rename(path1, path2);
  }
  else if (littlefs_active == true)
  {
    LittleFS.rename(path1, path2);
  }
  else
  {
#if defined(ESP32)
    FFat.rename(path1, path2);
#endif
  }
}

void writeFile(const char *path, const char *message)
{
  fs::File file;
  if (spiffs_active == true)
  {
#if defined(ESP32)
    file = SPIFFS.open(path, FILE_WRITE);
#elif defined(ESP8266)
    file = SPIFFS.open(path, "w");
#endif
  }
  else if (littlefs_active == true)
  {
#if defined(ESP32)
    file = LittleFS.open(path, FILE_WRITE);
#elif defined(ESP8266)
    file = LittleFS.open(path, "w");
#endif
  }
  else
  {
#if defined(ESP32)
    file = FFat.open(path, FILE_WRITE);
#endif
  }
  if (!file)
  {
    return;
  }
  if (file.print(message))
  {
  }
  else
  {
  }
  file.close();
}

void writeConfig()
{
  fs::File settingsFS;
  if (spiffs_active == true)
  {
#if defined(ESP32)
    settingsFS = SPIFFS.open("/config_common.json", FILE_WRITE);
#elif defined(ESP8266)
    settingsFS = SPIFFS.open("/config_common.json", "w");
#endif
  }
  else if (littlefs_active == true)
  {
#if defined(ESP32)
    settingsFS = LittleFS.open("/config_common.json", FILE_WRITE);
#elif defined(ESP8266)
    settingsFS = LittleFS.open("/config_common.json", "w");
#endif
  }
  else
  {
#if defined(ESP32)
    settingsFS = FFat.open("/config_common.json", FILE_WRITE);
#endif
  }
  if (!settingsFS)
  {
    return;
  }
  StaticJsonDocument<768> settingsDoc;

  settingsDoc["i18n"] = i18n;
  settingsDoc["mesh_prefix"] = mesh_prefix;
  settingsDoc["mesh_password"] = mesh_password;
  settingsDoc["mesh_port"] = mesh_port;
  settingsDoc["mesh_channel"] = mesh_channel;
  settingsDoc["mesh_containsRoot"] = mesh_containsRoot;
  settingsDoc["mesh_isRoot"] = mesh_isRoot;
  serializeJson(settingsDoc, settingsFS);
  settingsFS.close();
}

void readConfig()
{
  fs::File settingsFS;
  if (spiffs_active == true)
  {
#if defined(ESP32)
    settingsFS = SPIFFS.open("/config_common.json", FILE_READ);
#elif defined(ESP8266)
    settingsFS = SPIFFS.open("/config_common.json", "r");
#endif
  }
  else if (littlefs_active == true)
  {
#if defined(ESP32)
    settingsFS = LittleFS.open("/config_common.json", FILE_READ);
#elif defined(ESP8266)
    settingsFS = LittleFS.open("/config_common.json", "r");
#endif
  }
  else
  {
#if defined(ESP32)
    settingsFS = FFat.open("/config_common.json", FILE_READ);
#endif
  }
  if (!settingsFS)
  {
    return;
  }
  StaticJsonDocument<768> settingsDoc;

  DeserializationError error = deserializeJson(settingsDoc, settingsFS);

  if (error)
  {
    // Serial.print("deserializeJson() failed: ");
    // Serial.println(error.c_str());
    return;
  }

  String helper3 = settingsDoc["mesh_prefix"];
  mesh_prefix = helper3;
  String helper4 = settingsDoc["mesh_password"];
  mesh_password = helper4;
  mesh_port = settingsDoc["mesh_port"];
  mesh_channel = settingsDoc["mesh_channel"];
  mesh_containsRoot = settingsDoc["mesh_containsRoot"];
  mesh_isRoot = settingsDoc["mesh_isRoot"];
  settingsFS.close();
}