# Rocket-chip-HPM
Config and read hardware performance counters for rocket chip

Rocket chip project implements plenty of performance counter that might be helpful, but does not provide any example. This project is an example on how to setup and read performance counters.

# FAQ
## How to use HPM counters in RISC-V?

 - A brief guide can be found [here, at Chap. 3.1.1](https://static.dev.sifive.com/U54-MC-RVCoreIP.pdf). 
 - Rocket chip's HPM counter support can be found from ```perfEvents``` at [here](https://github.com/chipsalliance/rocket-chip/blob/master/src/main/scala/rocket/RocketCore.scala)

## Why I always get 0?

Rocket chip does not enable HPM counters by default. To enable them, you need to set ``` RocketCoreParams.nPerfCounters ``` to the value you need.
    

