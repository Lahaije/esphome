#include "esphome/core/log.h"
#include "empty_binary_sensor.h"

namespace esphome {
namespace empty_binary_sensor {

static const char *TAG = "empty_binary_sensor.binary_sensor";

void EmptyBinarySensor::setup() {
	ESP_LOGD("main", "Hello World THIS IS A MESSAGE");
    publish_state(True);
}
  
void EmptyBinarySensor::update() {
	ESP_LOGD("main", "Hello World THIS IS A MESSAGE");

}

void EmptyBinarySensor::dump_config() {
    ESP_LOGCONFIG(TAG, "Custom binary sensor");
}

} //namespace empty_binary_sensor
} //namespace esphome