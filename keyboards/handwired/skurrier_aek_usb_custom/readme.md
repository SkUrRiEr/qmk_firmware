# skurrier_aek_usb_custom

![skurrier_aek_usb_custom](imgur.com image replace me!)

This specific keyboard is based on an Apple Extended Keyboard, but extensively modified to use some random USB keyboard controller. Almost nothing about this keyboard, other than the keyswitches, physical shape o the PCB and case are original.

See https://hackaday.io/project/175963-usb-apple-extended-keyboard/ for details.

Chances are you don't have this keyboard and aren't insane enough to build one, so this is unlikely to be useful to you.

This is also **not useful** for those with an original Apple Extended Keyboard as that keyboard doesn't have per-key diodes and the matrix layout this is designed for is completely different to the original Apple matrix.

The USB keyboard controller that originally drove this keyboard is labelled `FLK-3002 VER C` and `2005.8.30`. This layout should work with other _hand wired_ keyboards using that controller board which have had per-key diodes added. Note that there were some modifications made to the matrix: some columns were combined and the Alt and Win keys were swapped. TL;DR: you're going to have to do some work to use this, but if you do, it should just be a matter of adding a new layout with these modifications fixed.

* Keyboard Maintainer: [Julian Calaby](https://github.com/SkUrRiEr)
* Hardware Supported: Julian's Custom re-wired Apple Extended Keyboard Only.
* Hardware Availability: As this hardware is completely custom, it's not available unless you build it yourself. As this is a one-off project, there are no instructions on how to do this.

Make example for this keyboard (after setting up your build environment):

    make handwired/skurrier_aek_usb_custom:default

Flashing example for this keyboard:

    make handwired/skurrier_aek_usb_custom:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the Power key, top right, and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - this is the white button on the Teensy LC board - you need to open the keyboard to access this
