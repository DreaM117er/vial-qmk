# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

SERIAL_DRIVER = vendor

I2C_DRIVER_REQUIRED = yes
OS_DETECTION_ENABLE = yes
CHIBIOS_OS_ENABLE = yes
SPLIT_USB_DETECT = yes

# Three devices choose one to enable: Azoteq IQS5xx or Cirque Pinnacle I2C or Encoder.
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = azoteq_iqs5xx
# POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

# ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes
