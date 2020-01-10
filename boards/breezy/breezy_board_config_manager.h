#ifndef BREEZYBOARDCONFIGMANAGER_H
#define BREEZYBOARDCONFIGMANAGER_H

#include "board_config_manager.h"

namespace rosflight_firmware
{
class BreezyBoardConfigManager : public BoardConfigManager
{
public:
  hardware_config_t get_max_config(device_t device) override;
  ConfigManager::ConfigResponse check_config_change(device_t device, hardware_config_t config) override;
  void get_device_name(device_t device, uint8_t (&name)[20]) override;
  void get_config_name(device_t device, hardware_config_t config, uint8_t (&name)[20]) override;
};
} // namespace rosflight_firmware

#endif // BREEZYBOARDCONFIGMANAGER_H
