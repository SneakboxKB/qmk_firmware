# Sneakbox M4 PCB

![Sneakbox M4 PCB](https://i.imgur.com/pMZNqLXl.jpg)

M4 is a fork of the original Sneakbox AliceClone PCB. The "M" moniker now refers to all future Sneakbox Alice PCBs with the USB-C socket mounted to the underside of the circuit board.

Compared to the parent AliceClone PCB, M4 has unique additions:

- Optional (2.25u + 1u) left spacebar with flipped position (1u + 2.25u)

- Optionally split (2.75u) right spacebar into (1.25u + 1.5u)

- Support for *one* a EC-11 Push-button rotary encoder in either of two locations on the navigation cluster: position 1 (Esc) or position 3 (PgDn). While the pushbutton action follows the function of the parent MX switch, the rotation actions are the same between position 1 and position 2 as they are hard wired to the same pins. Therefore, please note that rotation actions of position 1 and position 3 *cannot* be modified separately from one another.
was made to better highlight this variant's compatibility with the Sneakbox MGA for which this PCB is optimized.

Firmware covers all M4 variants (hotswap, soldered, breakout, etc.)

* Keyboard Maintainer: [mujimanic](https://github.com/mujimanic)
* Hardware Supported: Any Alice-layout case.
* Hardware Availability: [sneakbox.design](https://sneakbox.com/products/m4-alice-pcbs-for-mga-case)

Make example for this keyboard (after setting up your build environment):

    make sneakbox/m4:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
