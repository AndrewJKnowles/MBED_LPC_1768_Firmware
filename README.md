# MBED_LPC_1768_Firmware

I may of found a work around for the issue of serial communications failure between the MBED LPC1768 and PC/Laptops

Serial programs seem to run without issue on my PC however, if i then use a different PC/laptop the serial communications fail. On the other PC, I inspected the driver details for the LPC1768 which showed:

**driver version as 6.1.7600.16385 dated 06/2006 with the driver provider as Microsoft**

Following this link: https://forums.mbed.com/t/new-beta-firmware-for-lpc1768/18917. I updated the firmware of the LPC1768, which I didn’t feel necessary as it was already upto date. Surprisingly It worked. Upon inspecting the driver details again, I found that the windows driver had updated and now showed:

**driver version as 10.0.19041.746 dated 06/2006 with the driver provider as Microsoft**

It would seem that the firmware update also updates the windows driver though this would suggest that with the use of each new PC/Laptop you will need to carry out the firmware update again and again to update the driver regardless if your using the same LPC device. This is a little fustrating as I would of expected the relevant windows drivers to be updated when carrying out actions such as updating MBED studios, or even installing/re-installing studios.
