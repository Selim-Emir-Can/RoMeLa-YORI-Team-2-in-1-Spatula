# RoMeLa-YORI-Team-2-in-1-Spatula

## Table of Contents
* [Summary](#Summary)
* [Setup](#Setup)
* [Software](#Software)


## Summary
The 2 in 1 spatula is equipped with a scraper spatula, flipper spatula and a clamp which are both controlled by a 35kg high Torque Coreless Motor servo.
The servos are connected to an Arduino Uno R3 which is used to control the positions of the flipper spatula and the clamp. Every part except the servos are
made from ABS plastic resulting in a mass of 578.27 grams. The torque required for the motor to lift 1kg of food is determined to be 2.037 N*m or 20.37kg/cm.
Using a factor of safety of 1.5, servos that have a 35kg/cm stall torque at 5.0-7.0V operating voltage are used. A more visual explanation of the design can be
found [here](https://selim-emir-can.github.io/2in1Spatula.html).


## Setup
For 3D printing a nozzle with a 6mm diameter was used at 30% infill for all parts. Two [M4 threaded rods](https://www.mcmaster.com/98861A582/) and 
[M4 nuts](https://www.amazon.com/DYWISHKEY-Stainless-Countersunk-Assortment-Wrenches/dp/B08QD6TT2N/ref=asc_df_B08QD6TT2N/?tag=hyprod-20&linkCode=df0&hvadid=507831016250&hvpos=&hvnetw=g&hvrand=6106143586867696378&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030941&hvtargid=pla-1237691604900&psc=1)
were used to connect the clamp part to the servo and Four [M4 Threaded rods](https://www.mcmaster.com/98861A582/) and 
[M4 nuts](https://www.amazon.com/DYWISHKEY-Stainless-Countersunk-Assortment-Wrenches/dp/B08QD6TT2N/ref=asc_df_B08QD6TT2N/?tag=hyprod-20&linkCode=df0&hvadid=507831016250&hvpos=&hvnetw=g&hvrand=6106143586867696378&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030941&hvtargid=pla-1237691604900&psc=1)
 were used to connect the flipper spatula part to the servo. Note theat the [M4 Threaded rods](https://www.mcmaster.com/98861A582/) were
 cut to the proper length using a hacksaw and an Arbor Press. Two [M4 heated set inserts](https://www.amazon.com/DYWISHKEY-Knurled-Threaded-Embedment-Assortment/dp/B07MWBJB67/ref=asc_df_B07MWBJB67/?tag=hyprod-20&linkCode=df0&hvadid=312131520159&hvpos=&hvnetw=g&hvrand=11343827623887592503&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030941&hvtargid=pla-649244892719&psc=1)
and [M4 screws](https://www.amazon.com/DYWISHKEY-Stainless-Countersunk-Assortment-Wrenches/dp/B08QD6TT2N/ref=asc_df_B08QD6TT2N/?tag=hyprod-20&linkCode=df0&hvadid=507831016250&hvpos=&hvnetw=g&hvrand=6106143586867696378&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9030941&hvtargid=pla-1237691604900&psc=1)
were used to connect the scraper spatula part and the part that holds the servo motors.

## Software
CookingRobotSpatula.ino requires the installation of the Servo.h library. The code uses int digital pin 3 to control the clamp and digital pin 9 to control the flipper
spatula. Digital pin 2 is used to configure the spatula to flip food. Digital pin 4 is used to switch to the scraper spatula configuration and digital pin 7 is used to
switch to the flipper spatula configuration.
