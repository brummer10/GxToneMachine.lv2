# GxToneMachine
Analogous simulation of the Foxx(*) Tone Machine Pedal as LV2 plugin

![GxToneMachine](https://raw.githubusercontent.com/brummer10/GxToneMachine.lv2/master/GxToneMachine.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxToneMachine:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2


(*) 'Other product names modeled in this software are trademarks of their respective companies that do not endorse and are not associated or affiliated with this simulation.
Foxx is trademark or trade name of other manufacturer and was used merely to identify the product whose sound was reviewed in the creation of this product.
All other trademarks are the property of their respective holders.'
