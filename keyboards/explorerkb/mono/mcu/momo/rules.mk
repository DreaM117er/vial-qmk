# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

SERIAL_DRIVER = vendor

# POINTING_DEVICE_DRIVER = azoteq_iqs5xx #setup for Keyboard No
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c #defalt to make/flash, setup for Keyboard Mo
