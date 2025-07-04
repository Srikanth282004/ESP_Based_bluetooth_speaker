#include "BluetoothA2DPSink.h"

BluetoothA2DPSink a2dp_sink;

void setup() {

  //VCC 3.3v to 5v
  //BCK D27
  //LRC D26
  //DIN D25
    i2s_pin_config_t my_pin_config = {
        .bck_io_num = 27,
        .ws_io_num = 26,
        .data_out_num = 25,
        .data_in_num = I2S_PIN_NO_CHANGE
    };
    a2dp_sink.set_pin_config(my_pin_config);
    a2dp_sink.start("MyMusic");
}

void loop() {
}
