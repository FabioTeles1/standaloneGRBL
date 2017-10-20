# Standalone GRBL
Hi, I hope you found this project useful. If you have any questions or problems, please go to [**Issues**](https://github.com/RunnyBore604/standaloneGRBL/issues) tab and post your messages in the appropriate topic.

## ARDUINO NANO - 2 AXIS EMBEDDED CONTROLLER

### SCHEMATIC
![schematic](/uploads/schematic.jpg?raw=true)

### BUTTONS
**LEFT**, **RIGHT**, **UP** and **DOWN** allows you to manually move the machine, the motion will continue as long as the button is pressed. Otherwise, the axis will move exactly 0.1 mm each time the button is pressed.

**RUN/PAUSE** allows you to open a U-disk file from the SD card. Also this button pauses a program and resumes running from a pause.

**LASER** turns on/off laser.

**XY-0** moves the laser to the origin. Hold to set the origin.

**HOME** will home all axes, if your machine has home switches. Otherwise, this button does nothing.

**STOP** stops a running program. Also this button turns off the laser.

## ARDUINO MEGA2560 - 3 AXIS CONTROLLER

### PINOUT
![pinout](/uploads/pinout_mega2560.jpg?raw=true)

### BUTTONS
**X+**, **X-**, **Y+**, **Y-**, **Z+** and **Z-** allows you to manually move the machine, the motion will continue as long as the button is pressed. Otherwise, the axis will move exactly 0.1 or 0.5 mm each time the button is pressed.

**XY-0** and **Z-0** sets the datum position for the corresponding axes.

**HOME** will home all axes, if your machine has home switches. Otherwise, this button zeroes machine position for all axes, with confirmation.

**HIGH/LOW** toggles the speed of manual movements.

**ON/OFF** starts/stops spindle.

**ORIGIN** moves all axes to the origin, first lifts up Z axis if necessary.

**RUN/PAUSE** allows you to open a U-disk file from the SD card. Also this button pauses a program and resumes running from a pause.

**STOP** stops a running program. Also this button allows you configure speed of manual movements.

**MENU** + **1**-**9** switches coordinate systems.

**ON/OFF** + **Z+** or **Z-** switches spindle gear.

## DOWNLOADS
[standaloneGRBL_2axis.zip](https://yadi.sk/d/7bHaRurQ3LtvVW)

[standaloneGRBL_3axis.zip](https://yadi.sk/d/mtgaGE1t3NvQUv)

***
If you found this software useful, make a small donation: [PayPal](https://www.paypal.me/runnybore604) / [Yandex.Money](https://money.yandex.ru/to/410013968246480)
