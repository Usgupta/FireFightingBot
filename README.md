# FireFightingBot


<img width="420" height ="320" alt="image" src="https://user-images.githubusercontent.com/57800546/153726201-7b1a8bb0-1502-432c-a56a-f1550ea165ea.png"> <img width="520" height ="320" alt="image" src="https://github.com/Usgupta/FireFightingBot/blob/main/Fire%20Fighting%20bot%20youtube%20version.gif">

## Theme

Disaster relief and emergency rescue – eg. Devices or instruments that help relief or medical workers in providing effective relief measures or supplies to the needy.  

## Problem Statement

Firefighters are placed continuously under high-risk situations when fighting fires and the risks range from severe burns to even death. 

## Proposed solution and Physics consideration

We propose an autonomous fire truck that can be remotely controlled and would assist the firefighters in putting out fires. However, we have scaled down our idea to something more manageable and attainable. Hence, our fire truck is fitted with an infrared sensor to identify higher infrared radiation that flames, and fires would emit. It would then travel towards the location, and once it is within range, a water pump would spray water towards the targeted area.

## Physics model for the working mechanism of the solution? 

Kinematics concepts were used to determine the distance at which the water would be sprayed due to its parabolic motion. At 45 degrees, it would provide the furthest distance between the fire truck and the targeted area. Ideally, a further distance would be necessary to reduce the chances of the fire truck being lit on fire.

The infrared sensor works based on concepts of radiation from a body. As per Stephen-Boltzmann Law: total energy emitted by a black body is proportional to the fourth power of absolute temperature. The sensor senses the energy radiating from the small flame we place in the area. A large part of the electromagnetic wave emitted from a fire will be infrared light. However, as seen from our need to do our troubleshooting in darker colder regions in school, light and current temperature of the area can significantly affect the readings. 

The range of 0 to 1023 on the Arduino was for a maximal of 1.5m and for that specific change in energy. The model we had obtained had black epoxy covering it to prevent visible light, a large source of interference. This reveals that visible light can, in fact, significantly interfere with the energy readings from the sensor. The light and heat from the location of use would hence need to be considered as well.

With more accurate electromagnetic wave readings, we can even determine the fuel used in the fire. As per Wien’s displacement law, the temperature of an object is inversely proportional to the wavelength of the electromagnetic wave emitted. 

## Assessment of the functioning of the prototype (objectives, specifications, and expectation)

The prototype was able to detect the emitted infrared radiation from our source and successfully stops and sprays water within the targeted area. However, the prototype would automatically begin moving forward when plugged in as the infrared radiation from the surrounding is feeding false signals to the infrared sensor. 

While the prototype was only able to work within a minimal distance, it would move forward when a slight energy difference is experienced, stopping an exact distance away from the fire. 

That distance is exactly the maximal distance the pump and the angle of elevation (of 45degree) can produce. The prototype is then able to spit water onto the fire as expected. 

Overall, the prototype does function, and it would be able to extinguish possible fires if upscaled and given some modifications.

## Further improvements

Firstly, more sensors can be attached around the fire truck for it to detect the location of the fire more accurately. We recommend 4. This will enable the autonomous vehicle to determine the direction of the fire without interference through too many readings. The difference in the readings between the two sensors can be resolved using vector sum to pinpoint the exact location of the fire. 

Furthermore, the electronics of the fire truck can be enclosed within a casing to prevent damage and to waterproof it. This will prevent loose connections and increase the lifespan and use of the autonomous vehicle.

Also, wheels that can change the direction can be added to the fire truck as it can currently only move in two directions, forward and backwards. More wheels increase the directional ability of the truck and make the truck more flexible, increasing its potential uses.

Another suggestion put forth suggested we used artificial intelligence to determine the position of the fire, hence identifying the optimal angle of elevation a specified distance away from the robot, instead of merely configuring the distance away from the fire as we had previously done so.

