#include "esphome/core/log.h"
#include "regenmeterAAP.h"

namespace esphome {
  namespace regenmeter {

    static const char *TAG = "regenmeter.output";

    void RegenOutput::setup(){

    }

    void RegenOutput::write_state(float state){

    }

    void RegenOutput::dump_config() {
        ESP_LOGCONFIG(TAG, "Empty custom float output");
    }

    } //namespace regenmeter
} //namespace esphome

