#include "esphome/core/log.h"
#include "regenmeter.h"

namespace esphome {
namespace empty_float_output {

static const char *TAG = "regenmeter.output";

void EmptyFloatOutput::setup(){

}

void EmptyFloatOutput::write_state(float state){

}

void EmptyFloatOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty custom float output");
}

} //namespace empty_float_output
} //namespace esphome

