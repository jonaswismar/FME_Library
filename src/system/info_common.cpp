#include <Arduino.h>

#include <ESPLib.h>

#include "filesystem\functions_common.h"
#include "i18n\functions_common.h"
#include "math\functions_common.h"

#include "variables_common.h"

const String divider = "/";
const String unitMHz = " MHz";
const String unitKB = " KB";

String getHardwareInfo(int subject)
{
  String info = "";
  if (subject == 1)
  {
    info += "Chip: ";
    info += getChipModel();
  }
  else if (subject == 2)
  {
    info += "Revision: ";
    info += getChipRevision();
  }
  else if (subject == 3)
  {
    info += getI18n("menu_service_info_cores") + ": ";
    info += getChipCores();
  }
  else if (subject == 4)
  {
    info += "Freq: ";
    info += getCpuFreqMHz();
    info += unitMHz;
  }
  else if (subject == 5)
  {
    int heapsize = 0;
    heapsize = getHeapSize();
    info += "Heap " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(heapsize - getFreeHeap(), 1);
    info += divider;
    info += calcBytes(heapsize, 1);
    info += unitKB;
  }
  else if (subject == 6)
  {
    int psramsize = 0;
    int psramsizefree = 0;
    psramsize = getPsramSize();
    psramsizefree = getFreePsram();
    info += "Psram " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(psramsize - psramsizefree, 1);
    info += divider;
    info += calcBytes(psramsize, 1);
    info += unitKB;
  }
  else if (subject == 7)
  {
    info += "Flash " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(getFlashChipSize(), 1);
    info += unitKB;
  }
  else if (subject == 8)
  {
    info += "Flash Mode: ";
    info += getFlashChipMode();
  }
  else if (subject == 9)
  {
    info += "Flash " + getI18n("menu_service_info_speed") + ": ";
    info += calcBytes(getFlashChipSpeed(), 2);
    info += unitMHz;
  }
  return info;
}

String getSoftwareInfo(int subject)
{
  String info = "";
  if (subject == 1)
  {
    info += "SDK: ";
    info += getSDKVersion();
  }
  else if (subject == 2)
  {
    int sketchsize = getSketchSize();
    info += "Sketch " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(sketchsize - getFreeSketchSpace(), 1);
    info += divider;
    info += calcBytes(sketchsize, 1);
    info += unitKB;
  }
  else if (subject == 3)
  {
    info += "Sketch MD5: ";
    info += getSketchMD5();
  }
  else if (subject == 4)
  {
    info += isType() + " " + getI18n("menu_service_info_size") + ": ";
    info += calcBytes(usedBytes(), 1);
    info += divider;
    info += calcBytes(totalBytes(), 1);
    info += unitKB;
  }
  else if (subject == 5)
  {
    info += getI18n("menu_service_info_compile") + ": ";
    info += __DATE__ " " __TIME__;
  }
  return info;
}