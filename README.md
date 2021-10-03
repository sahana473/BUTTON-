## Abstract
In this project, a button is interfaced with Arduino Uno to turn on and off the LED when button is pressed.

## Hardware Components

- Arduino Uno
- SPST push Button
- LED

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection:

- D3 of Arduino Uno is connected to the Button
- D4 of Arduino Uno is connected to the LED

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135745438-2deae4ae-9da3-4f45-b245-975a5df501c1.PNG width="800" height="400">

- Download code. ino and open in the Arduino tool.
- Go to tools ->select Board->select Arduino UNO.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in       Program file->Click OK.
<img src=https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG width="800" height="400">

- Click on the Run button.

## Output:

<img src=https://user-images.githubusercontent.com/84024571/135745531-14574407-9d6b-4a74-9817-d3668ef95d16.PNG width="800" height="400">
