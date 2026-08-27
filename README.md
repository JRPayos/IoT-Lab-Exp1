# IoT-Lab-Exp1
Internet of Things Laboratory Experiment 1
## Implementation
### Connections
LDR pin = GPI0 34
LED pin = GPIO 4
Power Source = 3v3 and GND
### Debuging
the default THRESHOLD value is = 1600, but on the actual implementation and testing in laboratory environment, it only reads around 100-240 raw value. Hence, the THRESHOLD value is changed to 100, as below 100 raw value would mean dimmed/dark environment, that would turn on the LED.
