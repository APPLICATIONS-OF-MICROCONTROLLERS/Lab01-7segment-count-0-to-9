{
  "version": 1,
  "author": "_08 นิรภาดา",
  "editor": "wokwi",
  "parts": [
    { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 0, "left": 0, "attrs": {} },
    {
      "type": "wokwi-7segment",
      "id": "sevseg1",
      "top": 62.58,
      "left": 225.88,
      "attrs": { "color": "#00ff00", "common": "cathode" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r1",
      "top": 90.35,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r2",
      "top": 99.95,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r3",
      "top": 109.55,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r5",
      "top": 119.15,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r6",
      "top": 128.75,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r7",
      "top": 138.35,
      "left": 115.2,
      "attrs": { "value": "1000" }
    },
    {
      "type": "wokwi-resistor",
      "id": "r8",
      "top": 147.95,
      "left": 115.2,
      "attrs": { "value": "1000" }
    }
  ],
  "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "esp:19", "r1:1", "green", [ "h0" ] ],
    [ "esp:18", "r2:1", "green", [ "h0" ] ],
    [ "esp:5", "r3:1", "green", [ "h0" ] ],
    [ "esp:17", "r5:1", "green", [ "h0" ] ],
    [ "esp:16", "r6:1", "green", [ "h0" ] ],
    [ "esp:4", "r7:1", "green", [ "h0" ] ],
    [ "esp:0", "r8:1", "green", [ "h0" ] ],
    [ "sevseg1:A", "r1:2", "green", [ "v-18.36", "h-76.8", "v48" ] ],
    [ "sevseg1:B", "r2:2", "green", [ "v-27.96", "h-67.2", "v67.2", "h-19.2" ] ],
    [ "sevseg1:C", "r3:2", "green", [ "v38.4", "h-67.2", "v-57.6" ] ],
    [ "sevseg1:D", "r5:2", "green", [ "v19.2", "h-38.4", "v-28.8" ] ],
    [ "sevseg1:E", "r6:2", "green", [ "v0" ] ],
    [ "sevseg1:F", "r7:2", "green", [ "v-8.76", "h-28.8", "v86.4" ] ],
    [ "sevseg1:G", "r8:2", "green", [ "v96.84", "h-48" ] ],
    [ "esp:GND.2", "sevseg1:COM.2", "black", [ "v0", "h148.84" ] ]
  ],
  "dependencies": {}
}
