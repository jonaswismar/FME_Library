#include <Arduino.h>
#include <painlessMesh.h>

// Sprache
extern String i18n;
extern boolean spiffs_active;
extern boolean littlefs_active;

/*
 *Globale Variablen für Mesh
 */
extern String mesh_prefix;
extern String mesh_password;
extern unsigned int mesh_port;
extern unsigned int mesh_channel;
extern boolean mesh_containsRoot;
extern boolean mesh_isRoot;
extern IPAddress mesh_ip;