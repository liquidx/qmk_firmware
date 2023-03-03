Cheatsheet

https://docs.qmk.fm/#/
https://drop.com/mechanical-keyboards/configurator/preset/ctrl--default
https://drop.com/talk/9382/how-to-configure-your-ctrl-keyboard

```
qmk setup
qmk compile -kb drop/ctrl -km liquidx_mac       
# Fn+B for 3 seconds      
mdloader --first ./drop_ctrl_liquidx_mac.bin --restart
```